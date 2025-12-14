/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max(((((!18036) & (((-18036 == (arr_5 [i_0] [i_1 - 1] [i_1 - 1]))))))), ((var_0 ? 20430 : (arr_4 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (!1106658252)));
                                var_18 = var_14;
                            }
                        }
                    }
                    var_19 = (min((((((var_7 - var_6) + 9223372036854775807)) >> ((((var_3 ? var_3 : (arr_11 [i_0] [i_1 - 1] [3] [i_2] [i_2]))) - 13922453846165991446)))), (((var_4 ? (1106658244 > -1) : (arr_7 [i_0 - 3] [i_1] [i_2]))))));
                    var_20 = (min(var_20, (arr_11 [i_1 - 1] [i_0 - 3] [i_2] [i_2] [i_0])));
                    var_21 = (min(var_21, ((((((~((var_7 ? 1 : (arr_4 [0])))))) ? (((((~(arr_5 [1] [1] [i_2])))) ? (arr_6 [6] [i_1]) : (arr_5 [0] [i_1] [0]))) : (((!(arr_1 [10])))))))));
                }
            }
        }
    }
    var_22 = (max(var_22, var_4));
    var_23 = ((((((!var_0) ? -1 : var_9))) ? var_1 : (((~var_10) ^ ((5 ? var_0 : var_12))))));
    #pragma endscop
}
