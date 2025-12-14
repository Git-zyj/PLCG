/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (arr_2 [i_0]);

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_22 = var_9;
                        var_23 = ((!((((arr_1 [i_0 - 3]) ? var_17 : (~1564754322))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            var_24 = (((arr_13 [i_5 + 2] [3] [i_0] [i_0 - 2] [i_0 + 1]) == ((((arr_13 [i_5 - 1] [2] [i_2] [i_0 + 1] [i_0 - 2]) != 2016)))));
                            var_25 = ((~(((arr_12 [i_0 - 1]) ? 102 : 63))));
                            arr_14 [i_0] [i_1] [1] [i_4] [i_5] = ((min(32789, (arr_3 [i_0 - 3]))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] = (!243);
                            arr_20 [i_6] [i_4] [6] [i_0 - 1] = (arr_3 [i_4]);
                            var_26 = (arr_2 [i_0]);
                            arr_21 [i_6] [i_6] [7] [i_2] [i_1] [i_0] = ((min(var_8, (arr_10 [i_0] [i_1] [i_0] [i_2] [i_4] [i_6]))));
                        }
                        arr_22 [i_0] [4] [i_2] [6] = var_11;
                    }
                }
            }
        }
        var_27 = ((!((max((arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 1]), 253)))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_28 = (arr_26 [i_7]);
                                var_29 = var_12;
                                var_30 = ((((!(arr_29 [i_7])))) < (((((2117908507 ? var_2 : var_14))) ? (arr_24 [5]) : (((arr_23 [i_7] [i_7]) ? 2923 : (arr_30 [i_7]))))));
                                var_31 = (min(var_31, -var_10));
                                var_32 ^= ((arr_26 [1]) ? (arr_30 [i_10]) : (max((max(17668030717786381398, 2009)), (-2937 | 31))));
                            }
                        }
                    }
                    var_33 = -13673;

                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        arr_39 [i_7] [i_7] = ((26566 ? var_8 : ((((((0 ? var_8 : (arr_30 [i_9])))) ? ((var_4 ? -51 : 1978945122)) : (min((arr_25 [i_7]), (arr_31 [i_7] [i_8] [i_7] [i_12]))))))));
                        var_34 = ((15 ? ((18446744073709551615 ? 28 : 18446744073709551615)) : (arr_28 [i_7])));
                    }
                    arr_40 [i_7] [i_8] [i_7] = 1;
                }
            }
        }
        var_35 = (var_3 + var_13);
    }
    var_36 -= ((var_7 ? var_5 : var_13));
    #pragma endscop
}
