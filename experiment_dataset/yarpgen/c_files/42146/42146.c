/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? var_5 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((arr_2 [i_2 - 2] [i_0 + 3]) ? ((var_10 ? 55 : var_8)) : (((arr_2 [i_2 - 2] [i_0 - 1]) ? (arr_2 [i_2 - 1] [i_0 + 2]) : var_13))));
                    var_16 |= var_6;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_3] = 23409;
                        arr_12 [i_0] [2] [i_0] [i_1] [10] [10] |= ((486 ? (arr_2 [i_2] [i_3 - 1]) : var_2));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_17 = (min(31670, 14073));
                        arr_16 [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] = 12736;
                        var_18 = (arr_10 [i_0] [i_1] [i_2 + 1] [i_0]);
                        var_19 = ((((max(var_9, (arr_0 [i_0] [i_1])))) ? ((((arr_3 [i_0]) ? (((arr_7 [i_0] [7] [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : -31670)) : (((arr_14 [i_0] [i_0]) ? (arr_5 [i_0] [4]) : (arr_7 [i_0] [i_0] [i_2] [i_4])))))) : (min(1, ((31670 ? 33423360 : var_14))))));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_20 |= arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                        var_21 = ((((((((var_6 ? 2 : var_14))) ? (min(var_0, (arr_17 [i_0] [3] [i_0] [i_0 + 2]))) : (arr_2 [i_5] [i_1])))) ? (max((((var_12 ? (arr_4 [i_0]) : var_8))), ((-18592 ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0]))))) : ((((arr_5 [i_0] [i_0]) ? (arr_17 [i_5 - 1] [i_2 + 1] [i_2 + 1] [i_0 + 3]) : (arr_5 [i_0] [i_0]))))));
                        var_22 |= max((((arr_6 [i_0] [i_0] [i_0] [i_5]) ? var_3 : ((37 ? (arr_15 [i_1] [i_1]) : var_9)))), (((var_4 ? ((var_6 ? var_14 : (arr_5 [10] [10]))) : var_2))));
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_1));
    var_24 = (max((((((31670 ? var_5 : var_7))) ? var_5 : ((var_11 ? var_3 : 666953949808758644)))), var_6));
    var_25 = ((31274 ? 1 : 13));
    #pragma endscop
}
