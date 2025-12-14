/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 -= (var_3 / var_3);
                    var_21 ^= ((!(2016 << 18)));
                    var_22 -= (((((arr_6 [i_1 + 1] [i_1 - 2]) + -25303)) % var_5));
                    arr_8 [i_0] &= (-((~(2826607354 - 6))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = -var_6;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_4] = ((!var_16) >> ((((!var_7) && (var_15 | -18)))));
            var_23 = (min(var_23, var_9));

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_24 = (min(var_24, (((((18 ? (18 - 2675454788) : (((1294848313 ? 0 : 80))))) * 1)))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_25 = (min(var_25, (var_11 - var_14)));
                        var_26 = (min(var_26, -2532521198939067159));
                    }
                    arr_24 [i_3] [i_3] = (var_14 ? (~8388352) : var_5);
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_29 [i_8] [i_3] = var_17;
            arr_30 [i_3] [i_8] = var_14;

            /* vectorizable */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_3] [i_8] [i_10] |= -1;
                        var_27 = (max(var_27, (((var_14 ? var_12 : (~-1294848313))))));
                        var_28 = var_18;
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        var_29 = (+-1972680662);
                        var_30 = -var_7;
                        var_31 = (~42);
                    }
                    arr_41 [3] [i_8] [i_9] [i_10] |= var_14;
                    arr_42 [i_3] [i_8] [i_9] [i_10] [i_10] = (((8243194570644245760 ^ -23731) ^ (arr_1 [i_9 - 1] [i_9])));
                }
                for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    arr_47 [i_3] [i_3] [i_3] = -var_12;
                    var_32 = (((!var_11) / var_3));
                    var_33 = (max(var_33, (((~(~var_2))))));
                    var_34 = (~3);
                }
                arr_48 [i_3] [i_8] [i_9] = var_5;
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_35 = (max((!var_1), var_12));
                arr_53 [12] [i_8] [i_14] = var_0;
            }
        }
        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            arr_58 [5] = var_12;

            /* vectorizable */
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    arr_65 [i_3] [i_15] [2] [i_17] = var_9;
                    arr_66 [i_17] [i_16 - 1] [0] [i_3] = 2311463853;
                }
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        var_36 = var_5;
                        var_37 = (min(var_37, ((((arr_2 [i_18 + 2]) ? 63 : var_0)))));
                        var_38 += var_4;
                    }
                    for (int i_20 = 1; i_20 < 1;i_20 += 1)
                    {
                        var_39 ^= (((((1 ? 7 : 119))) ? -1294848313 : -var_5));
                        arr_74 [i_20] [5] [i_18] [i_18] [i_18] [i_15] [i_3] = ((var_14 ? (118 < -126) : var_15));
                        var_40 = var_8;
                        var_41 = -var_0;
                        var_42 = (((((var_16 ? var_2 : var_9))) / (arr_18 [i_18 - 2] [i_20 - 1])));
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_43 = (arr_36 [i_16 - 1] [i_16] [i_16] [i_16 - 1] [i_16]);
                        var_44 = var_11;
                        var_45 = (var_8 * var_7);
                        var_46 = 1;
                        var_47 = (2634719511 | var_3);
                    }
                    var_48 = ((-var_6 << ((((var_3 ? var_11 : 244)) + 53))));
                    var_49 -= ((var_1 ? var_12 : 18));
                }
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        arr_86 [i_23] [i_22] [i_16 - 1] [i_22] [i_3] = (!var_16);
                        var_50 -= (!var_17);
                        arr_87 [i_22] = ((!(((var_7 << (var_15 - 1781583973))))));
                        var_51 = (min(var_51, (arr_59 [i_16 - 1] [i_15 - 1] [i_16] [4])));
                        var_52 = (~var_8);
                    }
                    for (int i_24 = 0; i_24 < 0;i_24 += 1)
                    {
                        var_53 = (min(var_53, var_8));
                        arr_92 [i_3] [i_22] [i_24 + 1] = ((var_6 - (arr_60 [i_15 - 2])));
                        var_54 = (arr_88 [i_3] [i_15 - 2] [i_24 + 1] [i_24 + 1] [i_24]);
                        var_55 += (!1);
                    }
                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        var_56 = (!(var_8 & 18));
                        var_57 = (!var_19);
                    }
                    var_58 = (max(var_58, var_4));
                    var_59 = (min(var_59, 1294848337));
                }
                var_60 = (max(var_60, ((!(((140187732541440 ? var_1 : var_9)))))));
                var_61 = (min(var_61, (((284350253 > ((1294848312 ? 1468359942 : 1294848337)))))));

                for (int i_26 = 3; i_26 < 13;i_26 += 1)
                {
                    var_62 ^= var_18;
                    var_63 = (max(var_63, (-18746 <= 18)));
                }
                for (int i_27 = 0; i_27 < 17;i_27 += 1)
                {
                    var_64 = (!var_4);
                    var_65 &= ((~(arr_21 [i_16 - 1])));
                }
            }
            for (int i_28 = 0; i_28 < 17;i_28 += 1)
            {
                arr_104 [i_28] = (-16 ? -1170098977 : var_16);

                /* vectorizable */
                for (int i_29 = 3; i_29 < 16;i_29 += 1)
                {

                    for (int i_30 = 2; i_30 < 14;i_30 += 1)
                    {
                        var_66 &= (~var_14);
                        var_67 = (min(var_67, (!-1815890071664467060)));
                    }
                    var_68 = (max(var_68, (!32440)));
                    arr_109 [i_3] [i_15] [i_28] = var_13;
                }
                for (int i_31 = 1; i_31 < 16;i_31 += 1)
                {
                    arr_114 [1] [1] [1] [i_31] = ((~(~var_3)));
                    var_69 = (min(var_69, (((-22142 ? -28546 : -140187732541441)))));
                    var_70 = (((min(-1294848313, (arr_62 [i_31 + 1] [i_15 - 1] [i_15 + 1]))) / (max(1294848340, 1))));
                    arr_115 [i_3] [i_15] [i_28] [i_31] = ((!(((-(var_13 >= var_4))))));
                }
            }
        }

        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            var_71 = (((min(var_2, var_1)) > (((16 ? 0 : 0)))));
            var_72 = (max(var_72, (((~(min(((var_4 ? -9707 : 1307142819)), ((min(var_14, var_4))))))))));
            var_73 = (max(var_73, 33));
            var_74 *= (max(((max((!var_8), var_19))), var_2));
        }
        arr_118 [i_3] [i_3] = -18;
    }
    for (int i_33 = 1; i_33 < 1;i_33 += 1)
    {
        var_75 = (max((1 + 1), ((max(-61, var_3)))));
        arr_122 [i_33] = (((0 * 1) > (arr_16 [13] [i_33] [13])));
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 1;i_34 += 1)
        {
            for (int i_35 = 2; i_35 < 14;i_35 += 1)
            {
                {
                    var_76 &= var_4;
                    arr_128 [i_33] [i_34] = 1;
                }
            }
        }
    }
    for (int i_36 = 0; i_36 < 11;i_36 += 1)
    {
        var_77 = (min(var_77, (((1 ? var_14 : (-2147483647 - 1))))));
        arr_131 [i_36] = ((-((~(var_1 ^ var_17)))));
        arr_132 [i_36] = (max((min(var_18, var_2)), (max(((var_5 ? var_14 : 133523363)), var_0))));
    }
    var_78 = (min(var_78, var_7));
    #pragma endscop
}
