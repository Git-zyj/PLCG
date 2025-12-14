/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_1] = (arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [10] [i_0] [i_0] [i_1] = (!5);
                                var_20 = (max(var_20, (arr_8 [i_0] [2] [i_2] [i_3])));
                                arr_13 [11] [i_1] [i_1] [i_3] [i_3] = var_13;
                                arr_14 [i_1] = (((arr_11 [2]) ? (arr_4 [8] [i_1]) : (((!(arr_9 [i_1 - 1] [i_0] [i_2 - 3] [i_1] [i_4] [i_4 - 1] [i_2 - 3]))))));
                                var_21 += (min((arr_2 [i_2] [i_2 - 1]), 6112795070581801988));
                            }
                        }
                    }
                    var_22 = (max(var_22, (arr_7 [6] [i_1 + 1] [i_1 + 1] [i_2 - 1] [10])));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_23 = (((arr_10 [10] [i_1]) ? (((var_13 ? ((min(8, -29))) : ((-(arr_2 [i_1] [i_1])))))) : ((((min(var_10, (arr_5 [i_5] [i_1] [i_1] [i_0])))) ? (((var_5 ? var_16 : var_16))) : var_2))));
                        var_24 = (var_0 ? ((-(arr_10 [i_1] [i_1]))) : (((~(arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_5])))));
                        arr_17 [i_1] = (~-23);
                    }
                }

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_25 = ((~(((arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [1] [i_1 - 1]) ? var_17 : (arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])))));
                    var_26 += (var_12 ? var_13 : (arr_10 [i_1 + 1] [10]));
                    var_27 += (((((var_10 ? ((65535 ? 3205241252552512274 : 27807)) : var_11))) ? (((((var_10 ? var_2 : var_2))) ? (((var_13 == (arr_8 [i_6] [i_1] [i_6] [i_6])))) : (27807 + 27807))) : var_15));
                    var_28 = (max(var_28, (((min((var_16 * var_13), var_1))))));
                    arr_22 [i_1] = (min((max(-23357, 65535)), var_17));
                }
                arr_23 [i_1] [6] = var_11;
            }
        }
    }
    var_29 = (max(var_19, var_12));
    var_30 = ((((-(var_3 - var_5)))) ? var_1 : var_18);
    #pragma endscop
}
