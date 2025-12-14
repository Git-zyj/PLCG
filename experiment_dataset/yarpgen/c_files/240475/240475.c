/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1811175494;
        var_17 = (!var_2);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_2;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 = var_8;
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = 1095664081;
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_3 + 1] [i_3 + 1]) ? -107 : (((var_4 ? (arr_8 [i_0] [i_1] [i_1] [9]) : var_7)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_4] = (((arr_5 [i_0]) ? ((((arr_16 [i_4 + 1]) - var_8))) : var_16));
            var_19 -= ((65519 ? (var_11 & -1) : 6943));
            arr_19 [i_4] = var_3;
            var_20 = (max(var_20, (((var_6 ^ (arr_2 [i_4 + 1] [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = max(9223372036854775806, 1);
                            var_21 = var_16;
                        }
                    }
                }
            }
            arr_34 [i_0] [i_0] = ((11130 ? (((((11130 ^ (arr_20 [i_0])))) ? ((max(65192, var_14))) : ((max(var_5, -10))))) : (((!((var_11 > (arr_2 [i_0] [i_5]))))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_22 = arr_30 [i_9] [i_9] [i_9] [i_9] [11] [i_9] [i_9];
            arr_37 [i_0] [i_9] [i_0] = (min(-7256339465520609256, var_15));
            var_23 = ((58596 ? -58 : 57));
        }

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_24 -= arr_30 [i_10] [i_10] [i_0] [i_0] [i_0] [i_10] [i_0];
            var_25 = 6943;
        }
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            arr_44 [i_11] = (min(((var_4 ? (!var_7) : (((var_1 && (arr_42 [i_11] [i_11 - 3] [i_11])))))), (((min(-1, -1))))));
            arr_45 [i_0] &= (arr_25 [1] [i_11] [i_11 - 3] [i_11]);
            var_26 = (max(var_26, (((!((1 != (arr_4 [i_11 - 2] [i_11 - 1]))))))));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            arr_49 [i_12] [i_0] [i_0] = ((((((arr_25 [i_0] [i_0] [i_0] [i_12]) >> (((arr_25 [i_12] [i_0] [3] [i_0]) - 8425655046141070865))))) ? (((max(65519, var_8)))) : (min((((var_6 >> (65192 - 65171)))), ((var_5 ? var_4 : 11112))))));
            arr_50 [i_0] = var_7;
            var_27 = (min(var_27, ((((arr_26 [i_0] [i_0] [i_0] [i_0] [i_12]) ? ((var_10 ? (((arr_7 [i_12]) ? 0 : (arr_1 [i_0] [i_0]))) : (arr_38 [i_0] [0]))) : var_14)))));
            arr_51 [i_0] [i_12] = (min(var_5, (~var_0)));
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {

                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_64 [15] [i_14] [i_15] [i_16] [i_15] [i_14] = 1;
                                var_28 = ((+(max((arr_53 [i_13] [i_13 - 1]), var_9))));
                                arr_65 [12] [i_15] [i_15] [11] [i_17] = var_16;
                                var_29 &= ((3968 >= ((((arr_57 [i_15 + 1] [i_13 + 2] [i_15 - 2]) >= (arr_63 [i_13 - 1] [i_14] [i_16] [i_14] [i_16] [i_16]))))));
                                arr_66 [i_15] [i_17] = ((var_14 ^ ((-(-32767 - 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            {
                                var_30 |= ((((var_13 & (!5413))) % ((~(arr_62 [i_18])))));
                                var_31 &= ((!(arr_60 [i_18] [i_18] [i_18 - 2] [i_18])));
                            }
                        }
                    }
                }
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    var_32 &= ((((var_16 ? 5425 : var_4))) ? (((arr_57 [i_13] [i_13 + 2] [i_13 + 2]) - ((((arr_73 [i_13 + 2] [i_14] [i_20] [i_13]) != (arr_56 [i_13] [i_13] [2])))))) : (((!(arr_55 [i_13 + 1])))));

                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        arr_77 [i_21] [i_21] [i_21] [i_21] = (((((var_15 ? (-32767 - 1) : (arr_76 [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 + 1])))) ? ((((((arr_67 [i_13 - 1] [i_13]) ? var_14 : 2367285341))))) : (((arr_61 [0] [0] [i_20] [i_20] [i_20]) / (arr_53 [i_21] [i_14])))));
                        var_33 = (max((min((~-128597865), (arr_67 [i_13] [i_13 - 1]))), (((var_5 == var_7) ^ (var_11 - var_5)))));
                        var_34 = (max(var_34, 51221));
                    }
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_35 = 5408;
                        arr_81 [i_13] [i_13] [14] [i_22] = ((max((((var_12 != (arr_76 [i_13] [i_14] [i_20] [i_22])))), -var_10)));
                    }
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        var_36 ^= (!(!var_7));

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            arr_88 [i_24] [i_24] [i_23] [i_20] [i_14] [i_13] [i_13 + 1] = (((((var_13 ? -1 : var_8))) ^ ((var_4 ? var_11 : var_16))));
                            var_37 = (max(var_37, (((~(arr_72 [i_13 + 2] [i_13] [i_13 - 1] [i_13 + 2]))))));
                            var_38 = 255;
                        }
                    }

                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        var_39 ^= (var_9 && 22788);
                        var_40 = var_9;
                        var_41 = (max((((~(var_5 != 0)))), -4294967272));

                        for (int i_26 = 0; i_26 < 21;i_26 += 1) /* same iter space */
                        {
                            var_42 ^= (max(((-(var_15 + var_10))), (arr_89 [i_26] [i_26])));
                            var_43 = arr_78 [i_13 + 2] [i_14] [i_13 + 1] [i_13 + 2];
                            arr_95 [i_26] [1] [i_14] [i_20] [i_25] [1] = (max((min(16516, 18446744073709551607)), (arr_74 [i_13 - 1] [i_13] [i_13 - 1] [i_13])));
                        }
                        for (int i_27 = 0; i_27 < 21;i_27 += 1) /* same iter space */
                        {
                            var_44 *= (((((var_14 ? var_6 : var_9))) << (var_4 != var_15)));
                            var_45 = (max(var_45, (((~(var_3 + var_11))))));
                        }
                    }
                    var_46 = (max(var_46, 0));
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 21;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            {
                                arr_103 [i_29] [i_28] [i_28] [15] [i_28] = (arr_58 [i_28] [i_13] [i_13]);
                                var_47 = 7;
                            }
                        }
                    }
                }
                var_48 ^= ((max(((!(arr_58 [i_13] [i_13] [i_13]))), (var_12 && var_10))));
            }
        }
    }
    #pragma endscop
}
