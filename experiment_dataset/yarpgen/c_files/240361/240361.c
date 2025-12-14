/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 = (min((arr_6 [i_2]), 30279));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [10] = ((((min((!30261), var_7))) ? (((max(189, -30300)))) : ((128 & (min((arr_0 [i_3]), var_0))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_15 = ((((arr_9 [i_5 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]) ^ 1)));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    arr_22 [i_6] [i_4] [i_4] [i_0] = (((arr_6 [i_0 + 3]) ? (((arr_17 [1] [i_5] [i_4]) / (arr_15 [i_4] [i_4]))) : 1));
                    arr_23 [i_5] [13] [i_5 + 1] [i_4] = (arr_10 [i_0] [i_4] [i_5 - 2] [i_6] [i_6]);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [3] [i_4] [i_4] [i_0] = ((74 ? ((244 ? 0 : 1)) : -82));
                    var_16 = (max(var_16, ((min(((-(arr_20 [i_5 - 1] [i_5 - 3] [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 4]))), (arr_20 [i_5 + 1] [i_5 - 2] [i_0 + 4] [i_0 + 2] [i_0 + 3] [i_0 + 1]))))));
                    var_17 = ((~(((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_18 = 181;
                            var_19 = 127;
                        }
                    }
                }
                arr_32 [i_4] [i_0] [i_4] [i_4] = ((((((arr_4 [i_0 + 2]) / var_12))) ? (arr_4 [i_0 + 3]) : ((max((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2]))))));
            }
            for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_20 += (((arr_13 [i_0 - 1]) * ((max((arr_13 [i_0 - 2]), (arr_13 [i_0 + 3]))))));
                            var_21 = (((((22 / (arr_12 [i_4] [i_10] [i_4])))) ? (arr_12 [i_4] [i_0 - 1] [i_4]) : 246));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_22 = ((min(((219 ? 1 : (arr_30 [18] [18] [i_4] [i_10] [i_13] [i_14] [i_4]))), ((min((arr_36 [i_0] [i_0] [i_10] [i_4] [i_14]), 131))))));
                            arr_48 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0] &= (arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_14] [i_0]);
                            var_23 *= 211;
                        }
                    }
                }
                var_24 = (((-127 - 1) ? ((~(arr_5 [i_0 - 1] [i_10 - 2]))) : ((146 ? var_8 : (arr_5 [i_0 - 1] [i_10 - 2])))));
            }

            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_25 = (((-(arr_38 [i_0 - 2] [0] [i_0 + 1] [1] [0] [22]))));
                var_26 = (min(var_26, ((min((arr_37 [i_15] [i_4] [i_4] [i_0] [i_15]), (((-8420062474057843271 ? var_0 : (arr_37 [i_15] [i_4] [i_15] [i_4] [i_4])))))))));
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        {
                            var_27 = (arr_5 [i_0] [i_16 + 1]);
                            arr_57 [i_0] [i_0] [i_15] [i_4] [i_17] = (arr_45 [i_4] [i_4] [i_15] [i_15] [i_17 + 1]);
                            var_28 = (((~var_7) ? ((((((124 ? var_8 : 0))) ? var_0 : ((((arr_13 [i_0]) >= var_8)))))) : (max(((min(var_1, 75))), 652405806967335249))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
            {
                arr_60 [i_4] [i_4] = (74 != -6547044471329733736);
                var_29 = (((arr_56 [i_4] [i_0 + 2] [i_0 + 2] [i_4] [i_18]) % (arr_56 [3] [i_0 + 2] [i_18] [i_18] [i_18])));
                arr_61 [i_18] [i_4] [i_4] [7] = (((arr_31 [i_0] [11] [i_0] [1] [i_0] [i_4]) ? 8711416533641376898 : var_6));

                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    var_30 = (((arr_39 [i_0 + 2] [i_4] [22]) ? (arr_39 [i_0 + 2] [i_0 + 1] [i_18]) : (arr_39 [i_0 + 2] [i_4] [10])));
                    var_31 = ((1 ? (arr_30 [i_0] [i_4] [i_19 - 1] [i_19 - 1] [i_4] [i_4] [i_4]) : -10));
                }
                arr_64 [i_0] [i_4] [i_4] = (arr_51 [i_0] [i_0]);
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
            {
                var_32 = (min(((min(109, 0))), (8711416533641376898 - 69)));
                var_33 = (max(var_33, var_5));
                arr_68 [i_0] [i_4] [i_4] = ((69 % ((max(127, 1)))));
            }
            var_34 = (!1);
            var_35 = ((-(((13338 ? 102 : 36)))));
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {

                    for (int i_23 = 1; i_23 < 19;i_23 += 1)
                    {

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 23;i_24 += 1)
                        {
                            var_36 = (~var_12);
                            var_37 = ((1 & (arr_65 [i_22] [i_0 + 2] [i_0 + 2] [i_0 - 2])));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            var_38 = (arr_37 [i_22] [i_23 - 1] [i_22] [i_22] [i_22]);
                            var_39 = var_5;
                            var_40 = var_1;
                            var_41 = (((arr_73 [i_22] [i_23 + 3] [i_23] [i_25]) ? ((-6 ? 1 : 31)) : var_4));
                        }
                        arr_81 [i_0] [i_0] [i_0] [i_22] = (((((min(var_3, var_9)) >> (arr_62 [i_0] [i_0] [i_0] [i_23]))) <= (arr_1 [i_23] [i_23])));
                        var_42 = ((~(max(((-13346 ? 127 : 12348)), var_13))));
                    }
                    var_43 = (min(235, 18));
                }
            }
        }
        var_44 = (((((var_2 ? -var_8 : ((min(1, 1)))))) ? (max(2305843009213693952, (min(-14, var_7)))) : ((((!(var_5 / 22)))))));
    }
    for (int i_26 = 2; i_26 < 19;i_26 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_27 = 3; i_27 < 21;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 23;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        var_45 = (max((min((arr_67 [i_26 + 1] [i_26] [i_26] [i_26 + 3]), var_3)), (((var_10 ^ ((min((arr_53 [i_26] [i_26]), 30544))))))));
                        arr_91 [i_26] [i_27 - 1] [i_28] [i_26] = min((((-127 - 1) > var_0)), ((((((arr_24 [i_26] [i_27] [i_26]) + var_12))) || var_3)));
                    }
                }
            }
        }
        arr_92 [i_26] = (((22480 ? ((max(-13346, 13348)) : ((min(-32749, 0)))))));
    }
    /* vectorizable */
    for (int i_30 = 2; i_30 < 19;i_30 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_31 = 0; i_31 < 23;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                for (int i_33 = 1; i_33 < 1;i_33 += 1)
                {
                    {
                        var_46 = var_4;
                        var_47 = (arr_10 [i_30] [i_31] [i_30] [i_33] [i_32]);
                        var_48 = (max(var_48, (arr_19 [i_33 - 1] [16] [i_33] [i_33 - 1] [16] [0])));
                    }
                }
            }
        }
        arr_104 [i_30] |= (((arr_16 [i_30] [i_30] [i_30 + 4] [0]) + var_13));
        /* LoopNest 2 */
        for (int i_34 = 2; i_34 < 21;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 23;i_35 += 1)
            {
                {
                    var_49 = (((arr_2 [i_34 + 1]) ? (arr_83 [i_34] [i_30 + 1]) : (arr_83 [i_34] [i_30 + 4])));
                    var_50 = arr_49 [i_30] [i_34] [i_35];
                }
            }
        }
    }
    var_51 = (123 | 127);
    #pragma endscop
}
