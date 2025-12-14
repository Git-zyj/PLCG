/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_8 == (28672 || 121))))));
    var_16 = (max((((var_14 ? var_14 : var_3))), ((min((max(var_1, var_2)), ((max(var_4, var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [1] [i_0] = var_14;
                            arr_9 [i_0] [i_0] = var_6;
                            var_17 -= (arr_7 [i_2] [i_3 + 1] [i_3] [i_2]);
                            arr_10 [i_0] [i_1] [i_0] = (-(((((arr_1 [i_2] [i_1]) / var_7)))));
                            arr_11 [i_0] [i_1] [i_0] = (((!var_3) ? (!4) : (!var_12)));
                        }
                    }
                }
                arr_12 [i_0] = ((((!(arr_2 [i_0])))));
                var_18 = (max(var_18, (((min((arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 2]), var_4))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((9223372036854775807 & 255) ? (((arr_5 [i_0] [i_0 + 2] [i_0 - 2]) ? (arr_5 [i_0] [i_0 - 1] [i_0 - 3]) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 3]))) : (max((arr_5 [i_0] [i_0 + 1] [i_0 - 1]), var_0)))))));
                            arr_20 [i_0] [i_5] = (min(var_3, (arr_13 [12] [i_0] [i_4] [i_5])));
                            arr_21 [i_0] [i_1] = var_3;
                            arr_22 [i_0] [i_0] = var_3;
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (((min(var_5, var_8))))));
    var_21 = ((var_10 > ((((min(var_11, var_1))) >> (var_0 + 1453)))));
    #pragma endscop
}
