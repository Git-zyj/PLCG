/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_11, ((!(((3 ? -4 : -4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_17 -= (arr_2 [1]);
                var_18 = (((arr_4 [i_1 - 3]) | var_8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [1] [i_2] [i_3]);
                                arr_15 [i_0] = ((var_9 ? (((arr_3 [i_1] [i_2] [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [1]) : (arr_4 [i_0]))) : (max((arr_5 [i_0] [i_4 + 2]), var_3))));
                                var_19 &= (((arr_4 [i_0]) != (((!(arr_13 [i_0] [i_1] [i_2] [4] [i_0] [i_2]))))));
                                arr_16 [i_0] [i_1] [i_0] [i_4] = (max(-4, (max(-3, -24))));
                            }
                        }
                    }
                }
                var_20 = ((-(((((var_3 ? (arr_8 [i_0] [i_1] [7]) : (arr_10 [i_0] [1] [i_0] [i_0])))) ? var_8 : ((-11 ? var_15 : var_8))))));
                arr_17 [i_0] [i_0] = var_1;
            }
        }
    }
    var_21 = (max(25, (var_12 != var_2)));
    var_22 = var_0;
    var_23 = var_6;
    #pragma endscop
}
