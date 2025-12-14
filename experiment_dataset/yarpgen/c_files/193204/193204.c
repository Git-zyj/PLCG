/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = 1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((((max(((max(4074352484, var_7))), (max(14045078546256430549, (arr_2 [8])))))) ? ((((var_2 ? var_15 : var_9)) % 215)) : var_16));
        arr_3 [i_0] = (var_14 ? (((arr_1 [i_0]) & 84)) : (4401665527453121066 & var_17));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (arr_5 [i_1]);
        var_22 = (arr_4 [i_1]);
        var_23 = (((((min(var_9, (arr_6 [i_1])))) ? (max(18446744073709551615, (arr_6 [17]))) : 12926998455233503889)));
        arr_7 [i_1] [i_1] = ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : var_8))) || (arr_4 [i_1])));
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_24 = ((((min(var_7, (arr_14 [i_2 - 1] [i_4])))) ? (min((11367 || 1835322640789182164), (min(var_13, var_8)))) : ((-(max(16, 29736))))));
                    var_25 = (min(var_25, (((~(((arr_15 [i_2 + 1] [i_3] [i_4] [i_4]) ? var_13 : (arr_15 [i_2 + 1] [i_3] [5] [i_3]))))))));
                    arr_17 [i_2 - 1] [i_3] [i_4] = var_6;
                }
            }
        }
        var_26 = (max(var_26, (((-(((max((arr_13 [i_2] [i_2]), (arr_4 [i_2]))) * (arr_12 [i_2] [i_2]))))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_27 = ((((((arr_27 [i_5]) ? var_15 : ((max((arr_16 [i_7] [i_6 - 1] [i_6 - 1] [16]), var_2)))))) && (!18446744073709551602)));
                                var_28 = 18446744073709551615;
                                var_29 = 9223372036854775807;
                                arr_30 [i_5] [i_5] [i_7] [i_5] [i_5] = ((((max((arr_6 [i_5]), (arr_10 [i_8 - 1] [i_9 - 1])))) ? 7 : ((0 ? (max((arr_10 [1] [i_7]), var_6)) : (~11)))));
                                var_30 = 29736;
                            }
                        }
                    }
                    var_31 = ((~(((arr_6 [i_7 - 4]) << (((arr_10 [i_5] [i_6 + 1]) - 183))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_32 = (max(var_32, var_5));
                                var_33 = 13;
                            }
                        }
                    }
                    var_34 = var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_35 = ((var_17 ? (max((arr_20 [i_5] [i_12]), (arr_20 [i_5] [i_5]))) : ((-(arr_9 [i_5] [i_13])))));
                    arr_41 [i_5] [i_12] [i_13] = (min((max(11, var_6)), ((((arr_4 [i_5]) ? var_14 : var_4)))));
                    var_36 = (((((((var_13 ? (arr_39 [i_5] [14]) : (arr_26 [12] [0] [8] [19])))) ? 198 : var_1)) | (((~0) ^ (~var_12)))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_37 = (arr_26 [10] [i_14] [i_14] [i_14]);
        var_38 *= (min((((-120 + 2147483647) << (((~var_10) - 4804989850523966246)))), -29737));
    }
    #pragma endscop
}
