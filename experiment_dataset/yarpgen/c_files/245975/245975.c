/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, ((1 << (var_7 - 88)))));
    var_11 = ((!((min(-72, 3724535813)))));
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = ((((61 ? 229 : 1765714918974824221)) << (((var_7 - var_4) - 4173673841))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = var_0;

            /* vectorizable */
            for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_15 = var_8;
                arr_9 [i_2] [i_0] = var_8;
            }
            for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_16 = (min(var_16, ((((((arr_1 [i_0 + 1] [i_0 + 1]) | var_8)) < (((((var_3 ? var_8 : var_5)) <= (max(var_0, var_0))))))))));
                var_17 = 68;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_0] [i_0 + 1] [i_3] [i_0] = var_8;
                    var_18 = var_0;

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_19 = var_1;
                        arr_18 [i_0] [i_0] [i_0] [15] = var_3;
                        arr_19 [i_0] [i_0] [i_3] [i_0] [i_5] [i_5] = var_0;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_20 = (-2021383532 + ((var_9 ? var_0 : var_5)));
                        var_21 = ((var_2 > var_7) >> (-810419800 + 106));
                    }
                    var_22 = (min(var_22, (var_9 ^ var_4)));
                }
                var_23 = ((~(((!(arr_4 [i_0 + 1] [i_3 + 1]))))));
                arr_22 [i_0] [i_0] [0] = ((((min(250, 61))) && ((min((arr_8 [i_0] [i_1] [i_1] [i_3]), (var_9 || var_4))))));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_24 = (min(var_24, (((3494789900 ? 3184959057 : 0)))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_25 = ((!(((var_9 ? var_6 : var_1)))));
                            var_26 = (max((~var_6), (arr_24 [i_0])));
                            arr_30 [6] [i_9] [12] [i_0] [1] = (((max((((arr_6 [i_0] [i_0] [i_9]) & var_2)), var_4)) >> ((((var_1 ? var_5 : (arr_7 [i_0 + 1] [i_8 - 3] [i_9]))) - 74))));
                            arr_31 [i_0 + 1] [i_1] [i_0] [i_8 - 4] = var_1;
                        }
                    }
                }
                var_27 = (min(((var_4 && (((var_7 ? var_7 : var_6))))), (!var_1)));
            }
            var_28 -= ((-var_8 ? ((var_1 ? (arr_20 [i_0] [14] [14] [i_0 + 1] [i_0] [i_0 + 1]) : var_7)) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            arr_40 [i_0] [i_11] [2] [i_1] [i_0] = ((!((((((92 ? var_3 : var_6))) ? (~17861) : (arr_3 [i_1] [i_0] [4]))))));
                            var_29 = (!var_2);
                            arr_41 [i_0] = 177;
                            arr_42 [i_0] [i_0] [7] [i_11] [i_12] = (((~var_2) ? (((var_0 >> 1) ^ (60393 & var_5))) : (((arr_14 [i_0]) ? var_8 : var_8))));
                        }
                    }
                }
                arr_43 [i_0] [i_0 + 1] = (((~-45) ? (max(8116572508245693569, 0)) : -var_3));
                var_30 = (min(var_30, ((((((229 ? 33082 : -32054))) ? (((((-25 ? 4 : -1459807384))) | var_3)) : var_3)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_31 = (min((var_2 + var_7), (arr_12 [i_0])));
                            var_32 = (max(var_32, (((((var_4 ? (min(37208, (arr_34 [i_0] [i_10] [i_0]))) : ((var_0 ? var_5 : var_0)))) * ((min(var_5, (!var_4)))))))));
                            var_33 = (arr_11 [i_1] [8] [i_13] [i_14]);
                            var_34 += ((((((max(var_1, var_4))) ? ((-1767960261 ? 55 : 14998023902164318639)) : ((((arr_0 [i_1] [i_14]) ? var_0 : var_5))))) * var_7));
                            var_35 ^= (max((((!(!-8116572508245693562)))), ((var_1 ? var_2 : var_4))));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
            {
                arr_52 [i_0] [i_0] [i_0] = ((!((min(((28336 ? var_3 : var_9)), (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                arr_53 [i_15] [i_0] [i_1] [i_0] = ((var_4 ? var_7 : ((126 ? (-9223372036854775807 - 1) : 8536702700544310259))));
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
            {
                var_36 = ((!(((var_1 && 33993) || (var_3 && var_3)))));
                arr_56 [i_1] [i_0] = var_7;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_37 = ((+((((((arr_35 [i_0 + 1] [i_0 + 1] [i_1]) ? var_9 : (arr_35 [i_0] [i_0] [13])))) ? -var_1 : -14))));
                            arr_63 [i_0] [i_17] [i_16] [i_0] = ((var_2 ? (((~var_1) ? var_2 : (max(var_2, var_7)))) : var_7));
                        }
                    }
                }
            }
        }
        arr_64 [i_0] = ((~(min(var_6, ((1306214530 ? var_3 : -26))))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        var_38 += var_7;
        /* LoopNest 2 */
        for (int i_20 = 4; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                {
                    arr_72 [i_21] [i_21] [i_21] [i_21] = ((var_9 ? 14 : (arr_66 [i_20])));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            {
                                arr_79 [i_23] [i_22] [i_21] [i_19] [i_19] = (((((var_2 ? var_6 : var_6))) ? var_9 : var_2));
                                arr_80 [i_19] [i_19] [i_19] [i_21] [i_19] [i_21] = (((((var_5 ? var_2 : var_7))) ? (var_9 ^ 1306214530) : var_4));
                                arr_81 [i_21] [i_21] [i_21] [i_22] [i_23] = ((!(arr_3 [i_20] [i_21] [i_20])));
                            }
                        }
                    }
                    var_39 = (max(var_39, (((3302270996 >> (-1332091042 + 1332091047))))));
                    arr_82 [i_19] [0] [i_21] = ((((3494789900 ? var_9 : var_3))) ? ((((arr_77 [13] [i_20 + 1] [i_20] [i_21]) <= var_0))) : (var_2 ^ var_7));
                    var_40 = (((arr_11 [i_19] [i_20 + 1] [i_21] [i_19]) <= (arr_24 [i_21])));
                }
            }
        }
    }
    var_41 = (((!var_2) ? var_7 : var_5));
    #pragma endscop
}
