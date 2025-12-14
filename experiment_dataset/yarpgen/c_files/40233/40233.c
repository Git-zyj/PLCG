/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4303310027696978058;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [18] [i_2] [i_0] = -41;
                                arr_17 [i_0] [14] [i_0] [i_0] [i_0] = (max((((var_9 ? var_9 : (arr_13 [i_3] [i_2] [i_0])))), -28));
                                var_17 &= (~-3);
                                arr_18 [16] [i_3] [16] [i_2] [16] [i_0] = 90712320792061880;
                            }
                        }
                    }
                    arr_19 [i_1] [i_0] [i_1] [i_0] = (max(var_10, ((+(min((arr_7 [i_0]), 1))))));
                    arr_20 [i_0] [i_1] [i_2] [i_2] = (!var_13);
                }
            }
        }
        arr_21 [4] = ((~(max(var_9, 1))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = (max((arr_13 [i_0] [i_5] [i_6]), 1));
                    var_18 = (min((arr_23 [i_0]), ((((var_2 ? var_6 : var_10)) % (arr_26 [i_6] [i_0])))));
                    arr_29 [i_0] [i_0] [i_6] = ((-(((!(var_5 | var_5))))));
                }
            }
        }
        arr_30 [i_0] [i_0] = (min((arr_4 [i_0] [i_0]), 1));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_39 [i_10] [i_10] [19] [i_8 + 2] [19] [i_7] = 28;
                        arr_40 [i_7] [i_7] [i_9] [i_10] = -var_4;
                        arr_41 [i_10] [i_8] [i_7] = (!81);

                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            var_19 = (~var_4);
                            arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = 137438953470;
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_20 *= 1;
                            arr_47 [i_7] [i_8] [i_7] [i_10] = ((167 + (~1)));
                        }
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            var_21 = (var_6 || 1);
                            arr_51 [i_7] [i_7 - 2] [18] [18] [i_7] &= var_12;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_22 -= (arr_49 [i_7] [i_7] [i_7] [i_7] [i_7]);
                        arr_58 [i_16] [i_7] [i_16] [i_7] [i_7] = (arr_48 [5] [5] [i_15] [i_15] [i_16]);

                        for (int i_17 = 3; i_17 < 18;i_17 += 1)
                        {
                            arr_62 [5] [i_7] [1] [5] [i_16] [i_17] [i_17] = ((~(((!(arr_55 [i_7] [i_14] [2] [i_17]))))));
                            var_23 = ((~(arr_22 [i_7] [i_14] [i_15 + 3])));
                        }
                        for (int i_18 = 4; i_18 < 17;i_18 += 1)
                        {
                            var_24 = (max(var_24, ((((77 ? 17 : 5586062144148072939))))));
                            arr_65 [i_18] [i_7] [i_16] [i_16] [i_7] [i_7] = ((!(arr_42 [i_15 - 1] [i_18 - 2] [i_7 - 1])));
                            arr_66 [3] [i_16] [i_16] [18] [i_16] = (-32737 <= var_3);
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            var_25 *= (!var_1);
                            arr_70 [i_19] [i_16] [i_15 - 1] [i_16] [i_7] = var_5;
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                        {
                            arr_74 [i_16] [i_16] [i_14] [i_15] [i_14] [i_16] = var_7;
                            var_26 = -var_12;
                            var_27 = (((((1 ? 6114316451542675210 : 17))) ? (!80) : (!0)));
                        }
                        arr_75 [i_7 - 2] [i_14] [i_15] [i_16] = 44621;
                        arr_76 [i_16] = ((!(var_14 < var_12)));
                    }
                    for (int i_21 = 4; i_21 < 17;i_21 += 1)
                    {
                        arr_80 [i_7] [i_7] [i_7] [i_7] [i_15] [i_21] |= (arr_5 [i_7]);
                        arr_81 [i_21] [i_15] [i_14] [i_7] = (((arr_48 [i_7] [i_7] [i_15] [i_21] [i_15]) ? (~var_13) : 3474277707));
                        var_28 = (!var_7);
                        arr_82 [i_7] [i_7] [i_14] [i_15 - 1] [i_7] = (((-9223372036854775807 - 1) < (arr_11 [i_7 + 1] [i_15 + 3] [i_21] [i_21 - 4] [i_21 - 1])));
                        arr_83 [i_21] [i_15] [i_15] [8] [i_7] = 15;
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        for (int i_23 = 1; i_23 < 17;i_23 += 1)
                        {
                            {
                                arr_89 [i_22] [i_22] [i_22] [i_22] [i_22] = (1 & 1);
                                arr_90 [i_7] [i_7] [i_7] [i_7] [i_22] [i_7] [i_7] = ((~(~-12)));
                                var_29 = (((arr_27 [i_23 + 1] [i_23 + 1]) ? -122 : var_1));
                                var_30 = -1095110739;
                                var_31 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_24 = 2; i_24 < 19;i_24 += 1) /* same iter space */
    {
        var_32 = (+(max((arr_0 [i_24 - 1] [i_24 + 1]), var_14)));
        var_33 = (max(15, ((((((max(var_11, (arr_5 [i_24]))))) < (min(var_9, -1)))))));
    }
    for (int i_25 = 0; i_25 < 10;i_25 += 1)
    {
        /* LoopNest 2 */
        for (int i_26 = 2; i_26 < 9;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 9;i_27 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 10;i_29 += 1)
                        {
                            {
                                var_34 = (!var_3);
                                var_35 = var_13;
                                arr_110 [i_25] [i_26 - 2] [i_28] [i_28] [i_29] = (arr_34 [i_28]);
                                arr_111 [i_25] [i_25] [i_25] [i_25] [i_25] [2] [i_28] = (1 / -59);
                                var_36 = var_1;
                            }
                        }
                    }
                    arr_112 [i_25] [i_25] [i_26] [i_27] = var_4;
                }
            }
        }
        arr_113 [i_25] = ((arr_77 [i_25] [i_25] [i_25] [i_25] [1] [i_25]) != (arr_92 [i_25]));
    }
    #pragma endscop
}
