/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((~(var_5 / var_0)));
        var_16 = arr_2 [i_0 + 1];

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((var_2 ? (arr_2 [i_1 - 1]) : (var_4 * 39)));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_17 = 146;
                            var_18 = 124;
                            var_19 = (((arr_13 [i_0] [i_2] [i_4] [i_3] [i_4] [i_3] [i_3]) * (arr_15 [i_3] [i_4])));
                        }
                    }
                }
                var_20 = var_9;
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_21 = (arr_13 [i_0] [18] [i_0 - 1] [i_1] [i_0] [i_0] [i_5]);
                        var_22 = (!var_6);

                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] = 19130;
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = (((((arr_23 [i_7] [i_7] [i_7] [i_7] [i_7]) <= var_13)) || (-19130 < 44063)));
                        }
                        var_23 ^= (arr_19 [i_1 - 2] [i_6] [i_6] [i_6] [i_6] [i_6]);
                    }
                }
            }
            var_24 = var_9;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_25 = (((!26160) | (arr_27 [i_8])));
            var_26 = var_4;
            var_27 = ((-68 ? 1 : 1738841286104877505));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        var_28 = ((((~(arr_12 [i_0] [i_8] [i_9] [i_10] [i_8] [i_0]))) <= (((arr_4 [i_8]) ? 92 : var_5))));
                        arr_33 [i_0] [i_8] [i_8] [i_8] [i_10] [i_0] = var_7;
                        var_29 = ((1 ? 8188 : -113));
                        var_30 = ((((44671 % (arr_20 [i_0] [i_0] [i_0] [i_0]))) < (arr_29 [i_0] [i_8] [i_9])));
                        arr_34 [i_8] = -4922;
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_31 = (((((var_10 < (min(var_11, 8736))))) != var_9));

        /* vectorizable */
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            arr_41 [i_12] = (arr_4 [i_11]);
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    {
                        var_32 = (arr_45 [i_11 + 1] [i_12 - 1] [i_13 + 2]);
                        arr_48 [i_12] [i_12] = (~var_7);
                        arr_49 [i_11] [i_11] [i_12] [i_13] [i_14] = var_2;
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                arr_55 [i_11] [i_11] = var_11;
                var_33 = var_14;
                arr_56 [i_11] [i_15] [i_15] [i_16] = (var_14 || 65419);

                for (int i_17 = 3; i_17 < 20;i_17 += 1)
                {
                    var_34 = ((56 ? var_2 : ((((arr_12 [i_11] [i_15] [i_16] [i_16] [i_17] [i_17]) > 27)))));
                    arr_61 [i_17] [i_16] [i_11] [i_17] = (((var_5 ? (arr_19 [i_16] [i_15] [i_11] [i_17] [i_15] [i_11]) : var_0)));
                    var_35 = ((26539 - (arr_38 [i_16])));
                    var_36 = ((39205 < (((arr_57 [i_15] [i_11] [i_16] [i_15] [i_16] [i_16]) | var_14))));
                    var_37 = 3068542476;
                }
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                arr_64 [i_11] [i_15] [i_15] [i_18] = ((min(127, (var_3 <= var_3))));
                arr_65 [i_11] [i_18] = ((((((14035197320703476607 ? var_14 : 127))) ? (max(var_8, 102)) : (((min((arr_10 [i_11] [i_15] [i_18] [i_15]), (arr_45 [i_11] [i_15] [i_18]))))))));
            }
            var_38 = ((+(max((((arr_35 [i_15]) * 241)), ((((arr_3 [i_11] [i_15]) > (arr_12 [i_15] [i_15] [i_15] [i_15] [i_15] [i_11]))))))));
        }
        /* vectorizable */
        for (int i_19 = 4; i_19 < 20;i_19 += 1)
        {
            var_39 -= 4171850871;
            var_40 += (((((6242 ? var_0 : var_3))) ? (var_14 + var_7) : ((var_7 ? (arr_14 [i_11] [i_11] [i_11] [i_19] [i_19] [i_19]) : var_2))));
        }
        var_41 = (max(var_11, (((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [i_11]) ? 861857422576964255 : (arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 20;i_21 += 1)
            {
                {
                    arr_73 [i_21] [i_20] [i_20] = ((((((((~(arr_28 [i_11] [i_20] [i_21])))) ? ((-123 ? (arr_46 [i_11] [i_20] [i_21] [i_21]) : 103)) : ((var_0 ? var_7 : var_3))))) ? (arr_16 [i_11 + 1]) : var_11));
                    var_42 = ((-(((arr_45 [i_11] [i_20] [i_21]) ^ (arr_47 [i_20])))));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 19;i_22 += 1)
                    {
                        for (int i_23 = 3; i_23 < 21;i_23 += 1)
                        {
                            {
                                var_43 = (((arr_63 [i_21] [i_21] [i_21]) - var_3));
                                arr_79 [i_11] [i_20] [i_21] [i_20] [i_21] [i_11] [i_23] = (((arr_69 [i_11 + 1] [i_11 - 1]) ? -116 : (((-(var_6 * var_3))))));
                            }
                        }
                    }
                    arr_80 [i_11] [i_21] [i_21] = (arr_38 [i_21]);
                    arr_81 [i_20] [i_21] [i_21] = ((~(((((max(3190582237, var_6))) && (((arr_77 [i_11] [i_20] [i_20] [i_21] [i_21]) || var_4)))))));
                }
            }
        }
        arr_82 [i_11] [i_11] = (arr_16 [i_11 + 1]);
    }
    var_44 = ((104 * ((min(var_9, 0)))));
    var_45 = (~var_12);
    #pragma endscop
}
