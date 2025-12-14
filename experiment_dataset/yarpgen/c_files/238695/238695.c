/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((var_4 ? var_9 : var_15)))));
            var_21 = ((var_2 ? var_3 : var_8));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = ((var_10 ? (-9223372036854775807 - 1) : var_9));
                    var_23 = var_16;

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_24 = ((var_17 ? (var_3 / 543347180) : var_18));
                        arr_17 [i_0] [i_3] [i_3] [i_3] [i_5] = var_8;
                        var_25 += (~var_4);
                        var_26 = (min(var_26, (((var_5 >> (var_15 - 1073053155))))));
                        arr_18 [i_0] [i_5 - 2] [i_3] [i_4] [i_5] = ((var_11 >> (var_3 + 75)));
                    }
                    arr_19 [i_3] = 1;
                    var_27 = (((var_1 ? var_12 : var_9)));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_28 += (var_8 / var_11);
                    arr_24 [21] [i_3] [i_3] = -2262833196;

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_29 = (~var_3);
                        arr_29 [i_0] [i_7] [i_3] [i_6] [i_6] [i_3] [i_3] = 44169;
                        var_30 = (var_12 != var_16);
                        var_31 = var_10;
                        arr_30 [i_2] [i_3] = ((var_15 ? var_5 : var_15));
                    }

                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_32 *= var_9;
                        var_33 = (8231426808823177992 ? -928807763 : var_3);
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_3] = -var_0;
                        var_34 += (-6 % 21358);
                        var_35 = var_10;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_36 = (!var_10);
                        var_37 = ((-(6279706946638559598 % 1)));
                        var_38 = (!9);
                    }
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_39 += var_12;
                        arr_44 [i_3] = -var_1;
                        var_40 = ((-9 ? var_14 : var_5));
                    }

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_41 += (var_16 + var_7);
                        arr_47 [i_3] [i_2] [i_3] [i_11] [i_2] = var_14;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_42 = (!var_11);
                        var_43 = (34 - var_18);
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        arr_52 [i_0 - 1] [i_2] [i_3] [i_11] [i_3] = (var_18 - var_6);
                        var_44 = var_15;
                        arr_53 [i_0] [i_2] [i_3] [i_3] [i_3] = (7 + var_13);
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_57 [i_3] = (var_16 + 2147450880);
                        arr_58 [i_0] [i_3] [i_3] [i_11 + 1] [i_11 + 4] [i_16] [i_16] = (var_3 <= 11);
                        var_45 = ((var_15 ? var_8 : var_18));
                    }
                    arr_59 [i_3] [i_2] [i_2] [i_2] [i_2] = (((var_13 != var_2) > var_6));
                }
                var_46 = ((var_2 ? var_15 : var_11));
            }

            for (int i_17 = 3; i_17 < 22;i_17 += 1)
            {
                var_47 = (!var_4);
                arr_62 [i_17] [i_2] [i_0 - 1] = (max((max((var_8 + var_8), var_6)), (((((max(var_3, var_2)))) | var_6))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    var_48 = (var_15 + var_16);
                    var_49 = var_14;
                    var_50 = (!16073476735512432338);
                }
                var_51 *= (~var_0);
            }
            for (int i_20 = 3; i_20 < 22;i_20 += 1)
            {

                for (int i_21 = 1; i_21 < 21;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_52 = (min(var_52, (((-var_15 - ((((var_6 ? var_17 : 3751620115)) << (var_3 + 71))))))));
                        var_53 = (max((min(var_10, var_13)), (min(1, var_15))));
                        var_54 = (177 > 2147483632);
                    }
                    for (int i_23 = 1; i_23 < 21;i_23 += 1)
                    {
                        var_55 += (min(((-10 ? var_8 : -9220980886544613316)), var_8));
                        var_56 += (min(((min(((max(var_2, 44169))), ((var_8 ? var_11 : var_2))))), ((-(max(var_1, var_6))))));
                    }

                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        var_57 ^= ((!((max(((var_1 ? var_9 : var_3)), var_7)))));
                        var_58 = (((((var_6 ? (!var_15) : var_1))) ? var_8 : (((!(((var_15 ? var_4 : 3751620115))))))));
                        var_59 = var_10;
                        arr_84 [1] [i_20] [i_20] [i_20] [i_20] = ((-(max(var_8, var_7))));
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 23;i_25 += 1)
                    {
                        arr_87 [i_0] [i_20] = ((~(-9223372036854775807 - 1)));
                        var_60 = var_7;
                        var_61 = (15 / var_12);
                    }
                    arr_88 [i_0] [i_20] [i_21] [i_2] [i_2] = ((!(18446744073709551615 | 4042455134597052980)));
                }
                /* vectorizable */
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {

                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        var_62 *= (!var_13);
                        var_63 *= (var_11 + var_18);
                        var_64 ^= (!var_1);
                    }
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        var_65 *= var_5;
                        var_66 = var_10;
                        var_67 ^= 1097816418;
                        var_68 += var_1;
                    }
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        var_69 = -6;
                        arr_98 [i_20] [i_2] [1] [i_26] [i_26] [i_26] [i_29] = ((65528 ? var_5 : var_6));
                        arr_99 [i_29] [i_29] [i_20] [i_20] [i_20] [i_0] [i_0 - 2] = ((var_18 ? var_14 : ((var_6 << (var_12 - 5002173883051448581)))));
                        var_70 = (min(var_70, (((((var_9 ? var_16 : 32752)) != 1)))));
                        var_71 = ((var_10 >> (-9 < 2435847475)));
                    }
                    var_72 ^= (~var_3);
                }
                var_73 += ((~(30313 % var_10)));
                var_74 = 1;
            }
            /* vectorizable */
            for (int i_30 = 3; i_30 < 19;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    arr_104 [i_2] [9] [i_30] [i_31] [i_31] [i_31] = (var_14 < var_0);
                    var_75 = (~var_17);
                    var_76 = (min(var_76, (((3 ? var_14 : var_17)))));
                }
                arr_105 [i_0] [i_0] [i_0 - 2] = ((var_4 ? (var_6 == var_9) : var_10));
                var_77 ^= ((var_9 ? 13639193077059645954 : var_12));
                var_78 = (var_8 >= var_11);
            }
            var_79 = ((((max(3197150881, 5499542734673441790))) && ((max(var_17, var_6)))));
        }
        var_80 = ((-(min(var_1, var_0))));
        var_81 = (((!var_5) < ((var_16 ? var_4 : -33))));

        /* vectorizable */
        for (int i_32 = 0; i_32 < 23;i_32 += 1)
        {
            var_82 = ((var_12 ? var_5 : var_17));

            for (int i_33 = 3; i_33 < 22;i_33 += 1)
            {
                var_83 = var_10;
                arr_114 [i_0] [i_32] [i_33] = var_17;
            }
            for (int i_34 = 1; i_34 < 21;i_34 += 1)
            {
                var_84 += var_0;
                var_85 = (var_5 + var_8);
                var_86 += 130;
            }
        }
    }
    for (int i_35 = 0; i_35 < 14;i_35 += 1)
    {

        /* vectorizable */
        for (int i_36 = 0; i_36 < 14;i_36 += 1)
        {
            var_87 += ((-var_17 ? 3606847505100493078 : (var_3 < var_7)));
            var_88 += ((var_11 ? var_1 : var_2));
        }
        arr_123 [i_35] = 77;
    }
    var_89 += var_10;
    var_90 = (var_14 && var_15);
    #pragma endscop
}
