/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = max((max((-127 - 1), -3498)), 1);
        var_20 = (((arr_0 [i_0]) ? -607865186 : -1945));
        var_21 = ((((-(arr_0 [i_0]))) >= (((arr_1 [i_0]) % (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_22 = 0;

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_23 = (arr_0 [i_3]);
                        arr_11 [9] [i_1] = ((arr_8 [i_4 + 1] [i_4 - 3] [i_4 - 3] [i_4] [i_4]) >= (arr_8 [i_4 - 3] [i_4 + 2] [i_4 - 3] [i_4 - 3] [i_4 + 2]));
                        var_24 = (max(var_24, (arr_6 [i_2] [i_2] [i_2] [i_4 - 1])));
                        arr_12 [i_1] [i_2] [i_3] = (((arr_0 [i_2]) ? 255 : (arr_0 [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_25 = (arr_1 [i_3]);

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = -var_15;
                            var_27 = (arr_2 [i_2]);
                            var_28 = (((arr_8 [i_1] [i_5] [i_1] [i_1] [i_1]) != var_2));
                            arr_19 [i_1] [i_6] [i_3] [i_1] [i_6] = 111;
                            var_29 = (arr_18 [i_6]);
                        }
                    }
                }
            }
        }
        var_30 = -112;
        arr_20 [i_1] = (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {

                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_31 = ((((((min(607865185, 32767)) < ((min(211, (arr_28 [i_7] [i_8] [10] [i_10]))))))) ^ ((((var_11 ? 1 : var_16))))));
                    arr_34 [i_9] [i_9] [i_8] [i_9] = var_11;
                }
                var_32 = (min(var_32, ((((9223372036854775807 ? (arr_30 [i_9 + 3] [i_9 + 1] [i_9 - 2] [i_9 + 3] [i_8] [i_9 - 1]) : (arr_22 [i_9 - 1] [i_9 - 2])))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_33 = (((arr_13 [i_11] [i_11] [i_8] [i_7] [i_7]) - (arr_13 [i_7] [i_8] [i_8] [i_11] [i_11])));
                var_34 = ((-(arr_22 [i_7] [i_7])));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_35 = (arr_7 [i_12] [i_8] [i_7] [i_7]);
                var_36 = (arr_25 [i_7] [i_7]);
                var_37 = (arr_7 [1] [1] [1] [i_12]);
                var_38 = (max(var_38, (!-3027)));
                var_39 = (+-162);
            }
            arr_43 [i_7] [i_7] [i_7] = 42183;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_40 = (min(var_40, (6 ^ 127)));
            var_41 = ((!(((arr_23 [i_13] [7] [i_7]) <= var_12))));
        }
        var_42 = (max(var_42, var_7));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                {
                    arr_53 [i_14] [i_16] = (((((min(var_4, (arr_49 [i_15]))))) + (((arr_49 [i_14]) ? (arr_48 [i_15]) : (arr_48 [i_14])))));
                    var_43 = (arr_48 [i_15]);
                }
            }
        }

        for (int i_17 = 1; i_17 < 16;i_17 += 1)
        {
            var_44 = (min(((((max((arr_52 [i_14]), (arr_1 [i_14])))) ? (((607865186 ? var_2 : 42176))) : (arr_54 [i_14] [i_14]))), 127));
            var_45 = (max(var_45, (((((((((127 ? 38 : (arr_54 [3] [i_17])))) ? (arr_51 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 - 1]) : ((~(arr_0 [i_14])))))) || ((max((arr_49 [i_14]), ((~(arr_50 [i_17] [i_14])))))))))));
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            var_46 = (max(var_46, 42183));
            var_47 = -88;
        }
    }
    var_48 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (var_12 - 246648852)));
    var_49 = -75;
    var_50 = ((var_14 ? var_9 : var_0));
    #pragma endscop
}
