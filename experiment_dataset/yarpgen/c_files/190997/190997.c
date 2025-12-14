/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = (((5963548690071578923 - var_9) ? var_2 : ((((max(var_9, -13)) < (((((arr_9 [i_0 - 2] [i_0 - 2] [0] [i_0 - 2] [i_1] [i_0 - 2]) + 9223372036854775807)) << (var_16 - 240))))))));
                        var_18 += (((((var_12 ? (arr_9 [i_3] [i_1] [12] [i_3 - 1] [i_1] [i_0]) : 127))) ? (((((var_15 | (arr_4 [i_0] [i_0] [i_0])))) ? (~var_10) : (var_17 | var_13))) : var_8));
                        arr_11 [i_2] [i_2] [i_1] [i_0] = ((((max(var_7, var_6)) >= (((max(var_5, (arr_6 [12] [i_1] [i_1]))))))));
                        var_19 -= (max(var_1, var_5));
                        var_20 -= (((var_4 ? (arr_6 [i_3 - 1] [i_3] [i_1]) : var_2)));
                    }
                }
            }
        }
        var_21 += (arr_0 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_22 = (max(var_22, (((max(var_6, (arr_3 [i_4] [i_4])))))));

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_23 *= (arr_1 [i_4]);
            arr_16 [i_5 + 1] = (max(var_5, (((var_10 > 32) ^ (232 - 1057436503)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_4] [i_6] [i_4] = 8942342517360879678;
            arr_20 [i_4] [9] |= ((var_2 ? ((min(72, var_1))) : (!var_7)));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        var_24 ^= ((var_9 << (var_16 - 238)));
                        arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (max(2097120, ((((((min(var_9, var_0)))) >= (var_6 - 1))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_34 [i_4] [i_7] [i_7] [i_10] [i_4] = var_13;
                        var_25 = ((-(max((((1419952789859134682 ? var_0 : (arr_15 [i_4] [i_4] [i_4])))), (max((arr_25 [i_4]), var_8))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_26 = (arr_4 [i_4] [i_7] [i_12]);
                var_27 &= (56 * -9);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_28 = var_11;
                            var_29 = 97;
                            var_30 = (min(var_30, 0));
                        }
                    }
                }
                arr_43 [i_7] &= ((((var_9 >= (arr_15 [i_12] [16] [i_12]))) ? 2145386496 : 31));
                arr_44 [i_7] [i_12] = (~3237530815);
            }

            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 16;i_17 += 1)
                    {
                        {
                            arr_51 [12] [i_16] = (((arr_30 [i_7] [i_15] [i_7] [i_17]) ^ (((var_8 | 1419952789859134682) % ((max((arr_4 [17] [i_7] [i_15]), (arr_48 [i_15]))))))));
                            var_31 = (min(var_31, (arr_5 [1] [i_7] [i_17 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_32 = (((max(-20966, 4032))) ? (max((((-(arr_52 [i_7])))), (min(2149580802, 239)))) : ((((1560797449 ? var_3 : var_15)))));
                            var_33 = -6320110791976304719;
                            var_34 ^= 1057436499;
                            var_35 ^= -30;
                            arr_58 [i_4] [i_7] [i_4] [5] [5] [i_18] [i_19] &= ((((((arr_0 [i_4] [i_15]) ? 0 : var_8))) ^ (((arr_0 [i_4] [i_4]) ? 4454754449892052124 : var_16))));
                        }
                    }
                }
                var_36 ^= 1074519681824559135;
                /* LoopNest 2 */
                for (int i_20 = 4; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 4; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_37 -= 193;
                            var_38 = (min((~var_9), 29));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 17;i_24 += 1)
                    {
                        {
                            var_39 = ((var_6 ? var_8 : 17026791283850416943));
                            var_40 = (min(var_40, -21580));
                            var_41 ^= ((+(((arr_71 [i_7]) ^ (arr_4 [i_4] [i_7] [i_22])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 17;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        {
                            var_42 = (arr_17 [i_7] [i_22] [i_25]);
                            var_43 ^= (((!1) ? -4509860877580724357 : var_8));
                        }
                    }
                }
            }
            for (int i_27 = 0; i_27 < 17;i_27 += 1)
            {
                arr_81 [i_4] [i_4] [i_4] [i_4] = 53;
                var_44 ^= ((-((((~14) && var_4)))));
            }
            arr_82 [i_4] = (min(-var_2, (((max(var_4, var_3)) + -var_12))));
        }
        for (int i_28 = 0; i_28 < 17;i_28 += 1)
        {

            for (int i_29 = 1; i_29 < 16;i_29 += 1)
            {
                var_45 = (max(var_45, ((((max(((var_8 ? -5815376295827708408 : 215)), 25475)) / (((max((var_9 > var_17), 1)))))))));
                arr_87 [i_4] [i_28] = 126;
                arr_88 [i_4] = (max((128 | 6500822375483479037), ((min((arr_72 [i_29] [i_28] [i_28] [i_4]), 32767)))));
                arr_89 [i_4] = (min((((((var_1 - (arr_50 [i_4] [i_28] [i_29] [i_28] [i_29] [i_28] [i_4])))) == -540985925355247169)), ((!(((var_17 ? 122 : 128)))))));
            }
            arr_90 [i_4] [i_4] [i_28] = (~0);
            arr_91 [i_28] [i_4] [i_4] = max((arr_66 [i_4]), 3405546032);
            var_46 += (~var_14);
        }
    }
    var_47 ^= (max(var_7, (((!(330562471301642778 || var_14))))));
    #pragma endscop
}
