/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= -9223372036854775798;
    var_19 += (max(var_2, (((min(9223372036854775800, var_15)) >> ((((min(var_0, var_13))) - 71))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((-(arr_4 [6] [6] [i_0]))) > ((~((max((arr_4 [2] [i_1] [2]), (arr_1 [i_1])))))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_21 ^= ((~(min((max((arr_2 [i_0] [i_0 + 1]), var_4)), ((min(4, 1)))))));
                    var_22 = (-9223372036854775798 / var_16);
                    arr_8 [i_2] |= (arr_2 [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_23 ^= (((arr_7 [0] [18] [0]) | 138));

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [i_0 - 3] [i_1] [i_3] [6] [i_5] &= (!var_4);
                            var_24 = (min(var_24, (arr_7 [0] [i_3] [0])));
                            var_25 |= (arr_9 [i_0] [i_1]);
                        }
                        var_26 = (max(var_26, 15974));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_1] = 5;
                        var_27 = (min(var_27, (arr_12 [i_0] [i_0] [8])));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, ((max((max(var_2, var_7)), var_2)))));
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_29 ^= (((((((arr_25 [i_7] [i_7]) ? (arr_24 [i_7]) : var_13)) * ((min((arr_28 [i_7 + 1] [i_8] [i_7 + 1] [i_9]), (arr_24 [i_7])))))) / 9223372036854775803));

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_31 [i_7] [i_8] [i_9] [i_10] = min((arr_29 [i_10] [i_10] [i_9] [i_9] [i_8] [i_7]), ((((arr_23 [i_8]) ? (arr_28 [i_7] [7] [i_9] [i_10]) : var_17))));
                        var_30 = (((max(-9223372036854775779, (((-(arr_28 [i_7] [i_8] [i_9] [i_10])))))) < (((min(1725, 17))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_36 [i_11] [i_11] [i_8] = ((((((arr_25 [i_7] [i_8]) ? 9223372036854775784 : (arr_30 [i_7 - 3] [i_8] [i_9] [2] [14] [i_12])))) ? 6 : (((((arr_33 [13] [13] [21]) <= (arr_30 [i_12] [15] [8] [3] [i_7] [i_7 - 3])))))));
                            arr_37 [i_7 - 2] = (arr_32 [i_7] [i_7] [i_7 - 2] [i_7 + 1] [i_12] [i_12]);
                            arr_38 [i_7] [i_8] [i_9] [i_11] [i_12] = (((arr_27 [i_8] [i_11] [i_11]) % 63));
                            arr_39 [i_7] [i_7 + 1] [i_7 - 2] [i_7] = (arr_32 [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 2]);
                            var_31 = (min(var_31, (arr_25 [i_7 - 2] [i_7 - 2])));
                        }
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            var_32 = (~var_14);
                            var_33 += (arr_40 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_9]);
                            var_34 = ((-4790382255073196041 ? (arr_23 [i_9]) : (var_8 ^ 71)));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_46 [i_7] [i_14] = ((var_16 && (arr_28 [i_14] [i_9] [i_8] [10])));
                            var_35 &= arr_26 [i_7];
                            arr_47 [i_14] [8] [i_9] [i_11] [i_14] = 8;
                        }
                        var_36 -= (((arr_41 [15] [i_9] [i_8] [i_7]) ? (arr_23 [i_7 + 1]) : (arr_42 [i_11] [i_11] [i_9] [i_8] [i_7] [i_7])));
                        arr_48 [i_8] [12] = (((79 % 8) ? 113 : var_1));
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_37 = 41889;
                        arr_51 [i_7 - 3] [i_8] [i_9] [i_15] = ((+((((-11 ? (arr_41 [i_7 - 1] [i_7 - 1] [i_7] [i_7]) : 237))))));
                        arr_52 [i_7] [i_8] [i_9] [i_9] [i_15] = var_16;
                        var_38 = (min(var_38, var_11));
                    }
                    var_39 ^= ((-(29 % 23450)));
                }
            }
        }
    }
    #pragma endscop
}
