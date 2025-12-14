/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 17855476145106605985;
        var_17 ^= 96;
        var_18 = -12;
        var_19 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 = arr_6 [i_1] [i_1] [i_1];
                    arr_10 [i_3] [i_3] [i_3] = arr_5 [i_1] [i_1] [i_1];
                    var_21 = (-(18446744073709551613 + 0));
                }
            }
        }
        arr_11 [i_1] = (arr_8 [i_1] [2] [2] [i_1]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_24 [i_4] [i_5] [i_4] [i_4] = (243 ? (arr_12 [i_4]) : (arr_8 [i_4] [i_4] [i_5] [i_4]));
                            arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [10] |= (96 ? 1 : var_2);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_33 [i_4] = arr_9 [i_10] [i_5] [i_9] [i_9];
                            var_22 = var_5;
                            var_23 = (arr_22 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4]);
                            arr_34 [i_4] [i_5] [i_5] [0] [i_5] |= 2;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_24 |= (!var_9);
                        var_25 = var_9;
                        var_26 ^= 7;
                    }
                }
            }
            var_27 = arr_13 [i_5] [i_4];
            var_28 = (arr_35 [i_4] [i_5] [i_5] [i_5]);
        }

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_29 = (!1);
            arr_41 [i_4] [i_4] [i_4] = var_5;
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                var_30 = arr_6 [i_4] [i_4] [i_4];
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_31 ^= ((6072522149495064196 ? (~var_9) : var_6));
                            var_32 = arr_4 [i_4];
                            var_33 = (max(var_33, var_9));
                            var_34 ^= ((var_2 ? 1 : ((67092480 ? (arr_45 [1] [i_17] [i_16]) : 209))));
                        }
                    }
                }
                arr_53 [8] [8] |= 238;
                arr_54 [2] [i_16] |= (!var_0);
                var_35 = ((0 - (arr_48 [i_4] [i_4] [i_4] [i_4] [i_4])));
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 11;i_20 += 1)
                {
                    {
                        var_36 = (min(var_36, (((-((max(2, var_16))))))));
                        var_37 |= (!254);
                        arr_61 [i_20] [i_4] [i_4] [i_4] = 15;
                        var_38 = (max((arr_35 [i_4] [i_4] [i_4] [i_4]), 4294967281));
                        arr_62 [i_4] = -1;
                    }
                }
            }
            arr_63 [i_4] = -255;
            arr_64 [i_15] [i_4] [i_4] = (2725239827 ? 13835058055282163712 : 4294967287);
            var_39 = (arr_12 [i_4]);
        }
        var_40 = var_0;
    }
    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        arr_68 [i_21] = ((!((((arr_65 [i_21] [i_21]) ? 200 : (arr_65 [i_21] [i_21]))))));
        arr_69 [i_21] = (arr_67 [i_21]);
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                {
                    arr_76 [i_21] [i_23] [i_22] [i_21] = ((52 ? (((arr_72 [i_21] [i_21] [i_21] [i_22]) + (!17179869152))) : ((((((arr_67 [i_21]) ? (arr_71 [i_21] [i_21]) : (arr_65 [i_23] [i_22])))) ? var_15 : (arr_72 [i_21] [i_21] [i_21] [i_22])))));
                    var_41 = var_4;
                }
            }
        }
        var_42 = ((((max((~77), 1))) ? ((((min(1, (arr_74 [22])))))) : 1587687021770403221));
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 13;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 13;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 13;i_28 += 1)
                        {
                            {
                                var_43 = (min(var_43, (arr_38 [i_24] [10] [i_24] [i_24] [i_24])));
                                arr_91 [i_26] = 88591542554294897;
                                arr_92 [i_24] [i_24] [i_24] [i_28] [i_24] [i_28] [i_26] = ((!(arr_65 [i_24] [i_27])));
                                var_44 = (((!1) ? var_1 : (arr_5 [i_24] [i_25] [i_25])));
                                var_45 = (max(var_45, (arr_16 [i_24] [i_24] [4])));
                            }
                        }
                    }
                    var_46 = (max(var_46, (((((!(arr_50 [i_24] [1] [i_24] [i_24] [i_24] [i_24]))))))));
                    var_47 = (min(var_8, 4294967295));
                }
            }
        }
    }
    #pragma endscop
}
