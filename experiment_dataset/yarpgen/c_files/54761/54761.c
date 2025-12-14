/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 ^= (var_10 < var_6);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, var_8));
        arr_3 [i_0] = (max((min(-5929893882678017884, (arr_2 [i_0]))), (-1 ^ 18)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (((arr_1 [i_1]) + var_11));
            var_22 = (((arr_1 [i_1]) & (arr_6 [i_1] [i_1])));
        }

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_23 = (((((arr_11 [i_0] [i_0] [i_0]) + 2147483647)) << (-33 >= 4)));
                var_24 *= (((((arr_0 [i_3]) * var_16)) <= var_1));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_25 = (((((arr_6 [i_4] [i_2]) << (((-44 * 1003592741) + 44158080621)))) & (max((arr_12 [i_2] [i_2] [i_2]), (var_10 / var_0)))));
                arr_15 [i_4] |= (arr_13 [i_0] [i_2]);
                var_26 = (-18386 >= -668896589);
            }

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_19 [i_0] = 0;
                var_27 = ((((min((arr_4 [i_2]), (arr_4 [i_2])))) << (var_17 - 3464914369)));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_24 [i_0] [i_0] [i_2] [i_0] = (max((0 ^ 19773), ((min(19773, -1)))));
                var_28 += (arr_18 [i_0] [i_2] [i_6]);
                arr_25 [11] [i_2] [i_0] = (max(var_4, 5));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_30 [i_7] [i_0] = (((arr_14 [i_0] [i_0] [i_2] [i_7]) >> (((arr_18 [i_0] [i_2] [i_7]) + (arr_13 [1] [i_2])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_36 [i_8] [i_8] [i_2] [i_0] = (arr_14 [i_0] [i_7] [i_8] [i_9]);
                            var_29 = (arr_7 [i_8]);
                            arr_37 [i_0] [i_2] [i_2] [i_8] [i_9] [i_9] = -1232659832;
                            var_30 ^= (arr_13 [i_8] [i_0]);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_31 = ((var_1 / (arr_29 [i_0] [i_0] [i_10] [i_10])));
                    var_32 = arr_27 [i_10] [i_0];
                    var_33 &= (40620 || var_13);
                }
                var_34 &= (max(((((arr_31 [i_10] [i_10] [i_2] [i_0]) - -2201411709578277488))), 889427168953948767));
                arr_43 [i_0] [i_2] [i_10] = (arr_26 [i_0] [i_0] [i_0] [i_0]);
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_47 [i_12] [i_12] = (max(((min(-668896582, 1003592741))), (2 / -15)));
            arr_48 [i_12] [i_12] [i_12] = var_8;
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_35 = (min((max(-2, (arr_29 [i_0] [i_0] [i_0] [i_13]))), (((arr_38 [i_0] [i_0] [i_0] [i_0]) / (arr_38 [i_0] [i_13] [i_0] [i_0])))));

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_56 [i_14] [i_0] [i_0] = (((max(0, 15574380925517535403)) * 1));

                /* vectorizable */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    arr_60 [i_0] [i_0] [i_13] [i_13] [i_13] [i_15] &= (arr_46 [i_0] [i_0]);
                    arr_61 [i_0] [i_0] [i_0] [i_0] [17] |= var_8;
                    var_36 += (((arr_4 [i_13]) * (arr_22 [i_0] [i_13] [i_14] [i_15])));
                }
                var_37 *= var_12;
                var_38 += (((max(-27944, 2872363148192016212)) & (arr_6 [i_13] [i_13])));
                var_39 = (max((arr_51 [i_13] [i_14]), (min(2147483647, 4926944801301728741))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_40 ^= (((arr_50 [i_16] [i_13]) > (arr_35 [i_13])));
                arr_64 [i_0] = (arr_22 [i_16] [i_13] [i_0] [i_0]);

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    arr_67 [i_13] = ((arr_13 [i_0] [i_16]) <= (arr_11 [i_17] [i_16] [i_13]));
                    arr_68 [i_17] [i_16] [i_0] [i_0] = (9223372036854775807 > (arr_12 [i_0] [i_13] [i_0]));
                    arr_69 [i_0] [i_13] [i_0] [i_17] = (arr_57 [i_0] [i_17]);
                }
            }
        }
        var_41 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
