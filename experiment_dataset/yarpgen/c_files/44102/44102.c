/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [12] [i_1] = ((var_15 ? var_8 : var_17));
            var_19 = var_5;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] = (!var_0);
                var_20 = -2;
                arr_9 [i_0] [i_1] = ((var_15 ? (var_16 ^ var_14) : var_18));
                var_21 = var_9;
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((var_9 ? var_4 : var_11)))));
                            var_23 = (max(var_23, var_16));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_6] [i_6] [1] [i_0] = ((-var_10 ? (((var_6 ? (min(var_17, var_5)) : var_17))) : 0));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_8] = (min(var_1, ((min((-32767 - 1), var_7)))));
                            var_24 = (min(var_24, (((((-(-32767 - 1))) < ((var_8 ? 0 : var_2)))))));
                            var_25 = (min((!var_18), ((var_6 ? 16 : var_2))));
                            arr_30 [i_0] [i_0] [23] [i_0] [i_0] = (((min(var_8, var_8)) | ((((((-1341715841 ? var_3 : var_15))) ? (!var_12) : (0 < -11))))));
                        }
                    }
                }
                var_26 -= ((((var_18 ? var_0 : var_17)) >> (((min(var_2, 9494078728542952022)) - 9494078728542952019))));
                arr_31 [i_0] [i_5] [i_6] = (max(-var_0, 10));
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                var_27 &= var_7;

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_28 += ((-((var_15 ? var_2 : 8))));
                    arr_36 [i_0] [i_5] [i_5] [i_0] &= var_1;
                    var_29 = (max(var_29, (((~(min(var_13, var_8)))))));
                    var_30 = (max(var_30, ((((var_6 ^ var_13) ? ((var_0 ? var_0 : var_12)) : (((var_16 ? var_18 : var_11))))))));
                }
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_45 [i_0] [i_5] [i_9 + 1] [i_9] [i_12] = (max(var_9, (~var_16)));
                        var_31 += (((((var_1 - ((var_1 ? 3754423320 : var_12))))) ? var_14 : (var_9 && 17883085871174936698)));
                        var_32 = (max(var_32, (((+((var_18 ? (var_16 / var_1) : (min(var_11, var_17)))))))));
                        var_33 = (!var_13);
                    }
                    for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_9] [i_11] [i_9 - 3] [i_9] [i_5] [i_5] [i_9] = var_3;
                        var_34 = ((-(17575006175232 && var_6)));
                    }
                    for (int i_14 = 4; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, var_12));
                        arr_53 [i_0] [i_0] [4] [i_0] [i_9] [i_0] [i_0] = ((min(var_11, 1)));
                        var_36 = ((var_5 ? (var_1 | var_13) : var_5));
                    }
                    arr_54 [i_9] [i_9] = 17575006175232;
                }
                for (int i_15 = 4; i_15 < 22;i_15 += 1)
                {
                    arr_57 [i_9] [i_5] [i_5] = (((((var_16 >> (((~var_17) - 2194985874))))) ? var_2 : var_17));
                    arr_58 [i_5] [i_9] [i_15] = var_15;
                }
                var_37 = ((var_11 ? (((!(((var_7 ? var_4 : 23)))))) : (((((-32767 - 1) ? var_6 : var_1)) * (!var_2)))));
            }
            var_38 = (max(var_38, (((min(15978, var_5))))));
        }
        for (int i_16 = 1; i_16 < 22;i_16 += 1)
        {
            var_39 = var_3;
            arr_62 [i_0] [i_16] = (var_10 * var_18);
            /* LoopNest 2 */
            for (int i_17 = 4; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        var_40 = (max(var_40, 8830455184129408734));
                        arr_68 [i_18] = (((var_10 > var_1) ? (!2270610685484873409) : ((((var_9 | var_18) < var_15)))));
                    }
                }
            }
            var_41 += 248;
        }
        var_42 = (max(var_42, ((min((min(var_15, var_11)), (!var_8))))));
        arr_69 [i_0] |= (max((108 | var_9), 178251966));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            {
                arr_74 [4] [i_20] = (((~var_17) ? (var_18 >= var_14) : (min(var_14, var_14))));
                var_43 = (max(var_43, var_15));
                arr_75 [i_20] = ((var_14 % ((max(var_0, var_3)))));
            }
        }
    }
    #pragma endscop
}
