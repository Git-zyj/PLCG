/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (4207911443 | 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min(3123351208, 6226765230342318636)))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] = var_10;
                        arr_14 [i_1] [i_2] [i_0] [i_1] = 1;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = 0;
                        arr_18 [i_0] [i_1] = (-0 ? (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : 7115005975277524001)) : var_1);
                        var_23 -= 1;
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] [1] &= 1;
                        var_24 = (min(var_24, (((1123619296 ^ (arr_6 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                        var_25 = (min(var_25, (((1 + ((min(0, 1))))))));
                        arr_22 [i_1] [i_1] [i_2] [i_1] = (max((arr_7 [i_0] [i_0] [i_0]), (min((((1 ? var_3 : (arr_2 [i_0] [i_5])))), 15886839704245828887))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_26 [i_6] [i_1] [i_1] [i_0] = 3827490745;
                        arr_27 [i_1] [i_1] = (~0);
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_26 = ((4866301533522279323 ? 5570459581469627442 : ((((((arr_29 [i_7] [i_1] [i_1] [i_7]) ? 1 : (arr_29 [i_0] [i_0] [i_7] [i_8])))) ? -5618196047109146127 : (1 <= 1942931320)))));
                            var_27 |= 0;
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_7] [i_8] [i_8] = min((max(((18446744073709551608 ? var_1 : 10010601330833719944)), ((min((arr_0 [i_2]), 1))))), ((min(2230649817, 2747871786))));
                            arr_33 [i_0] [i_1] = (((arr_3 [i_7]) ? 1 : (((arr_25 [i_0] [i_0]) ? ((((arr_10 [i_0] [i_0] [i_1] [i_0]) ^ 822829442))) : var_1))));
                        }
                        var_28 = ((((max((arr_4 [i_0] [i_1] [i_1]), 15886839704245828882))) ? ((((((arr_30 [i_0] [i_0] [i_0] [i_2] [i_7]) ? 1 : 3264769280))) + (max(1, (arr_30 [i_7] [i_1] [i_2] [i_1] [i_2]))))) : var_4));
                    }
                    arr_34 [i_0] [i_1] [i_2] [i_0] = min(((((1 + 0) ? ((0 ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) : 1)) : 0))), (arr_15 [i_1] [i_1]));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_1] [i_2] [i_1] [i_1] = (arr_36 [i_0] [i_0] [i_0] [i_0] [i_1]);
                        arr_38 [i_0] [i_1] = (~1);

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            arr_41 [i_1] [i_1] [i_1] = (((arr_10 [i_9] [i_9] [i_1] [i_9]) ? (arr_10 [i_10] [i_1] [i_1] [i_0]) : (arr_10 [i_2] [i_1] [i_1] [i_9])));
                            var_29 += 0;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_30 = ((-(0 <= var_17)));
                            arr_46 [i_2] [i_2] [i_2] [i_2] [i_1] = (((1 ? var_11 : 1)));
                            arr_47 [i_11] [i_1] [i_2] [i_1] [i_0] = -1649677021737163474;
                            arr_48 [i_11] [i_9] [i_1] [i_1] [i_0] = arr_19 [i_11] [i_9] [i_1] [i_0];
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_52 [i_0] [i_0] [i_1] [i_0] [i_0] = (18 > 9);
                            var_31 = 1;
                            var_32 = ((1 >= (((arr_7 [i_9] [i_2] [i_1]) ? (arr_7 [i_2] [i_2] [i_2]) : 0))));
                        }
                        var_33 = (min(var_33, (arr_3 [i_2])));

                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            arr_57 [i_1] = ((arr_43 [i_1] [i_13 + 1]) == 3701453703);
                            var_34 = 1;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_35 = (min(var_35, (-var_12 % 1)));
                            arr_61 [i_14] [i_9] [i_1] [i_1] [i_0] = (((0 ? (arr_58 [i_2] [i_1] [i_1] [i_1] [i_9]) : (arr_29 [i_14] [i_2] [i_1] [i_0]))) & 0);
                            arr_62 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1] = ((1 ? (arr_5 [i_1]) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_9] [i_14])));
                        }
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_36 = (arr_29 [i_0] [i_1] [i_1] [i_2]);
                        var_37 += 0;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_67 [i_1] [i_16] [i_2] [i_0] [i_1] [i_1] = -var_13;
                        arr_68 [i_0] [i_0] [i_1] [i_0] = 1;
                    }
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                {
                    var_38 = (max((arr_53 [i_17] [i_0]), (((0 ? 0 : 1)))));
                    var_39 -= var_1;
                }
            }
        }
    }
    #pragma endscop
}
