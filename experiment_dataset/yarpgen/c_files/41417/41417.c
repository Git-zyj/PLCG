/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        var_11 = ((~((var_1 ? (arr_0 [i_0]) : 2972516857))));
        arr_4 [i_0] [i_0] = var_6;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = -80;
            var_13 = var_3;
            var_14 = (max(var_14, (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_15 = var_6;
                arr_11 [i_0] [i_1] [i_2] = (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
            }
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_16 = (arr_9 [i_0] [i_1] [i_3] [i_3 + 2]);
                var_17 = ((var_10 * (arr_14 [i_3 - 1] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 ^= ((1969301500 ? -80 : 212));
                            arr_19 [i_0] [i_5] [i_0] = var_8;
                            var_20 = 212;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_7] = (((((var_3 ? var_3 : -7514))) ? var_8 : var_6));
                        arr_28 [i_7] [i_3] [i_3] [i_1] [i_0] = ((var_4 ? var_10 : var_5));
                        var_21 = (min(var_21, (((2325665796 ? (arr_25 [i_1 - 1] [i_3] [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_6]) : var_1)))));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1 - 1] = var_5;
                        var_22 = 983040;
                        arr_34 [i_0] [i_0] [i_6] = (var_3 * var_9);
                    }
                    var_23 = var_3;
                    arr_35 [i_0] [i_0] [i_3 + 1] [i_1] = 1;
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_24 = (arr_15 [i_9] [i_3 - 1] [i_0] [i_1] [i_0]);
                    var_25 = (max(var_25, var_4));
                    var_26 = var_1;
                    arr_38 [i_0] [i_1 - 1] |= 1;
                    arr_39 [i_9] = ((((1 ? var_5 : 4294967275)) ^ 1969301499));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, (((((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_5))) ? var_9 : var_3)))));
                    var_28 += ((-(var_0 * 0)));
                }
                var_29 = (min(var_29, var_0));
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_30 = (max(var_30, var_4));
            var_31 ^= 1;
            arr_46 [i_0] [i_11] = (((arr_20 [i_0] [i_0] [i_11] [i_11]) ? (((arr_32 [i_11] [i_11] [i_11] [i_0] [i_11] [i_11] [i_11]) ? 31105 : var_1)) : 7508));
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_57 [i_0] [i_12] [i_0] [i_0] [i_15] [i_14] [i_12] = var_9;
                            var_32 += (((var_3 != 5398) ? (2325665786 < 2097152) : (160 * 2325665796)));
                        }
                    }
                }
            }
            var_33 += 3442596030992444670;
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 8;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 9;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    var_34 = 255;
                    var_35 = (min(var_35, ((85 ? 16148637 : 255))));
                    /* LoopNest 2 */
                    for (int i_19 = 4; i_19 < 9;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 8;i_20 += 1)
                        {
                            {
                                var_36 = ((!(arr_51 [i_16 + 1] [i_18] [i_18])));
                                var_37 = (min(var_37, ((min(var_9, (arr_49 [i_17] [i_19 - 1] [i_20 + 2]))))));
                                var_38 = (~var_9);
                                arr_73 [i_17 + 1] [i_17 - 1] [i_18] [i_19 + 1] [i_17] [i_18] [i_18] = ((85 * ((2558598345 ? var_10 : 1))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_21 = 1; i_21 < 15;i_21 += 1)
    {
        var_39 -= (max((((var_10 ? var_8 : 0))), var_1));
        var_40 = var_10;
        var_41 ^= arr_74 [i_21];

        for (int i_22 = 1; i_22 < 15;i_22 += 1)
        {
            arr_78 [i_22] = (((arr_77 [i_22] [i_22 - 1]) ? (((arr_77 [i_22] [i_22 + 2]) ? (arr_77 [i_22] [i_22 + 1]) : (arr_77 [i_22] [i_22 + 2]))) : -var_5));
            arr_79 [i_22] [i_22] = ((var_0 ? (((max(var_4, var_5)))) : (arr_76 [i_22] [i_22 + 1])));
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_42 = (max(var_42, var_3));
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 15;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 14;i_25 += 1)
                {
                    {
                        var_43 -= (arr_76 [10] [i_23]);
                        var_44 = (max(var_44, (2278029977 || 75)));
                        var_45 = var_8;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 2; i_26 < 9;i_26 += 1)
    {
        /* LoopNest 2 */
        for (int i_27 = 2; i_27 < 10;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 11;i_28 += 1)
            {
                {
                    arr_94 [i_26 + 1] [i_26 + 1] [i_28] [i_26 - 2] = 0;
                    var_46 = (min(var_46, 255));
                    var_47 = (arr_82 [i_27 + 1] [i_27 - 1] [i_27 + 1] [i_27 - 1]);

                    for (int i_29 = 0; i_29 < 11;i_29 += 1)
                    {
                        var_48 = (max(var_48, (((!(~29))))));

                        for (int i_30 = 0; i_30 < 11;i_30 += 1)
                        {
                            var_49 = (arr_88 [i_30] [i_26]);
                            arr_101 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] = ((var_9 << ((((var_0 ? (arr_32 [i_26 + 2] [i_26] [i_26] [i_26 + 1] [i_26] [i_26 - 1] [i_26]) : var_4)) - 157))));
                            var_50 = ((var_2 ^ (arr_85 [i_26 - 1] [i_26] [i_26 - 1] [i_26 - 2])));
                            arr_102 [i_28] [i_29] [i_30] = 7444;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 11;i_31 += 1)
        {
            for (int i_32 = 3; i_32 < 8;i_32 += 1)
            {
                {
                    var_51 = (!var_9);
                    arr_109 [i_26] [i_31] [i_31] = (((arr_100 [i_32 + 2]) ? (3322974027 && var_5) : ((var_9 << (((arr_15 [i_26] [i_26] [i_26] [i_26] [i_26]) + 131))))));
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 11;i_33 += 1)
                    {
                        for (int i_34 = 1; i_34 < 8;i_34 += 1)
                        {
                            {
                                var_52 = var_9;
                                arr_116 [i_34] [i_33] [i_32] [i_32] [i_31] [i_26] = (arr_29 [i_26] [i_26 - 2] [i_32] [i_34 + 1] [i_32 + 1]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_35 = 0; i_35 < 0;i_35 += 1)
        {
            var_53 = (min(var_53, ((((arr_9 [i_26] [i_26 + 1] [i_35 + 1] [i_35 + 1]) ? 2558598363 : var_7)))));
            arr_120 [i_26 - 2] [i_35] = (((arr_41 [i_35 + 1] [i_35] [i_35] [i_35] [i_35] [i_35 + 1]) >= (arr_41 [i_35 + 1] [i_35] [i_35 + 1] [i_35] [i_35 + 1] [i_35 + 1])));
        }
    }
    #pragma endscop
}
