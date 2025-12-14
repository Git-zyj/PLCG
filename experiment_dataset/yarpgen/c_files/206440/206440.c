/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_19 = (max((max((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 2]), (arr_1 [i_2 + 1]))), (((-116 + (arr_5 [i_2 - 1] [i_2 - 2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (!115)));
                                var_21 += ((var_15 >> ((((arr_2 [8] [i_2 + 1] [i_2 + 1]) >= (arr_10 [4] [i_1] [4] [i_2 + 1] [i_2 - 1]))))));
                                var_22 = ((((~(arr_1 [i_3 - 1]))) % (max((arr_1 [i_0]), (arr_1 [i_1])))));
                                var_23 = (min(((-102 ? 116 : 27578)), ((~(((arr_5 [i_0] [i_0] [i_0]) << (41 - 39)))))));
                                var_24 = (max(var_24, ((((max(((1 << (arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [3] [8]))), (arr_6 [i_3] [i_2 - 1] [i_1] [i_0]))) + -15)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [5] [i_5] [i_0] [i_0] = (((max(-4567966753332324944, 20)) > ((((!((max((arr_8 [i_0] [i_0]), 1)))))))));
                        var_25 = (max(var_25, ((((arr_3 [i_2] [i_2]) >> (((((arr_4 [i_5] [6] [5]) & (arr_6 [i_0] [i_0] [i_2] [i_5]))) - 47)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_26 = var_4;

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_20 [i_7] [i_0] [i_0] [i_0] [1] [i_0] = ((8057 << (var_8 - 184)));
                            var_27 ^= ((-(!1)));
                        }
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            var_28 = (min(var_28, (((-(arr_1 [i_0]))))));
                            arr_26 [i_0] [i_0] [i_2] [i_8] [i_9] = ((((-var_12 ? (min(-1, (arr_25 [i_9] [6] [i_2 - 1] [i_8] [i_8] [3] [i_8]))) : 4567966753332324944)) - ((((max((arr_13 [2] [i_0]), -1395502547)) * -116)))));
                        }

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_29 [i_0] [0] [i_2] [2] [i_10] &= ((arr_16 [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) - (arr_16 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2]));
                            var_29 = 2769849528698348724;
                            var_30 += ((-((var_12 ? -7931149794337833631 : var_7))));
                        }
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            arr_32 [i_0] = var_8;
                            var_31 = (((arr_15 [i_0] [1] [i_0] [1] [i_0]) == ((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_32 = -32425;
                            var_33 += (!7350063501588435852);
                            arr_33 [i_0] [11] [i_2] [i_1] [i_0] = ((((((arr_23 [i_11 - 1]) ? (arr_23 [i_11 - 2]) : (arr_23 [i_11 + 1])))) ? ((max(var_8, (arr_23 [i_11 + 1])))) : -var_8));
                        }
                        var_34 = (((arr_7 [i_0] [i_1] [1] [i_8]) + 2042498628));
                    }
                }
                for (int i_12 = 2; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_35 -= ((-(arr_1 [i_12 + 1])));
                    var_36 = (min((((-39 ? 163 : 9193))), (((((var_16 << (var_11 - 66)))) ? (min(137, (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : -126))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_37 += ((~(arr_30 [3] [9] [7] [i_12 - 2] [i_12 - 2] [i_1] [i_1])));
                                arr_42 [i_14] [i_0] [2] [i_0] [i_0] [i_0] [i_0] = ((-(arr_39 [i_12 + 1] [i_12] [i_12] [i_12] [i_1])));
                                arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-3454587357365796945 % 27);
                            }
                        }
                    }
                }
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    var_38 = (max(var_38, (!48151)));
                    var_39 &= (5849109710591827953 ? 7 : ((((((arr_22 [i_0] [i_1] [i_15 - 2] [6] [i_1]) ? (arr_4 [i_0] [11] [i_15]) : (arr_24 [i_0] [i_15] [i_15] [i_0] [i_0] [i_1] [1])))) % (((arr_40 [8] [1] [8] [i_15] [1] [i_1]) % 79)))));
                }
                /* vectorizable */
                for (int i_16 = 3; i_16 < 10;i_16 += 1)
                {
                    arr_50 [i_0] [i_0] [1] [9] = 46;
                    var_40 = (min(var_40, ((~(arr_8 [i_0] [i_1])))));
                    var_41 = (((arr_13 [i_0] [i_0]) > 1));
                    arr_51 [i_0] [i_1] [i_0] [i_1] = ((((var_2 / (arr_46 [i_0]))) << (((arr_4 [0] [1] [i_16 - 1]) - 29))));
                }
                var_42 += ((((min((max((arr_47 [i_0] [i_0] [i_1] [i_1]), 1)), 0))) ? ((~(arr_35 [i_1] [i_1] [i_1] [i_1]))) : var_13));
                var_43 += (min(((-(arr_0 [i_1]))), ((max((arr_0 [i_1]), (arr_0 [i_1]))))));
            }
        }
    }
    var_44 &= (var_14 | var_8);
    #pragma endscop
}
