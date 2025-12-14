/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((max(var_6, 58))) - 58));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_13 = ((((var_8 ? (arr_0 [i_4] [i_0]) : 53229)) / (arr_1 [i_4 + 1])));
                                var_14 -= ((-58 + (((max((arr_7 [i_2 + 1] [i_4 + 1] [i_4 + 1]), 58))))));
                                arr_14 [13] [i_1] [i_2] [i_3] [i_4 + 1] = ((((max(((1 - (arr_11 [1] [i_1] [i_1] [i_2] [i_3] [i_4]))), (var_10 || 24)))) ? (arr_13 [17] [i_4 + 1] [i_0] [i_3] [i_4] [i_4] [i_2]) : ((min((max(var_1, 41612)), (arr_3 [i_2 + 1] [i_4] [i_4]))))));
                                arr_15 [i_2] [i_1] [i_2] [i_2] [i_4] |= (max((arr_5 [i_2 - 3]), (arr_13 [i_2 - 4] [i_2 - 4] [i_4 + 1] [i_4] [i_4] [i_4] [i_4])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_15 ^= var_11;
                            var_16 = (min(var_16, var_8));
                        }
                        var_17 += var_6;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((((max(-8281221520814208563, var_4))) || (!var_6)))))));

                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_19 = (max(var_19, ((((max((arr_12 [i_8 - 2] [i_8 + 3] [i_8 - 2] [7] [i_2 - 2] [i_2 + 3]), ((2417041188 ? (arr_8 [i_8]) : (arr_21 [i_0] [i_1])))))) ? ((var_7 ? (((arr_23 [15] [i_8] [i_7] [i_0] [i_1] [i_0]) ? 8281221520814208562 : var_1)) : (((var_10 ? 0 : var_5))))) : var_3))));
                            var_20 = 41;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_28 [i_0] [1] [1] [i_7] [i_9] = 3059063927;
                            var_21 = ((-((var_4 ? -8281221520814208563 : (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                            var_22 = (var_0 | ((var_6 ? 49 : 1)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_34 [i_11] = (((~var_6) && ((!((max(var_3, (arr_31 [i_0] [i_1] [i_2] [i_10] [i_11]))))))));
                            arr_35 [i_0] [i_11] [i_11] [i_10] [5] [i_0] [i_1] = (max(((16939632933398169327 ? (arr_3 [i_0] [i_1] [i_10]) : var_4)), ((((arr_3 [i_0] [i_2 - 2] [i_2]) < (arr_3 [i_1] [i_2 - 3] [i_10]))))));
                            arr_36 [9] [i_10] [i_10] [i_10] [i_11] = var_9;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_23 = (arr_37 [i_2 - 2] [9] [15] [i_1] [2]);
                            var_24 -= var_9;
                            arr_39 [i_0] [i_0] = (1151108743 ^ 881817487);
                        }
                        var_25 = ((var_11 ? ((((min(54887, 8281221520814208562))) ^ ((var_4 ? (arr_23 [i_0] [i_0] [i_0] [i_1] [i_2] [13]) : 186503454987425131)))) : ((max(((224 ? 0 : var_2)), var_8)))));
                        var_26 = ((-((max((arr_23 [i_0] [i_1] [i_2] [i_2 + 3] [i_10] [i_2]), var_2)))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_2] = ((max((max(var_9, 226)), ((max((arr_4 [i_0]), (arr_40 [i_0] [i_1] [i_2])))))));
                        var_27 = ((~(arr_40 [i_0] [7] [i_2 + 2])));
                        var_28 += (arr_0 [i_0] [i_1]);
                    }
                    var_29 = (max(2251799813685247, ((var_6 ^ (((min(var_1, 67))))))));
                }
            }
        }

        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            arr_46 [i_0] = min(752934641739819009, ((-8281221520814208563 ? 43485 : -9095113152999062027)));
            arr_47 [i_0] [i_14] = (min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max((arr_23 [19] [i_0] [i_14] [i_14] [i_0] [i_0]), -37))));
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] |= (max((((arr_16 [i_15] [i_15] [i_15] [i_15]) ? (arr_20 [i_15] [i_15] [8] [i_15]) : 1023)), ((((((arr_20 [i_15] [i_15] [i_15] [i_15]) + 2147483647)) >> (((arr_20 [i_15] [i_15] [i_15] [i_15]) + 52)))))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    arr_57 [i_15] [i_15] [i_15] [i_15] = ((((min((arr_19 [i_16] [i_16 - 1] [i_16 - 1]), (((var_0 ? var_9 : 112)))))) ? ((((!(arr_22 [4] [i_16] [i_16 + 3] [i_16 - 1] [i_16 - 1]))) ? (arr_26 [i_16 + 1] [i_16] [i_16] [i_16 + 4] [i_16 + 2] [i_16 + 1]) : (!var_2))) : var_1));
                    arr_58 [i_17] = (((144 ? (arr_6 [i_15] [i_15] [i_16 - 1] [i_16 + 3]) : (arr_29 [i_15] [i_16] [i_16 + 1] [i_16 + 2]))));
                    var_30 -= (max(((((~var_6) ? (arr_48 [i_15]) : (2147467264 && 260046848)))), ((var_11 ? var_11 : (max(-37, 18446744073709551615))))));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
    {
        var_31 -= 36;
        var_32 |= ((!((max(((-107 ? -45 : var_11)), var_1)))));
        var_33 = (max(((~((84 ? var_1 : 106)))), var_1));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_34 = (max((max(((max((arr_41 [i_19] [i_19] [19] [i_19]), (arr_45 [i_19])))), ((var_8 ? -9016 : var_3)))), 1));
        var_35 = (max(var_35, ((!((min(21, 186503454987425146)))))));
        var_36 = (min(((max((arr_27 [i_19] [i_19]), var_7))), (min((108 / 65535), ((((arr_59 [i_19]) || var_5)))))));
        var_37 = (max((max(((min(24576, 32766))), var_4)), (max(3828225680, var_7))));
    }
    var_38 ^= var_7;
    #pragma endscop
}
