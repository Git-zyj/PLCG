/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((!((max(((var_1 ? var_5 : var_2)), var_11)))));
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_17 = -52;
                            arr_15 [i_0] [i_1] [i_0] [i_2 - 4] [i_0] [i_3] [i_4] = ((~(!var_5)));
                            arr_16 [i_2] [2] [i_4] [i_3] = arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_3];
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_18 -= (arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_2]);
                            var_19 = ((-(arr_14 [i_5] [i_1] [i_1] [i_2] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_21 [i_6] = 0;
                            var_20 = var_2;
                            var_21 *= (arr_7 [i_0] [12] [i_0] [i_0]);
                        }
                        arr_22 [i_3] [i_1] [i_3] [i_3] [i_2 - 1] = 49;
                    }
                    var_22 += var_9;

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_23 |= (min((((~11) * var_1)), var_7));
                        arr_27 [i_0] [i_0] [i_2] [i_0] [1] [i_7] = ((~(((((61 ^ var_4) + 9223372036854775807)) >> (((((arr_12 [i_0] [i_0] [i_2] [i_0] [i_7]) ? 5359260031056041684 : var_0)) - 5359260031056041666))))));
                        var_24 ^= ((~(arr_25 [i_7] [i_7] [i_2 - 3] [i_2 - 2] [i_2 + 2] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_25 = (+(((arr_26 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2 + 1]) ? (arr_30 [i_0] [i_0] [i_2 + 2] [i_8] [i_1] [i_2 - 2]) : (arr_30 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2 - 1]))));
                        arr_32 [2] [i_0] [i_2] [i_8] |= (!var_12);
                        var_26 ^= ((((7936 ? (max((arr_23 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_0]), 140737488355327)) : ((((arr_14 [i_0] [i_1] [i_2] [i_0] [i_8]) ? 455102035 : (arr_20 [i_0] [i_0] [i_0] [i_0] [9]))))))) ? (((arr_3 [i_2 - 4]) ? (arr_13 [1] [i_1]) : var_10)) : var_2);
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_27 = ((+(max((arr_11 [i_1] [i_1] [i_2 + 2] [i_9] [i_2] [i_2 - 4]), 62))));
                        arr_35 [i_9] [i_1] = var_9;
                        arr_36 [6] [i_9] [i_9] [i_0] = (arr_4 [i_0] [i_2]);
                        var_28 ^= (arr_7 [i_0] [8] [i_2] [i_9]);
                        var_29 += ((29 << ((((~((1 ? (arr_11 [i_0] [i_1] [i_0] [8] [8] [i_2]) : -7090996031487200456)))) + 2278867101))));
                    }
                }
            }
        }
        var_30 = ((var_5 ? (max(((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / 73))), (arr_34 [i_0] [i_0] [i_0] [i_0]))) : (max(4294967284, (max(-39, var_6))))));
        arr_37 [i_0] = ((-((-(var_4 == var_1)))));
        var_31 &= (~43);
        var_32 = (max(4294967285, -6));
    }
    var_33 = var_4;
    #pragma endscop
}
