/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = 0;
                    arr_9 [i_1] [i_1] = (arr_5 [i_1]);

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_20 *= (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
                        var_21 ^= ((((arr_6 [i_0] [i_1] [i_2] [6]) > (arr_6 [i_0 + 1] [i_1] [i_2] [4]))));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = (65535 * -24384);
                    }

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [0] |= (arr_1 [i_0]);
                        var_22 = (arr_3 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_23 = (((max((arr_5 [i_0]), (arr_0 [i_0] [i_0]))) != (arr_0 [i_0] [i_0])));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_24 &= (arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_6]);
                            var_25 = (((arr_6 [i_2] [i_0 + 1] [i_0 + 1] [i_1]) > (arr_6 [i_6] [i_0 + 1] [i_6] [i_1])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((arr_17 [i_8 + 1] [i_7] [i_1] [i_0]) + ((((arr_6 [i_1] [i_1] [i_1] [i_7]) < (arr_1 [i_0 + 1]))))))));
                                arr_24 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_7] [i_1] = (arr_3 [i_7] [i_1]);
                                var_27 = (min(var_27, (-9223372036854775807 - 1)));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = ((((((arr_13 [1]) | (arr_13 [4]))) ^ (((min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))))));
        var_28 = (min(var_28, ((((max(65534, 9223372036854775807)) / (((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ^ (arr_13 [6]))))))));
        arr_26 [i_0] [i_0] = (((arr_3 [i_0] [i_0]) || (((min((arr_22 [i_0] [i_0] [0] [i_0 + 1] [i_0 + 1]), (arr_23 [i_0] [i_0] [i_0] [6])))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_29 *= ((((arr_34 [i_9 - 1] [i_10 + 1] [i_11 - 1]) & (arr_34 [i_9 - 1] [i_10 + 3] [i_9 - 1]))) < (((((arr_30 [i_10] [i_10]) / (arr_32 [i_9] [i_9] [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_30 &= max(65530, 1918086583582330961);
                                var_31 = (max(((max(((max((arr_37 [i_9] [i_10] [i_9] [i_9] [i_9] [i_10]), (arr_31 [i_12] [i_13])))), (arr_30 [i_11] [i_10])))), (max((arr_31 [i_12] [i_13]), (max((arr_35 [i_9]), (arr_31 [i_11] [i_13])))))));
                                var_32 = (arr_30 [i_11] [i_13]);
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_33 *= (((((arr_32 [i_9] [i_10] [i_14]) / 61214)) == (arr_29 [i_14])));
                    arr_42 [i_9] [i_9 - 1] [i_9] [i_14] = (arr_39 [i_9] [i_10 - 1] [i_14] [i_14] [i_14] [i_14]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_34 = (arr_35 [i_15]);
                                arr_51 [i_9] [i_9] [i_9] [i_9] [i_16] = (arr_39 [i_9] [i_9] [i_14] [i_9] [i_16] [i_16]);
                                var_35 = (min(var_35, ((((min((arr_49 [i_9] [i_15] [i_15] [i_15] [i_10 - 3]), (arr_50 [i_9] [i_9] [i_9] [i_15] [i_16]))))))));
                            }
                        }
                    }
                }
                var_36 = (((((max((arr_47 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9]), (arr_29 [i_9]))) ^ ((((arr_27 [i_10] [i_10 + 3]) | (arr_45 [i_9] [i_10])))))) == (((arr_38 [i_9] [i_9] [i_9] [i_10] [i_10]) & (max((arr_47 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10]), (arr_29 [i_9])))))));
                var_37 -= (((min((max((arr_40 [i_10] [i_10] [i_10] [i_10]), (arr_29 [8]))), ((((arr_43 [22] [22] [i_9 - 1] [22] [22] [i_10]) <= (arr_33 [i_9] [i_9])))))) * (0 == -2783851818280678701)));
            }
        }
    }
    #pragma endscop
}
