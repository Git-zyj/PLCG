/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 -= ((~((var_7 << (65 - 50)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((arr_3 [i_1] [i_0]) < (((arr_0 [i_0] [i_0]) - var_13)));
            arr_6 [i_1] = ((48 ? (((((arr_5 [i_1]) == var_12)))) : 14949996354740575401));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = (var_8 != -7035);
            var_19 = (max(var_19, 2));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_20 += ((4611686018427387904 ? (arr_5 [i_0]) : (~-105)));
                var_21 = var_9;
                var_22 = (arr_1 [i_2] [i_2]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5] [i_4] [i_2] [i_2] [i_0] = ((1821 > ((13835058055282163712 ? 1 : (arr_19 [i_6] [i_4])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [3] = (~13835058055282163691);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_23 = (min(var_23, ((((~var_10) / (arr_8 [i_2] [i_7]))))));
                    arr_27 [1] [i_2] [i_4] [i_7] = (((arr_14 [i_0] [9] [i_2] [i_7]) ? 1 : 176953683131628460));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_24 *= (1 || -102);
                    var_25 = ((-(arr_15 [i_0] [i_2] [i_4] [i_8])));
                }
            }
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_26 *= (((arr_20 [i_0] [i_9 + 1] [13] [0]) > 0));
                var_27 = (arr_17 [i_9 - 1] [i_9 - 1]);
                arr_36 [0] [i_10] [i_9] = ((1125269891854201154 < (((var_5 ? 2147483647 : var_6)))));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_28 = (((arr_1 [i_9 - 1] [i_9 - 1]) + (arr_23 [i_9 + 1] [i_9 - 1] [i_11] [i_0] [i_0])));
                arr_40 [i_9] [i_9] = var_0;

                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    arr_43 [i_9] [i_9] = ((!(arr_39 [i_9 + 2])));
                    var_29 *= var_12;
                    var_30 = ((!(((var_6 ? (arr_2 [1] [i_9]) : var_13)))));
                }
                arr_44 [i_9] = (arr_20 [i_0] [i_9] [i_11] [i_0]);
                arr_45 [i_0] [i_0] [i_9] [i_0] = ((-16049 ? var_10 : ((6107465735740638734 ? 18446744073709551615 : 6107465735740638734))));
            }
            var_31 = (~(arr_17 [i_9] [i_9 + 1]));
            var_32 = (((arr_28 [i_9 + 2] [i_0] [i_0] [i_0]) ? (var_11 | 2484175590) : 65));
        }
    }
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        var_33 ^= (max(((13835058055282163717 ? 4965401268452779237 : (arr_20 [i_13 + 1] [i_13] [i_13] [i_13 - 1]))), (4611686018427387912 | 9445685055255961371)));
        arr_48 [i_13] = 16049;

        for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
        {
            arr_51 [i_13] = -0;

            /* vectorizable */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_55 [i_13 + 1] [i_13] [i_13] = (((arr_38 [i_13] [i_13]) <= 15725));
                arr_56 [8] [i_13] [i_13] [i_13 + 2] = (~537770311);
            }
            for (int i_16 = 3; i_16 < 18;i_16 += 1) /* same iter space */
            {
                arr_60 [i_13] [i_13] [i_13] = var_11;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_34 = var_5;
                            var_35 = var_3;
                        }
                    }
                }
                arr_65 [i_13] = ((-(~var_9)));
            }
            for (int i_19 = 3; i_19 < 18;i_19 += 1) /* same iter space */
            {
                var_36 -= ((-(arr_61 [i_13] [i_14] [i_13] [i_19] [6])));
                arr_69 [i_13] [17] [i_13] = (((min((((arr_2 [i_14 - 1] [i_13]) - -2)), (-15725 + 15725))) - (((arr_2 [i_14 - 1] [i_14 - 1]) + (var_15 - -1024)))));
            }
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
        {
            var_37 = ((537770311 ? (((arr_15 [i_13] [i_13] [i_20] [i_20]) ? (arr_47 [i_13]) : var_14)) : 187));
            var_38 = 0;
        }
    }
    var_39 = ((!(((((max(var_0, 0))) ? var_12 : var_1)))));
    #pragma endscop
}
