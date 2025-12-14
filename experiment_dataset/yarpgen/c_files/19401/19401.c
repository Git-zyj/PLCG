/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(((min(-5, 1019108287))), 4094432543);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_1 [5]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_13 = (min(var_13, (((var_9 ? (~1) : var_4)))));
                            var_14 = ((-(arr_8 [i_3] [i_3] [i_3] [i_3 - 2] [i_3 - 2])));
                            arr_14 [i_2] [i_2] [i_0 - 2] [i_2] [i_0 - 1] = -var_2;
                            var_15 *= var_1;
                            arr_15 [i_0 - 1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((((-(arr_1 [i_0])))) ? -45575 : -119);
                        }
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            var_16 ^= var_5;
                            var_17 = (min(var_17, 1));
                            arr_18 [i_2] = 1;
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_21 [i_2] = (((((var_1 ? -98 : -24355))) ? 45920106 : 1));
                            var_18 = (~-81);
                        }
                        var_19 = var_4;
                    }
                }
            }
        }
        var_20 = -2147483635;
    }
    for (int i_7 = 2; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_21 = (min((((1 % ((47971 ? var_10 : var_7))))), (-32242 | 1724136170)));
        arr_24 [i_7] = ((((((min(var_10, (arr_3 [21] [i_7])))) ? (((max((arr_8 [i_7] [i_7 - 2] [i_7] [i_7] [i_7]), (arr_12 [0] [i_7] [i_7] [i_7] [0] [0]))))) : 1944586755)) >= 1));

        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            var_22 ^= ((-1015 ? ((((-(arr_9 [14] [i_7 + 1] [i_7 + 1] [i_7] [12]))) - var_7)) : (((var_0 >= 1) ^ (0 && 53)))));
            arr_27 [i_7] [i_8] = ((((max(1, (var_10 && 113)))) / var_7));
            var_23 -= (((((68 % 10999) | (max(var_9, var_8)))) != (((2 ? (1 - var_1) : (arr_20 [i_8] [i_8] [16] [i_7] [i_7 - 1]))))));
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_38 [i_11 - 3] [i_8] [i_9 + 3] [i_8] [i_7] = (max(((13 ? 23247 : 7)), -99));
                            arr_39 [i_11] [1] [i_10 + 1] [i_9] [1] [i_7] &= ((~((((max(15145, var_8))) ? var_9 : ((max(118, var_10)))))));
                        }
                    }
                }
            }
            arr_40 [i_8] [i_8] = ((~(0 && 164)));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {
            arr_45 [i_7] [i_12] = (min(32640, -553725664));
            var_24 = var_0;

            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                arr_49 [i_7] [i_7] [i_7 + 1] = -0;
                arr_50 [i_13] [i_13] [i_12] [i_7] = 2737325169;
                var_25 += var_5;
            }
            for (int i_14 = 1; i_14 < 24;i_14 += 1)
            {
                var_26 = ((14193 ? 142 : 1526512296));
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 24;i_16 += 1)
                    {
                        {
                            var_27 -= ((-70 ? ((0 ? (-4241 <= -31549) : ((var_0 ? var_1 : var_4)))) : (((var_8 || (arr_20 [i_7] [i_7] [10] [6] [i_16 + 1]))))));
                            var_28 = (((-127 - 1) ? -1 : 73));
                            var_29 = (((((~((min(0, 236)))))) ? ((((max(1, (arr_42 [i_12] [i_14 - 1] [i_16 + 1])))) ^ (~1))) : (-1 - var_3)));
                            var_30 = max((arr_26 [10] [i_7 + 1] [i_7 + 1]), 1);
                        }
                    }
                }
                var_31 &= 1;
                var_32 ^= (((min((((0 ? -42 : -9374))), var_8)) / var_0));
            }
            arr_58 [i_12] |= var_4;
            var_33 = (min((2560 % 1549543955), ((1356100675 ? ((8984 ? 1933523326 : (arr_30 [18] [6] [i_7]))) : (arr_26 [i_12] [i_7 - 1] [i_7 - 1])))));
        }
    }
    for (int i_17 = 2; i_17 < 24;i_17 += 1) /* same iter space */
    {
        arr_62 [i_17] = 50;
        var_34 = ((~((min(-125, (arr_52 [i_17] [i_17 - 1] [6]))))));
        var_35 = (-19 && 2);
    }
    for (int i_18 = 2; i_18 < 24;i_18 += 1) /* same iter space */
    {
        arr_65 [i_18 - 2] [i_18] = ((-12864 ? ((~(max(21989, var_2)))) : 30));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                {
                    arr_70 [1] [i_18] [i_20] = 19976;
                    var_36 += (((~var_6) * ((((((var_7 ? 35411 : var_2))) ? 0 : ((29434 << (-27164 + 27180))))))));
                    arr_71 [i_18] [i_19] [i_19] [i_20] = (arr_0 [i_18]);
                    arr_72 [i_18] [i_18 - 2] [i_18 - 2] [i_18] = (-22706 / -1158383256);
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_78 [i_18] [i_21 - 1] [i_20] [i_20] [i_19] [i_18] [i_18] = -3;
                                var_37 = (((max((arr_56 [i_18 - 1] [i_18 - 1] [i_21] [i_21 - 1] [i_21 - 1] [i_18]), (arr_56 [1] [i_18 - 1] [i_18 - 2] [i_19] [i_21 - 1] [i_18]))) ? ((-(arr_56 [i_18 - 1] [i_18 - 1] [i_18 - 2] [i_21] [i_21 - 1] [i_18]))) : (~var_1)));
                                arr_79 [i_18 + 1] [i_19] [0] [i_18] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
