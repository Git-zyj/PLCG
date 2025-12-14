/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_1, var_0));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (1 || 1);
        var_12 = (max(var_12, ((min((arr_0 [i_0]), (arr_1 [i_0]))))));
        var_13 = var_2;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = ((((((arr_5 [i_1]) - (arr_5 [i_1])))) ? 160 : ((max((arr_5 [i_1]), (arr_5 [i_1]))))));
        var_15 = var_1;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_16 = ((((max((arr_12 [i_2] [i_3]), (arr_12 [i_2] [i_2])))) * ((92 << (92 - 85)))));
            arr_14 [i_2] [i_3] = (((arr_7 [i_2] [i_3]) > (((65535 ? 1 : 4294967288)))));
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_20 [i_2] [i_4] [8] = ((639506102 ? (arr_15 [i_4 - 1] [i_4 - 3]) : (arr_12 [i_4 + 3] [i_4 + 3])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_17 = ((var_6 <= (arr_18 [i_4 + 3])));
                            var_18 = (arr_23 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 4]);
                        }
                    }
                }
                arr_26 [i_2] = ((var_10 + ((((arr_5 [i_2]) > var_5)))));
            }

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_19 = (~70);
                arr_30 [i_2] [i_4 - 2] [i_8] [i_8] = 14;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((arr_1 [i_2]) && (((-(max(var_3, 11287717951010801428))))))))));
                            var_21 = ((((~(arr_28 [i_2])))));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_22 = var_10;
                arr_40 [i_2] [i_4] [i_2] [i_2] = var_6;
            }
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            arr_45 [i_2] = ((3073831743 || ((((arr_7 [i_2] [i_12]) - (arr_7 [i_2] [i_12]))))));
            var_23 = ((((var_8 ? var_4 : var_0))));

            /* vectorizable */
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                var_24 = ((var_4 ? var_5 : -2143854150));
                var_25 = arr_12 [i_12] [i_12];
                arr_48 [10] [i_2] [i_2] [10] = var_3;
                var_26 = (((arr_25 [i_13 - 2] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]) ^ (arr_7 [i_2] [i_13])));
            }
        }
        arr_49 [6] [i_2] |= arr_12 [i_2] [i_2];
        var_27 ^= (arr_4 [i_2]);
        arr_50 [i_2] = 11287717951010801428;
        var_28 = (var_1 < 113848470);
    }
    for (int i_14 = 1; i_14 < 22;i_14 += 1)
    {
        var_29 = (((arr_53 [i_14]) ^ (((arr_53 [i_14]) ^ (arr_53 [i_14])))));
        var_30 = (arr_51 [i_14]);
        arr_55 [i_14] = (((((var_7 ? var_7 : (arr_52 [i_14] [i_14 + 1]))))) ? ((max(2219209987582667318, 1442853857))) : ((((var_7 >= (arr_54 [i_14] [i_14]))))));
        var_31 = 6838160434870988680;
    }
    var_32 = ((~(var_1 | var_5)));

    /* vectorizable */
    for (int i_15 = 1; i_15 < 19;i_15 += 1)
    {
        var_33 = arr_54 [i_15 - 1] [i_15 - 1];
        var_34 &= var_0;
        arr_59 [i_15] [i_15 - 1] = (((var_0 ? 4181118850 : (arr_54 [i_15 - 1] [4]))));
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_35 = (~(((-2004516432959353252 > (arr_69 [i_15] [i_15] [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1])))));
                                arr_73 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_16] [i_15] = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            {
                                var_36 = (arr_57 [i_16 - 1] [i_15 + 1]);
                                arr_78 [i_21] [i_15] [i_20] [i_17] [5] [i_15] [i_15] = (arr_60 [i_15] [8] [i_15 + 1]);
                            }
                        }
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        arr_83 [i_15] [i_16 + 1] [i_15] [i_22] [i_15] [i_15] = var_7;
                        var_37 = (arr_65 [16]);
                        var_38 = 98;
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 25;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 24;i_25 += 1)
            {
                {
                    arr_92 [i_23] [i_24] [i_25] = ((6838160434870988675 >> (var_6 < 1)));
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 25;i_27 += 1)
                        {
                            {
                                var_39 = (max(((((var_4 ? var_7 : (arr_89 [i_23] [i_24]))) - (arr_98 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))), var_6));
                                var_40 = (max(((max(-817025313, -61))), 12163001959340958448));
                                arr_101 [i_23] = (max(1072079929, 12163001959340958448));
                                var_41 = ((max(1221135567, (((~(arr_97 [11] [i_24] [i_25 + 1] [11] [i_27])))))));
                            }
                        }
                    }
                }
            }
        }
        var_42 = (max(2904302269, (arr_99 [1] [i_23] [10] [10] [i_23])));
        var_43 = (arr_97 [i_23] [1] [1] [i_23] [i_23]);
        arr_102 [i_23] = ((max(var_4, (arr_85 [18]))));
        var_44 = (min(var_44, var_1));
    }
    var_45 += var_5;
    #pragma endscop
}
