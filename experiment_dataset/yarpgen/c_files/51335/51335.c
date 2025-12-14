/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((max(var_5, 4196793939)) < (((max(var_8, 89))))))) >= ((((7 > var_11) != var_15))))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((((var_11 ? (min(18446744073709551609, (arr_4 [i_0] [i_0] [i_0]))) : 18446744073709551609)) <= ((255 ? 248 : 18446744073709551615)))))));
                        var_19 = ((18446744073709551609 ? ((((18446744073709551609 ? 255 : 4194303)) >> (3001458717105824520 - 3001458717105824506))) : (arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_20 += max(((~(arr_8 [i_4] [i_4] [i_4] [6] [i_4]))), (((((-82 ? 1 : var_7))) ? var_6 : (arr_7 [i_4] [i_4] [i_4] [i_5] [i_4] [3]))));
                var_21 = (min(var_21, (((!((min(var_0, var_11))))))));

                /* vectorizable */
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7] [i_6] [i_7] [i_8] [i_7] = (arr_3 [9] [i_7 - 2] [i_5]);
                                var_22 = (((!18446744073709551609) || (!9)));
                                var_23 = 217;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_24 = ((((((~(arr_9 [i_4]))) + 9223372036854775807)) >> (var_9 / 4194293)));

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_25 = (max(var_25, var_5));
                            var_26 -= 2;
                        }
                        var_27 += (arr_1 [i_4]);
                        arr_28 [i_9] [i_6] [i_5] [i_4] = -927352810;
                        arr_29 [i_4] = (((((15445285356603727096 ? var_3 : 50262))) == (arr_10 [i_6 - 3])));
                    }
                    for (int i_11 = 3; i_11 < 9;i_11 += 1)
                    {
                        arr_33 [i_4] [i_11] [i_4] [i_4] = (((arr_18 [i_6 + 1]) ? (var_13 >= 3014609525) : var_16));
                        arr_34 [i_11] [10] [i_11] = 29;
                        arr_35 [i_11] [i_5] [i_6] [i_6] = -18446744073709551613;
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_41 [i_4] [i_13] [i_6 - 1] [1] [i_13] [i_6] = ((-(~var_14)));
                                var_28 = (min(var_28, (1426575146 ^ 9)));
                                var_29 = -12998;
                                var_30 = ((var_7 + (~var_15)));
                            }
                        }
                    }
                    var_31 &= (((((5975559147715362508 ? 1268763810 : 5728569087906880986))) ? var_14 : var_7));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_32 = (min(var_32, (~3803)));
                                var_33 = (arr_27 [i_4] [i_4] [i_14] [i_15] [i_16]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_34 = (((arr_17 [1] [i_14] [1] [i_14] [i_5] [i_4]) - (arr_17 [i_4] [i_4] [i_17] [i_14] [i_5] [i_4])));
                                var_35 ^= 1501;
                                var_36 = (min(var_36, (((195 ? 217 : ((6144 ? 1756651042 : 4294967280)))))));
                                var_37 = -13846;
                            }
                        }
                    }
                    arr_59 [i_4] [i_4] = ((-2128001862 ? var_4 : (arr_3 [i_4] [i_4] [i_4])));
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 4; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 8;i_21 += 1)
                        {
                            {
                                var_38 = var_8;
                                arr_68 [i_4] [i_4] [0] [i_20] [1] = (((var_8 ? var_1 : (arr_42 [i_21]))));
                                var_39 = ((var_4 ^ (arr_32 [i_20 - 2] [i_21 - 2] [i_20 - 2])));
                            }
                        }
                    }
                    var_40 = (((((1 ? -4194299 : -22099))) ? var_4 : -82));
                }
                arr_69 [6] [i_5] [i_5] |= var_6;
                var_41 = (~3817);
            }
        }
    }
    var_42 = (min(var_42, ((((((var_10 ? var_4 : (992720811 & var_9)))) ? ((((var_10 < var_16) ? var_5 : (!var_3)))) : 3369091072)))));
    #pragma endscop
}
