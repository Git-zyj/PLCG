/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 ^= (arr_1 [i_0]);
                var_12 = ((-(min(4787726189902017753, (arr_0 [i_0] [i_1])))));

                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] = (min((!2147483647), ((max((arr_0 [i_2 - 3] [3]), -325666334)))));
                        var_13 = 0;
                        var_14 = (((arr_1 [i_2 - 3]) > ((~(min(268435455, (arr_7 [17] [i_3] [17] [1])))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((-(arr_5 [i_4] [i_4] [i_4 - 2] [i_2 - 4])));
                            var_15 = ((var_8 ? var_0 : (arr_6 [i_1] [i_2 - 4] [i_4] [i_4])));
                            var_16 = ((-(arr_4 [i_4 - 2] [i_2 - 4])));
                            var_17 = (arr_11 [i_4 - 2] [i_3] [i_1]);
                        }
                    }
                    var_18 = (((max((!1), (arr_2 [i_0]))) ? -5 : ((+(((arr_1 [i_1]) % 2586417214))))));
                }

                for (int i_5 = 4; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_19 = 0;
                                var_20 *= ((((((arr_13 [i_7] [i_6] [i_5 - 1]) / (arr_13 [i_7] [i_7] [i_5 - 1])))) ? (max((arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1]), (arr_13 [i_5] [1] [i_5 + 1]))) : 171));
                            }
                        }
                    }
                    var_21 = var_7;
                    arr_22 [5] [12] = ((2147483647 > (~var_7)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_22 = ((-(((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [14]) ? 4160749568 : 1708550075)) / (((-(arr_27 [i_0] [i_1] [i_5] [i_8] [i_5] [i_5]))))))));
                                var_23 = (min((((!(arr_9 [i_9] [1] [i_5] [i_0] [i_0])))), ((((((arr_18 [i_0] [i_0]) ? -325666339 : -325666339))) ^ (arr_3 [i_9] [i_5])))));
                                var_24 = max(((-(arr_13 [i_1] [i_5 - 4] [i_9 - 1]))), (arr_6 [i_5] [i_5 - 4] [i_9 - 1] [i_9]));
                            }
                        }
                    }
                    var_25 &= -var_3;
                }
                for (int i_10 = 4; i_10 < 24;i_10 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        var_26 = ((!(arr_3 [i_1] [i_10 + 1])));
                        arr_33 [i_11] [8] [8] = 12;
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_27 = min((((((arr_9 [i_10 + 1] [i_12] [i_12 - 1] [i_12] [i_12]) + 9223372036854775807)) << (((((arr_9 [i_10 - 2] [i_12] [i_12 - 1] [i_12] [i_12]) + 4448984266454965211)) - 27)))), (arr_9 [i_10 - 2] [12] [i_12 - 1] [i_12] [12]));
                        var_28 = (((((arr_3 [i_0] [i_12 - 1]) % 2586417221)) | (arr_34 [i_10 - 2] [i_10 - 2] [i_10] [i_10])));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_29 = ((((var_1 + (arr_37 [i_0] [5] [i_0] [i_0] [i_0])))));
                        var_30 = (max(var_9, (arr_16 [12] [i_1])));
                    }
                    arr_39 [i_0] = (min((((arr_25 [i_10 - 4] [i_10] [i_10 - 1] [i_10] [i_10]) + -3843390973740623701)), ((min(0, -124)))));
                    var_31 = (min((arr_7 [i_0] [i_1] [i_10] [i_10]), var_7));
                    var_32 = ((224 % (arr_17 [i_10] [12] [i_10 - 3] [i_10] [i_10] [i_10 - 4])));
                }
                for (int i_14 = 4; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    var_33 = (min(var_33, (((-26676 * ((-(arr_37 [i_14 - 3] [i_14] [i_14 - 4] [i_14] [i_14]))))))));
                    var_34 = var_2;
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        {
                            var_35 = (((arr_3 [i_0] [i_1]) ? (max(33511, (arr_3 [i_15] [i_1]))) : 325666328));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -82;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
