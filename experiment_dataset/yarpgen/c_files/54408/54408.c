/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_2] [i_2] = (((var_8 ? var_7 : var_7)));
                arr_9 [i_0] [i_2] = ((~(~-6197)));
                arr_10 [i_2] = (((!(((111 ? 3900094464268461231 : 17))))) ? -9 : ((var_4 ? var_3 : (min(var_9, var_7)))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_3] [i_4] [i_1] [i_4] = (min(65520, (~17345427995135049069)));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_12 -= var_4;
                            var_13 = (((((3280610791854584409 ? (arr_5 [i_0] [i_0] [i_0]) : 1))) ? (~var_9) : var_8));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_14 = var_10;
                            arr_23 [i_4] = (((!var_7) ? var_9 : (arr_5 [i_0] [i_1] [i_3])));
                        }
                        var_15 = (min(var_15, ((min((((~(arr_7 [i_1] [i_1])))), var_6)))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_0] [i_0] &= var_6;
            var_16 = (min(var_16, ((~(arr_1 [i_7])))));

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_17 = (min((((0 ? 9 : var_9))), (min(((var_7 ? var_6 : var_3)), (((var_4 ? -1 : var_2)))))));
                            var_18 = (((arr_13 [i_10 - 1] [i_10 + 1] [i_9 - 1] [i_9 - 1]) ? (arr_6 [i_9 + 2] [i_9 + 2]) : var_8));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        arr_41 [i_8] [6] [i_8] [i_11] [i_12] [i_0] [i_8] = ((((min((((178 ? var_0 : var_8))), ((var_8 ? var_4 : var_5))))) ? (min((~var_4), -var_9)) : (((var_5 ? ((var_4 ? -59 : var_9)) : (arr_28 [i_0] [1] [i_8]))))));
                        arr_42 [i_0] &= ((~(((arr_25 [i_12 + 1]) ? var_6 : var_6))));
                        var_19 = (min((var_1 > var_0), var_0));
                        var_20 = (min(var_20, var_5));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_21 = (arr_19 [i_11] [i_11] [i_11] [i_11] [i_11]);
                        var_22 = ((-((var_6 % (min(var_6, var_10))))));
                        var_23 &= var_4;
                        arr_45 [11] [i_8] [11] = 1156422123;
                        arr_46 [i_0] [i_0] [i_8] [i_11] [i_0] = min(var_7, ((((var_6 ? var_11 : (arr_11 [i_7] [i_7]))))));
                    }
                    arr_47 [i_0] [i_7] [i_8] [i_0] [i_0] = ((((((~var_4) | var_10))) ? (arr_25 [i_0]) : var_2));
                    var_24 = (5693250629790525531 - 18446744073709551594);
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_25 = arr_35 [i_14] [i_8] [i_8] [i_7] [i_7] [14];
                    var_26 = (((~(min((arr_4 [0]), 529335185)))));
                }
                /* vectorizable */
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    var_27 += var_1;
                    var_28 = (((~var_8) ? var_2 : (arr_38 [i_0] [i_15 - 2] [i_15] [1])));
                    arr_52 [i_0] [i_0] [i_0] [i_0] [1] = ((var_5 ? ((~(arr_18 [i_15 + 1] [i_15] [i_8] [6] [i_7] [i_0]))) : var_4));
                    var_29 &= (arr_49 [17] [i_7] [i_15 - 1] [i_8]);
                }
            }
            var_30 = var_5;
        }
        var_31 -= ((~((-((-(arr_43 [i_0])))))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 17;i_18 += 1)
                {
                    {

                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            var_32 = (min(var_32, var_4));
                            var_33 = var_8;
                            var_34 = (min(var_34, (((((min(3900094464268461222, (min((arr_37 [i_16] [i_16] [i_18] [i_19]), var_2))))) && var_9)))));
                        }
                        for (int i_20 = 4; i_20 < 17;i_20 += 1)
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_18 - 3] [i_0] = (((((min(53, 12)))) * (min((((-(arr_3 [1] [i_0])))), ((15166133281854967191 ? 3900094464268461239 : var_6))))));
                            var_35 += var_2;
                            arr_66 [i_0] [i_0] [i_17] [i_18] [i_0] [i_18] [i_18] = ((((var_1 ? var_5 : var_9)) | (!var_5)));
                        }
                        var_36 = ((((((arr_43 [i_18 - 3]) ? (arr_43 [i_18 - 1]) : -9669))) ? var_11 : 15166133281854967207));

                        for (int i_21 = 2; i_21 < 17;i_21 += 1)
                        {
                            var_37 = -6188;
                            arr_69 [i_0] [i_0] [i_17] [i_17] [i_18] [i_21 - 2] &= (min((arr_68 [i_21 - 1] [i_21] [i_21 - 2] [0] [i_18 + 1]), (arr_15 [i_0] [i_16] [i_17] [i_18 - 2] [i_16])));
                            var_38 = (min(var_38, (((3138545173 ? -32766 : -13)))));
                            var_39 -= (min((arr_31 [i_0] [i_0] [9] [i_17] [i_18] [i_21 - 2]), (arr_62 [i_0] [i_16] [i_16] [17] [i_21] [i_16])));
                            var_40 ^= (-9223372036854775807 - 1);
                        }
                        for (int i_22 = 4; i_22 < 15;i_22 += 1) /* same iter space */
                        {
                            var_41 = (min((min((((var_8 ? var_5 : var_10))), var_0)), 132));
                            arr_72 [i_16] [i_0] [i_18 - 3] [i_0] [i_16] [i_0] [i_0] = ((min(var_6, (arr_68 [14] [i_22 - 3] [i_18 + 1] [2] [2]))));
                        }
                        /* vectorizable */
                        for (int i_23 = 4; i_23 < 15;i_23 += 1) /* same iter space */
                        {
                            var_42 = (((var_9 ? var_0 : var_2)));
                            var_43 = var_3;
                            arr_75 [i_0] [i_16] [i_17] [9] [i_23] = (((58720256 ^ (arr_54 [10] [i_17]))));
                            var_44 = ((var_5 ? (arr_6 [i_0] [i_0]) : var_6));
                        }
                        for (int i_24 = 3; i_24 < 17;i_24 += 1)
                        {
                            arr_78 [i_24] [i_24] [i_24] = (((min((arr_67 [i_18 - 2] [i_18 + 1] [i_18 + 1] [i_24] [i_24 + 1] [i_24 + 1] [4]), (arr_21 [i_18 - 1] [i_18 - 1] [i_18] [i_18 + 1] [i_24 - 3])))) ? var_4 : ((((!(((var_1 ? var_5 : var_7))))))));
                            var_45 = (max(var_45, ((((var_3 ? var_8 : var_6)) * var_9))));
                            arr_79 [i_0] [i_24] = min((min(-1, -1431664215947406495)), (~var_5));
                        }
                        arr_80 [2] [2] [2] [i_18] |= ((var_2 * (((128 ? 4084531302 : 4289080837497619927)))));
                    }
                }
            }
        }
    }
    var_46 = ((!(((!var_6) != var_8))));
    var_47 = var_7;

    for (int i_25 = 0; i_25 < 18;i_25 += 1)
    {
        arr_84 [4] &= var_0;
        var_48 *= var_9;
        var_49 = (max(var_49, var_10));
    }
    #pragma endscop
}
