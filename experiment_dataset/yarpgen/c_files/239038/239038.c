/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (((max(var_13, var_3))));
    var_20 = min(var_16, var_2);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((-(max(var_11, ((((((arr_5 [i_0] [i_0] [3]) + 2147483647)) << (((arr_3 [i_1] [1]) - 1203885269)))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 ^= ((-(var_9 * var_10)));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = -9223372036854775797;
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = -var_7;
                            arr_17 [i_0] [i_1 - 1] [7] [12] [i_1] = arr_5 [i_1] [i_1] [i_2];
                            var_22 *= ((var_16 ? var_11 : var_12));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 -= 8;
                            var_24 |= var_0;
                        }
                        var_25 = (((arr_7 [i_0] [i_1 - 1] [i_1]) > (arr_11 [i_0] [5] [i_0] [i_3] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 = (max(var_26, (((!(arr_25 [i_0] [i_0]))))));
                            arr_27 [i_0] [i_1 - 1] [i_1] [i_0] = (var_2 ? -var_9 : (((((arr_24 [i_7] [i_6] [i_2] [10] [i_0]) >= (arr_20 [i_0] [4] [i_2] [i_2] [i_6] [i_7]))))));
                            var_27 = ((var_10 && ((var_13 >= (arr_23 [i_0] [i_1] [i_1] [6] [0])))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 = var_16;
                            var_29 = (~(arr_29 [i_8] [7] [i_1] [i_1] [i_8] [i_1 + 1] [i_1 - 1]));
                            arr_32 [6] &= (arr_29 [i_1] [i_1 + 1] [12] [12] [12] [i_1] [i_1 + 1]);
                            arr_33 [i_6] [i_1] [i_2] [i_6] [i_8] [i_8] = (((arr_4 [i_0] [i_1 - 1] [i_2]) == ((var_17 ? 4294967295 : var_16))));
                        }
                        arr_34 [i_1] [i_1] = var_8;
                        arr_35 [6] [i_2] [i_1] [4] [11] = ((~(((arr_1 [i_0]) ^ var_7))));
                        var_30 = (((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [13] [i_6]) != (arr_25 [i_1 - 1] [4])));
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = (arr_12 [i_0]);
                        var_32 = (((((var_0 ? ((var_1 ? (arr_5 [i_0] [i_0] [i_0]) : var_14)) : var_13))) ? ((var_6 ? (arr_21 [i_1 - 1] [i_0] [i_2] [i_1 - 1] [i_2]) : var_0)) : (min((~var_16), (arr_20 [i_2] [1] [8] [i_9] [i_2] [i_1 + 1])))));
                    }
                    arr_40 [i_0] [i_2] [i_1] = ((~(arr_11 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_2])));
                }
            }
        }
        var_33 = (max(var_33, (((!(arr_14 [i_0]))))));
    }
    #pragma endscop
}
