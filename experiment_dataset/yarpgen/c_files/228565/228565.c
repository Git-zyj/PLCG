/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-122 ? var_1 : 126)) - 121));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (65535 + ((var_10 ? var_10 : -110)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((var_14 / (0 ^ 14684)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] |= (~50862);
                                var_17 += (!50862);
                                arr_17 [i_3] = -var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_18 += (max((40070 | var_0), var_5));
                        arr_31 [i_5] [i_6] [i_7] [i_5] = ((var_2 - (((((!(arr_26 [i_5] [i_6] [i_8] [i_8])))) >> ((var_1 / (arr_20 [i_5] [i_5])))))));
                        var_19 = ((((min(7813, 5200772678100798075))) ? ((((64993 != (arr_29 [i_6 - 2] [i_6 - 2] [i_7] [i_7 + 1] [i_8] [i_8]))))) : (max(2505671005631215047, var_9))));
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            var_20 += ((((min((arr_27 [i_5] [i_9 + 1] [i_9 - 1] [10]), (arr_34 [0] [i_9 + 1] [i_9])))) ? ((min(50844, (arr_27 [i_5] [i_5] [i_9 + 1] [i_9 - 1])))) : var_4));

            for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
            {
                arr_37 [i_5] [i_5] = (((min((arr_24 [i_5]), 81)) - (~var_5)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((max((min(-11, 5564067202352982375)), var_9)))));
                            var_22 = (max(var_22, ((max(6, -6282090092937479843)))));
                            var_23 = -2;
                        }
                    }
                }
                var_24 ^= ((var_14 + (((arr_33 [10] [10]) ? var_4 : var_12))));
                var_25 = var_5;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    arr_46 [i_5] [i_9 - 1] [i_14] = 5200772678100798075;
                    var_26 = (~var_3);
                    arr_47 [i_5] [i_5] [i_13] [i_13] = (((arr_28 [i_14] [i_5] [i_13] [i_14]) ? (arr_28 [i_9 + 1] [i_5] [i_13] [i_5]) : var_5));
                    var_27 = ((((121 ? var_3 : var_7)) - (!var_7)));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_54 [i_16] [i_5] [i_15] [i_15] [i_13] [i_5] [i_5] = (((arr_48 [i_5] [i_9] [i_9] [i_9 - 1] [i_15]) - (arr_48 [i_5] [i_9] [i_9] [i_9 + 1] [i_15])));
                            var_28 = (!-81);
                        }
                    }
                }
                arr_55 [i_5] [i_9 - 1] = ((~(((arr_43 [i_5] [i_9] [i_5] [i_5]) | var_6))));
                var_29 = (((50862 && 65533) - var_12));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
            {
                arr_58 [i_5] [i_5] = (arr_56 [i_5] [i_5] [i_9] [i_9]);
                arr_59 [14] [14] [i_5] [i_5] = (((~var_8) >> (var_7 - 26169)));
            }
        }
    }
    #pragma endscop
}
