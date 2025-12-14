/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 23;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_1] [i_1] = (!524985700);
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_12 -= var_0;
                            var_13 = (1 ? var_9 : -6401655487546804211);
                        }
                    }
                }
                arr_15 [i_0] [i_1] = ((-(arr_6 [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_14 = (((arr_1 [i_5 - 1]) || (arr_1 [i_5 + 1])));
                            var_15 = (((arr_1 [i_2 - 1]) ? (!var_11) : 19143));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_16 = (var_3 == var_0);
                arr_27 [i_0] [i_1] = ((((((var_2 + 9223372036854775807) << (2147483647 - 2147483647)))) ? ((204 ? 231 : 0)) : 1));
            }

            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_17 ^= (arr_17 [i_9] [i_9] [i_9 + 1] [i_9 + 1]);
                            var_18 -= (1 ? var_5 : var_0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_19 = (((arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 + 4]) ? var_9 : (arr_13 [i_12] [i_12 + 4] [i_12 + 4] [i_12] [i_12 + 4])));
                            var_20 = var_11;
                            var_21 = (min(var_21, (((10417967360713702078 ? 661956846042838968 : 1854669202)))));
                        }
                    }
                }

                for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    var_22 = (3615679786 ? 1 : var_10);

                    for (int i_14 = 3; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_1] [i_1] = (674639270040073407 / 1);
                        var_23 = (min(var_23, ((((((-29017 ? (-127 - 1) : 5425))) ? (arr_12 [i_14 - 1] [2] [2]) : var_11)))));
                    }
                    for (int i_15 = 3; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        var_24 = var_8;
                        var_25 -= (2 * var_11);
                    }
                    for (int i_16 = 3; i_16 < 22;i_16 += 1) /* same iter space */
                    {
                        arr_54 [i_16 + 1] [i_1] [i_8 - 1] [i_1] [i_1] [21] = 154;
                        var_26 = 1642253106;
                    }
                    var_27 = ((59 ? var_8 : 74));
                }
                for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
                {
                    var_28 = (((arr_33 [i_0] [19] [i_17 - 1] [i_8 + 1] [12]) % (arr_33 [i_0] [i_1] [i_17 + 2] [i_8 - 1] [i_8])));

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        arr_60 [i_1] [i_1] [i_1] = ((0 ? 4158 : 41930));
                        var_29 = (min(var_29, var_0));
                        var_30 = (((((180 ? -2147483633 : 52))) && var_6));
                    }

                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        var_31 = (204 % var_11);
                        var_32 = var_5;
                        arr_63 [i_0] [i_1] [i_8 - 1] [i_1] [i_17 + 1] [2] [i_1] = -661956846042838968;
                    }
                    for (int i_20 = 4; i_20 < 20;i_20 += 1)
                    {
                        arr_67 [i_0] [1] [i_8 + 1] [i_1] [1] = 12969;
                        arr_68 [i_1] = (((((-3636599959006593456 ? 661956846042838968 : var_7))) ? -1682035856 : 23295));
                    }
                }
            }
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_33 = ((-(arr_33 [i_0] [i_1] [i_21] [i_22] [i_23])));
                            arr_76 [i_0] [i_1] [i_1] [1] [i_1] = ((var_3 ? 1 : var_4));
                        }
                    }
                }
                var_34 = (!var_4);
                var_35 = (var_3 % 67);

                for (int i_24 = 1; i_24 < 21;i_24 += 1)
                {
                    var_36 ^= (-2541916353963588996 == (47224 == 183));
                    arr_79 [i_0] [i_0] [i_1] [i_24] = ((18446744073709551615 | (arr_14 [i_24] [6] [i_24] [i_24] [i_24 - 1] [i_24] [i_1])));
                    var_37 = (2914134142343832891 || 7882103432360554550);
                }
                for (int i_25 = 0; i_25 < 23;i_25 += 1)
                {
                    var_38 = 0;
                    var_39 = 0;
                }
                for (int i_26 = 3; i_26 < 21;i_26 += 1)
                {

                    for (int i_27 = 0; i_27 < 0;i_27 += 1)
                    {
                        var_40 = var_9;
                        arr_88 [i_0] [i_1] [i_21] [i_1] = 1;
                        var_41 ^= (var_1 / var_8);
                    }
                    var_42 = (180100038383550515 % 1);
                }
                for (int i_28 = 3; i_28 < 20;i_28 += 1)
                {
                    arr_91 [i_0] [5] [8] [i_28] [i_1] [i_1] = 13449636881334195699;
                    var_43 = 1;
                    var_44 = ((1 % (arr_5 [i_0] [i_1] [i_21])));
                }
            }
        }
    }
    var_45 = var_4;
    var_46 = (-3008 >= var_7);
    #pragma endscop
}
