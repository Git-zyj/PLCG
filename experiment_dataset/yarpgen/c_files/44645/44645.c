/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (!(((arr_0 [i_0]) >= (arr_0 [i_0]))));
        var_15 = ((~(((arr_1 [i_0] [i_0]) - var_3))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((~((~(arr_5 [i_1]))))))));
        arr_6 [i_1] [i_1] = -16555;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_17 = (max(var_17, (arr_9 [i_2 + 4] [i_2 + 4])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_2] = (var_8 ? (arr_7 [i_2 + 1] [i_2 + 1]) : 1);

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((arr_7 [i_2] [i_2 + 2]) ? 3281475926016240518 : -16555);

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_18 += (var_5 / (arr_9 [i_2] [i_2]));
                            var_19 = ((16554 & (arr_19 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [i_2] = var_6;
                            arr_25 [i_7] [i_2] [i_2 - 1] = ((((var_7 ? var_8 : (arr_16 [i_2] [i_2] [i_2] [i_2]))) ^ (arr_9 [i_3] [i_3])));
                            var_20 = (!var_1);
                        }
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_21 = (min(var_21, (((var_4 <= (arr_20 [i_2] [i_3] [i_2] [i_2] [i_2]))))));
                            var_22 = ((((var_2 ? var_13 : var_11)) * -16531));
                            var_23 = (arr_20 [i_2] [i_3] [i_2] [i_5] [i_5]);
                            arr_28 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] = var_0;
                        }

                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_9] [i_2] [i_2] = (arr_8 [i_2]);
                            arr_32 [i_9] [i_2] [2] [2] [i_2] [i_2 - 1] = ((~(arr_12 [i_4])));
                            arr_33 [i_2] [i_2] [i_2] [i_2 + 1] = 822522490;
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] = var_11;
                            var_24 = ((!(arr_10 [i_2] [i_3] [i_4])));
                            arr_37 [i_5] [i_5] [i_2] [8] [8] [8] [1] = (arr_11 [i_2 + 4]);
                        }
                        arr_38 [i_2] = var_5;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_41 [i_2] [5] [i_4] [i_4] [i_4] = -var_1;
                            var_25 = (arr_8 [i_2]);
                        }
                    }
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        arr_45 [i_2] [i_3] [i_3] [5] [i_2] [i_2] = 16554;
                        var_26 = var_5;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_49 [i_2 + 1] [4] [8] [i_2 + 1] [i_3] |= -16555;
                        var_27 = (((~(arr_34 [i_2] [i_2] [i_2] [i_2] [i_2]))));

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_53 [i_2] [17] [i_2] [17] [5] [i_2] = var_0;
                            var_28 -= -var_13;
                            arr_54 [i_2] [i_3] [i_3] [i_4] [i_2] [i_3] = (var_0 ^ 192);
                        }
                        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            var_29 = (((arr_8 [i_2]) ^ (arr_8 [i_2])));
                            arr_57 [i_2] [i_2] [i_2] [i_2] [i_13] [i_15] = (arr_51 [i_2] [i_2] [i_2] [i_4] [i_4] [i_15] [i_15]);
                            var_30 = ((~(~var_6)));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                        {
                            arr_61 [i_16] [i_2 - 2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2 - 2] = (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4]);
                            var_31 = var_4;
                            var_32 = (min(var_32, (((~(((arr_7 [i_4] [i_3]) ^ var_5)))))));
                        }
                        arr_62 [i_2] [i_2] [i_2] [i_13] = (16555 % -16555);
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        var_33 = (((arr_60 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 - 2] [i_3]) ? 1919330873 : (~var_3)));
                        var_34 = (var_12 / (arr_43 [i_2 + 4] [i_2] [i_2]));
                        arr_65 [i_2] [i_3] [i_3] [1] = (arr_22 [i_2] [i_2 + 3]);
                        arr_66 [i_3] [4] [i_3] [i_17] &= (((arr_55 [i_4] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_17]) > (arr_55 [i_17] [i_2 - 2] [i_4] [i_17] [i_17] [i_3])));
                    }
                    arr_67 [i_2] = -93;
                }
            }
        }
    }
    var_35 = (min((min(16526, (964450933 + -16555))), var_12));
    #pragma endscop
}
