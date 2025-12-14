/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((+((48 ? (arr_3 [i_0] [i_0] [i_1 - 3]) : (((-(arr_1 [i_0])))))))))));
                var_12 = (min(var_12, (((((arr_2 [i_1 + 1]) - (max((arr_2 [i_0]), (arr_0 [i_0]))))) - (217 + 217)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2] = ((max((arr_0 [i_2]), 4294967295)));
        var_13 = ((((arr_2 [i_2]) == (arr_2 [i_2]))));
        var_14 = (((arr_3 [i_2] [i_2] [i_2]) / ((max(225, 0)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_3] [i_4] [i_4] = 144;

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_15 *= (~var_7);
                var_16 = ((!(arr_5 [i_4 + 3])));
                var_17 = (min(var_17, ((((var_6 & (arr_0 [i_4]))) ^ (((var_9 ? (arr_8 [i_3]) : 48)))))));
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    var_18 ^= (arr_1 [i_4 + 2]);
                    var_19 = 1;
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_20 += (((var_0 / var_3) > (arr_18 [i_3])));
                    var_21 = (arr_26 [i_4] [i_4 + 1] [i_6] [i_8] [i_6 - 1] [i_6]);
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_29 [i_4] [i_4] [i_4] [i_4] = var_7;

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_22 = (arr_25 [i_9]);
                        var_23 *= -2422118248385980993;
                        var_24 &= ((var_0 < (arr_4 [i_3])));
                    }
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_25 = (((arr_10 [i_6 + 1] [i_4 - 3]) <= (arr_15 [i_6 - 2] [i_4 - 2] [i_6] [i_11 - 2])));
                        arr_35 [i_4] = (((arr_26 [i_3] [i_4] [i_6] [i_4] [i_9] [i_11]) / (var_4 < var_1)));
                        var_26 = ((-(arr_15 [i_3] [i_3] [i_3] [i_3])));
                    }
                    var_27 = (arr_2 [i_3]);
                }

                for (int i_12 = 2; i_12 < 12;i_12 += 1)
                {
                    var_28 = (((-(arr_8 [i_3]))));
                    arr_39 [i_3] [i_4] [i_6] [i_12] = (arr_22 [i_6 - 2]);
                    var_29 = (((((arr_33 [i_3] [i_4 - 3] [i_6 - 1] [i_12] [i_4] [i_12] [i_12]) + 2147483647)) << (((((arr_33 [i_3] [i_3] [i_3] [i_4 + 2] [i_6 - 2] [i_12] [i_12]) + 26836)) - 24))));
                    var_30 = (((arr_26 [i_4 + 1] [i_4 + 3] [i_6 - 1] [i_3] [i_12 - 1] [i_12 + 3]) != (arr_26 [i_4 - 3] [i_4 + 2] [i_6 - 2] [i_12] [i_12 + 3] [i_12 + 3])));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    arr_42 [i_3] [i_4] [i_6] [i_3] [i_6] = (((arr_8 [i_4]) * (arr_20 [i_4 - 3])));
                    var_31 &= ((207 * (2993870137 > -32)));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_32 = (max(var_32, ((((arr_3 [i_4 + 1] [i_6] [i_6 - 1]) ? -10 : var_3)))));
                    var_33 = (max(var_33, ((((arr_36 [i_4 + 2] [i_14] [i_14] [i_14]) + (arr_28 [i_4] [i_4 + 3] [i_4] [i_4]))))));
                    var_34 &= (arr_27 [i_3] [i_3] [i_4] [i_4] [i_6] [i_14]);

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_35 ^= (arr_26 [i_3] [i_4] [i_4] [i_6] [i_14] [i_15]);
                        var_36 = (((((-2422118248385980999 ? (arr_33 [i_15] [i_14] [i_6] [i_4] [i_4] [i_3] [i_3]) : (arr_28 [i_3] [i_3] [i_3] [i_3])))) ? (arr_31 [i_4 - 2]) : (((arr_10 [i_15] [i_4]) * var_2))));
                        arr_48 [i_15] [i_4] = (((((var_10 / (arr_12 [i_3])))) ? ((((arr_44 [i_14] [i_15]) + (arr_19 [i_14])))) : 9223372036854775807));
                    }
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_51 [i_3] [i_4] [i_6] [i_16] = ((((((arr_47 [i_16] [i_16] [i_6] [i_4] [i_3]) > (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) + var_4));
                    var_37 = (1 == -5987003206326712195);
                    var_38 = (arr_30 [i_3] [i_4] [i_4] [i_4 + 4] [i_16] [i_16] [i_16]);
                }
            }
        }
        var_39 = (min(var_39, (((~(225 > -10))))));
        var_40 = ((-(arr_4 [i_3])));
    }
    #pragma endscop
}
