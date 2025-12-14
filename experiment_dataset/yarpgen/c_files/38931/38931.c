/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = -1574337758548629129;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += (var_6 && 103);

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_17 = 1574337758548629136;
                        var_18 = (min(var_18, (((1870 & (!-140624904360136173))))));
                        var_19 = var_10;
                        var_20 ^= (((arr_3 [i_0]) * ((0 ? 2829216971069814232 : 77))));
                        var_21 = 1574337758548629137;
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_13 [3] [i_1 + 1] [i_0] [13] [i_4] [i_4] = 60;
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((((514691831 ? 4 : var_12)) != var_7));
                        var_22 = ((var_0 ^ (((4096 ? 60 : 60687)))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_23 ^= (3 && 1);
                            var_24 = (21388 + -302828072);
                            var_25 = (min(var_25, (((((((arr_15 [i_0] [14] [i_0] [i_0] [i_0] [i_0]) | -6906139295972055987))) || (((20 ? var_1 : -514691831))))))));
                            var_26 = ((var_10 ? (var_7 % var_4) : (~55)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [2] [i_0] = var_13;
                            arr_21 [i_0] [i_0] [i_2] [i_4] [i_6] = (arr_15 [i_0] [i_0] [i_1 - 1] [i_0] [i_4] [i_6]);
                        }
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_27 += ((((arr_18 [i_0] [i_1] [i_7]) ? var_10 : var_6)));

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_28 ^= (((~var_7) | (33521664 || var_12)));
                            var_29 = (max(var_29, (((~(~44147))))));
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_2 - 1] [i_7 - 1] [i_9] = (i_0 % 2 == zero) ? ((((-2147483647 - 1) + (arr_11 [i_0] [1] [0] [i_7])))) : ((((-2147483647 - 1) - (arr_11 [i_0] [1] [0] [i_7]))));
                            arr_33 [i_0] = ((53 ? 66 : 77));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_30 ^= ((!(((var_2 ? (arr_4 [i_0]) : (-2147483647 - 1))))));
                            arr_38 [i_0] [i_1] [i_2] [i_7] [i_10] = var_8;
                            var_31 = ((75 ? 2147483647 : 1));
                        }
                        arr_39 [i_0] [i_0] [i_2] [i_7 - 1] = 87;
                    }
                    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(!var_14)));
                        arr_43 [i_0] [i_0] [i_2] [i_2] [i_11] = (!18007642586491627285);
                        var_32 = -var_1;
                        arr_44 [i_0] [i_1] [i_0] [i_0] [i_11] = ((var_3 ^ (var_9 && var_0)));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_33 = arr_46 [i_12];
        arr_47 [i_12] = (!(((-(!-33554432)))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_34 = (-(arr_15 [i_13] [i_15] [1] [16] [i_15] [i_15]));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_35 = ((~(var_0 > -4526)));
                        var_36 = (((arr_7 [i_15] [i_14] [i_16]) || (arr_35 [i_13] [i_14] [i_13] [i_15] [i_16])));
                        var_37 = (-5 && -1574337758548629129);
                        arr_59 [0] [i_14] [i_14] [i_15] [i_15] [i_16] &= (arr_57 [8] [i_14] [i_15] [i_16]);
                        var_38 = (min(var_38, (((var_0 ? 62 : -0)))));
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        var_39 = (min(var_39, 92));
                        var_40 = (min(var_40, var_1));
                    }
                    var_41 = (((arr_50 [i_13]) % (max(3733104798, (max(var_14, (arr_12 [5] [i_13] [i_13] [i_14] [1] [i_15])))))));
                    arr_62 [i_15] [i_15] = ((0 ? (var_5 == 2147483647) : ((((arr_12 [i_13] [i_14] [i_13] [i_15] [i_15] [i_15]) != 225)))));
                }
                arr_63 [i_13] [i_14] = ((((min(0, -603386090))) ? 1 : 1));
                arr_64 [i_14] = (((86 || 22) ? (~60) : 1));
                var_42 = 117;
                arr_65 [i_13] [i_14] [i_14] = (((((-((var_4 ? 1 : var_8))))) ? ((max(var_13, (max(178, 114053629))))) : (((var_3 ? -2147483639 : var_0)))));
            }
        }
    }
    var_43 ^= var_8;
    var_44 = (((((2117424523 == 1574337758548629147) ? (!var_9) : 1))) ? var_12 : var_5);
    #pragma endscop
}
