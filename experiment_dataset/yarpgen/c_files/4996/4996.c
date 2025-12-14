/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = ((max(48408, (arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = 1;
                                var_22 += ((-((((1 ? 124 : -74))))));
                                var_23 = (max(((var_2 ? 1 : (((arr_7 [i_0] [i_2 + 2]) - 1)))), (((max(1, (arr_8 [i_3] [i_1] [i_1])))))));
                                var_24 = (min(var_24, (((2 << (((arr_14 [i_0 + 1] [i_1] [i_2] [i_2 + 1] [i_2] [i_1] [i_0 + 1]) - 85)))))));
                                var_25 += -248;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_8));
    var_27 = (1 % 1);

    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_28 = ((64 ? 1 : (arr_24 [i_5] [i_6] [i_7])));

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = ((1 ? 1 : var_2));
                            var_30 = (-8859816362128390862 && var_13);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_31 &= (((arr_17 [i_6 + 3]) % (arr_17 [i_6 - 1])));
                            var_32 += ((~((var_18 << (((arr_12 [i_10]) - 3852636712116990636))))));
                            var_33 = (((arr_13 [i_6]) & (((arr_20 [i_5 + 1]) ? var_15 : var_11))));
                            var_34 = ((var_12 >= (!1235986234)));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_35 = 1;
                            var_36 += var_9;
                            var_37 = var_11;
                        }
                        var_38 = (((arr_8 [i_6 + 2] [i_6] [i_6]) ? (arr_33 [i_5] [i_5] [i_6] [i_5 - 2] [i_6 + 1]) : var_0));
                    }

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        var_39 |= 2;

                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            var_40 = ((var_18 - (arr_19 [i_12 + 1])));
                            var_41 += var_12;
                            var_42 &= (((9223372036854775807 ? (arr_28 [i_5] [i_6] [i_7] [i_7]) : 3206781879)) / (arr_3 [i_5 + 2]));
                            var_43 = (9199628964903301495 + 13105591394770708911);
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_44 |= (!1731379398);
                            var_45 ^= ((26009 >> (15619 - 15605)));
                        }
                        var_46 = (1 - 32);
                        var_47 = ((((((arr_10 [i_5] [i_5] [i_5]) ? (arr_25 [i_5] [i_6] [i_6] [i_12]) : (arr_5 [i_5 + 2])))) & (arr_17 [i_5])));
                    }
                    var_48 -= (arr_33 [i_5] [i_5] [i_7] [i_6] [i_7]);
                }
            }
        }
        var_49 = (+(((arr_3 [i_5]) ? (arr_7 [12] [i_5 + 3]) : var_11)));
        var_50 = -1;
        var_51 = -95;
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_52 -= 15505457802481589706;
        var_53 = (min(var_53, ((((((((max(1235986234, 46663))) != var_6))) * 0)))));

        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_54 = (max(var_54, (((-(((-46 + 2147483647) << ((((((-(arr_4 [8]))) + 30926)) - 20)))))))));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_55 = 8;
                var_56 = (max(var_56, (arr_7 [i_17] [i_17])));
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_57 -= (!224);

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_58 = (max(1, (arr_46 [i_15] [i_16])));
                    var_59 = (arr_14 [i_15] [i_15] [i_16] [i_18] [i_18] [i_19] [i_19]);
                }
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    var_60 = ((!((max(226, 8128)))));

                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        var_61 = var_6;
                        var_62 += (max(((19 + (arr_1 [i_15] [i_20]))), 5825));
                        var_63 -= (((((((~(arr_46 [i_20] [i_20])))) ? (max((arr_2 [i_20]), (arr_62 [i_15] [i_16] [i_16] [i_18] [i_20] [i_21]))) : var_0)) % (arr_3 [i_15])));
                    }
                    var_64 = (arr_7 [i_15] [i_16]);
                }
                var_65 = 4;
            }
            /* vectorizable */
            for (int i_22 = 2; i_22 < 14;i_22 += 1)
            {
                var_66 += var_17;
                var_67 -= (((arr_14 [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22]) >= 1));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        {
                            var_68 = ((-98 % (~var_13)));
                            var_69 = ((-(arr_54 [i_22 - 2])));
                            var_70 = (!var_18);
                        }
                    }
                }
            }
            var_71 = (((arr_54 [i_16]) * (max(var_2, -var_14))));
            var_72 = (max(((((max((arr_51 [i_15] [i_15] [i_16] [i_16]), (arr_14 [i_15] [i_15] [i_16] [i_16] [i_15] [i_16] [i_16])))) ? 42 : -220)), (max(((max((arr_67 [i_15] [i_15]), 228))), ((1 << (((arr_12 [i_15]) - 3852636712116990649))))))));
            var_73 = (arr_50 [i_15]);
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
        {
            var_74 = 28672;
            var_75 = ((arr_55 [i_15] [i_15] [i_15]) || (arr_55 [i_15] [i_15] [i_15]));

            for (int i_26 = 3; i_26 < 13;i_26 += 1)
            {
                var_76 *= ((1 % (arr_8 [i_15] [i_25] [i_26])));
                var_77 = (max(var_77, -2));
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1)
            {
                var_78 = (arr_6 [i_15] [i_15]);
                var_79 += (((arr_66 [i_15] [i_27]) * ((-49 - (arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 15;i_28 += 1)
                {
                    for (int i_29 = 1; i_29 < 14;i_29 += 1)
                    {
                        {
                            var_80 = ((((4294967295 ? var_9 : (arr_50 [i_15]))) != 13529));
                            var_81 = (arr_48 [i_27] [i_29 + 1] [i_27]);
                            var_82 = var_18;
                        }
                    }
                }
                var_83 = ((-(arr_65 [i_15] [i_25] [i_25] [i_25] [i_25] [i_27] [i_25])));
            }
            /* LoopNest 3 */
            for (int i_30 = 0; i_30 < 15;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 15;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        {
                            var_84 = ((9223372036854775807 & (arr_54 [i_15])));
                            var_85 = (max(var_85, var_8));
                        }
                    }
                }
            }
        }
        for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
        {
            var_86 = (max(var_86, ((((((((max((arr_46 [4] [i_33]), 58398))) ? (max((arr_3 [i_15]), (arr_16 [i_15] [i_15]))) : var_11))) ? (17 - 2) : (((max(var_1, (max(30, var_12)))))))))));
            var_87 = (max((((-((var_5 ? 3413 : -2023981157))))), 12234595238360707903));
        }
        var_88 = 4294967285;
    }
    #pragma endscop
}
