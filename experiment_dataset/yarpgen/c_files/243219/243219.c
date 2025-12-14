/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (!-6149);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] [i_1] = var_6;
                                var_11 = (min(var_11, ((((max(((max(var_3, var_10))), (arr_2 [i_2 - 2])))) ? (min((min(0, var_9)), -6152)) : ((((~var_2) ? 1429 : 255)))))));
                                var_12 = ((!(((-(arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                            }
                        }
                    }
                    var_13 = -106;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            {
                var_14 = (((arr_15 [i_5]) ? (((arr_15 [i_5]) ? (arr_15 [i_5]) : var_7)) : ((min((arr_17 [i_5] [i_6 - 2]), 1623218161)))));
                arr_18 [15] [i_5] [15] = (((arr_17 [i_5] [i_5]) ? 6496071952520065349 : (var_10 + var_10)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_15 = (((min((arr_21 [20] [20] [i_8]), (arr_19 [i_7] [i_8]))) < (((((arr_19 [i_7] [i_8]) != (arr_21 [i_8] [i_7] [i_7])))))));

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_27 [i_7] = (max(var_9, -var_3));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_34 [14] [4] [i_9] [4] [19] = var_6;
                                arr_35 [i_7] [i_8] [i_9] [20] [i_11] = var_0;
                                var_16 = (((var_7 != var_2) > (!var_3)));
                                var_17 = min(((var_6 ? (var_10 - var_3) : var_1)), (arr_21 [i_11] [i_9] [i_7]));
                            }
                        }
                    }
                    var_18 = var_9;
                    arr_36 [i_7] [i_7] [i_9] = (((((arr_29 [i_7] [i_7] [i_9] [3]) & (arr_29 [i_7] [i_7] [i_7] [i_7]))) >= ((((((var_7 ? (arr_29 [4] [i_7] [i_7] [i_7]) : var_10))) || var_8)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_42 [15] [i_8] [7] [i_12] [15] [i_13] |= ((var_10 ? 1623218161 : (arr_21 [i_7] [i_7] [i_9])));
                                var_19 = (max(var_19, (((((max(var_3, -92))) ? ((-(arr_23 [i_7] [i_12]))) : (arr_23 [i_7] [i_12]))))));
                                var_20 ^= (~161);
                                arr_43 [i_13] [18] [i_12] [i_9] [i_9] [i_8] [i_7] = ((var_2 ? ((-(arr_30 [20] [i_8] [i_8] [i_7] [i_13]))) : -var_1));
                                var_21 = (max(var_21, ((((arr_22 [18] [i_7] [i_7]) ? (arr_22 [i_7] [i_8] [i_7]) : (((((arr_22 [i_7] [i_9] [i_13]) == (arr_22 [i_7] [i_9] [i_12]))))))))));
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_48 [i_7] [i_7] [i_7] [i_7] = var_6;
                        var_22 = (((((((!(arr_38 [0] [i_14]))) ? (arr_25 [i_7] [i_14] [i_15]) : (!var_7)))) || ((!(!5699313566787648894)))));
                        var_23 = (max(var_23, var_2));
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_24 += var_6;
                        var_25 = (min(var_25, var_7));
                    }

                    for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        arr_55 [i_7] = ((!(((19748 ? (arr_23 [i_7] [i_17]) : (arr_23 [4] [i_8]))))));
                        var_26 = var_5;
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 2; i_19 < 19;i_19 += 1)
                        {
                            var_27 = (arr_59 [i_7] [i_8] [i_14] [i_19 - 2]);
                            arr_64 [i_7] [16] [15] [i_18] [i_19] [i_18] = var_9;
                        }
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            var_28 = (max(var_28, (((((min((arr_63 [i_20]), var_3))) ? (!1623218179) : (arr_52 [i_7] [i_8]))))));
                            var_29 = 116;
                        }
                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            arr_71 [i_21] [i_7] [i_7] = (((1028203875 ? 2671749134 : (23334 ^ 32751))));
                            var_30 = var_8;
                            arr_72 [20] [i_8] [2] [i_8] = (~4294967295);
                        }
                        var_31 = 240;
                        var_32 = ((((((((min((arr_68 [i_7] [i_8] [i_14] [i_18] [i_18] [i_14] [i_14]), var_5))) == (!var_3))))) >= (min(0, (max(1623218139, 1871435377))))));
                    }
                    arr_73 [i_7] [i_7] [i_14] [i_14] = (min((((var_6 * var_2) * (((arr_52 [i_7] [i_8]) ? 1623218162 : var_2)))), ((min((arr_24 [i_7] [2] [i_8] [3]), (arr_49 [i_14] [i_7] [i_7] [i_7]))))));
                }
            }
        }
    }
    #pragma endscop
}
