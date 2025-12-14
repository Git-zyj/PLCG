/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(var_5, (((var_8 / var_14) | (~-7)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_19 = ((var_16 ? var_4 : var_6));
            arr_8 [i_0] [i_1] = (((var_1 >> var_13) ? (var_5 > var_2) : var_5));
        }
        arr_9 [i_0] = ((~((max((max(var_14, var_10)), (!var_13))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] = ((((min(-7, (~18)))) ? ((((min(6, -7))) ? (~var_7) : var_1)) : (max(((min(21, 252))), var_6))));
                        arr_21 [i_5 - 3] [i_3] [i_3] [i_2] = ((min((max(var_0, var_14), var_16))));
                        var_20 = (((((~((var_12 ? var_9 : var_0))))) ? var_13 : (~var_17)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    {
                        var_21 ^= (min(((~((max(var_6, var_14))))), (max((~var_10), ((max(var_10, var_11)))))));
                        arr_27 [i_2] [i_2] [i_2] [i_3] = (!var_0);

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            arr_31 [i_6] [i_6] [i_3] [13] [11] [i_6] = (((((((235 ? 63 : 9219))) ? ((min(var_14, var_2))) : 1)) >= (~1)));
                            arr_32 [i_6] [i_3] [i_2] = (max((max(var_11, var_17)), var_5));
                            var_22 = (min(var_22, ((max(var_11, ((~((var_7 ? var_17 : var_3)))))))));
                            arr_33 [i_2] [i_3] [i_6] [i_7] [i_3] = var_13;
                            arr_34 [i_3] [i_7] [2] [i_3] [i_3] = ((!(((~((var_9 ? var_15 : var_3)))))));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_23 = (min(58005, 65519));
                            var_24 |= (((((var_5 ? ((0 ? 32768 : -7)) : (~var_11)))) ? (max(((max(var_7, var_12))), (~var_14))) : ((((max(var_13, var_7))) / (~var_8)))));
                            arr_38 [i_3] [i_3] = (min((((((max(var_2, var_17))) ? (~var_15) : (var_15 - var_3)))), (~var_0)));
                        }
                    }
                }
            }
            arr_39 [i_2] [13] [i_3] = var_12;
            var_25 ^= ((((((((var_3 ? var_14 : var_0))) ? ((var_6 ? 10 : var_9)) : (var_12 > var_10)))) ? (min(((min(var_8, var_6))), (max(var_17, var_7)))) : var_9));

            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_26 = (min(var_26, var_9));
                    arr_45 [i_3] [i_10 + 1] [20] = 1604336033;
                    arr_46 [i_3] [i_2] [16] [i_3] [18] [14] = ((((max(var_12, var_3))) ? var_3 : var_1));
                }
                var_27 = (min(var_27, var_15));
                var_28 = (((~((min(var_14, var_11))))));
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_29 = (max(var_17, (min(-1, (((677947448 % (-2147483647 - 1))))))));
            arr_49 [i_12] [0] = ((+(min((~var_10), var_5))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {

                        for (int i_15 = 3; i_15 < 20;i_15 += 1)
                        {
                            arr_57 [20] [i_14] [i_15 - 3] = (var_6 << ((((~((max(var_3, var_11))))) + 30)));
                            var_30 ^= (min((((var_9 ? var_15 : var_3))), (min(var_0, (((var_15 ? var_10 : var_13)))))));
                            arr_58 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((~((max(var_6, (min(var_1, var_2)))))));
                            var_31 = (min(var_31, (!var_15)));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            arr_61 [i_12] [i_16] |= (max(25, 6097));
                            var_32 *= (!3207049391);
                            arr_62 [i_16] [i_14] [i_13] [i_12] [i_2] = (var_4 ? (~2145) : ((min(var_10, (!var_12)))));
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            var_33 = (min(var_33, (((((~(max(var_9, var_2)))) << ((((~(1 % -104))) + 21)))))));
                            var_34 = (min(var_34, (((!(var_11 + var_14))))));
                            var_35 = (max(((~((var_17 ? var_12 : var_1)))), ((var_10 ? (var_5 & var_8) : var_8))));
                            var_36 = ((~(((var_17 ? var_14 : var_17)))));
                        }

                        for (int i_18 = 3; i_18 < 23;i_18 += 1)
                        {
                            arr_68 [1] [i_12] [i_13] [i_14] [i_18 + 1] |= (((((((max(var_7, var_3))) ? var_9 : var_4))) ^ (max((min(var_17, var_8)), (~var_15)))));
                            var_37 += ((var_9 ? (max(((var_0 ? var_10 : var_16)), var_14)) : var_12));
                        }
                        var_38 += (!var_3);
                    }
                }
            }
        }
        var_39 = (min(var_39, (((var_10 << (((max((~var_12), ((var_12 ? var_2 : var_17)))) - 22685)))))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                {
                    var_40 = var_8;

                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {

                        for (int i_22 = 3; i_22 < 23;i_22 += 1)
                        {
                            arr_82 [i_21] &= (var_11 && var_10);
                            arr_83 [i_19] [i_19] [i_19] [i_19] [i_19] = (min((((~7997700520871956300) | (~var_17))), ((max((max(var_6, var_10)), (var_14 || var_9))))));
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                        {
                            arr_86 [1] [21] [i_19] [i_20] [i_21] [i_23] = (var_10 ? (!var_17) : ((252 ? 0 : 116)));
                            var_41 = ((((var_3 ? var_2 : var_12))) ? var_16 : var_12);
                            var_42 = (min(var_42, var_3));
                        }
                        for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                        {
                            arr_91 [i_21] [i_20] [i_21] |= (~var_15);
                            var_43 *= (max(((!(~36032))), var_11));
                            var_44 ^= (max(((((min(var_0, var_13))) ? var_8 : (~var_11))), ((var_14 + (~var_5)))));
                            var_45 = ((var_12 >= (((var_16 && var_1) ? (var_7 & var_14) : var_16))));
                        }
                        var_46 = var_14;
                    }
                    var_47 = (min(var_47, var_2));

                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_48 *= (((~var_11) * var_13));

                        for (int i_26 = 1; i_26 < 1;i_26 += 1)
                        {
                            var_49 = var_0;
                            arr_96 [i_2] [i_25] [i_19] [i_25] [i_26] = ((~(~var_0)));
                        }
                        for (int i_27 = 1; i_27 < 20;i_27 += 1)
                        {
                            var_50 = (min(var_50, var_4));
                            arr_100 [i_2] [i_19] [i_20] [i_25] [i_27 + 1] = var_0;
                            arr_101 [i_19] = var_6;
                            arr_102 [i_2] [i_2] [i_2] [i_19] [i_2] = (~var_11);
                            arr_103 [i_19] [i_19] [15] = var_2;
                        }
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {

                        for (int i_29 = 2; i_29 < 22;i_29 += 1)
                        {
                            arr_110 [i_2] [i_19] [i_20] [i_19] [i_29] [i_29] [i_29 - 1] = (((((var_16 ? var_6 : var_6))) ? var_17 : (~var_14)));
                            var_51 += (var_5 >= var_17);
                            arr_111 [i_2] [i_19] [i_20] [i_28] [i_29] [0] = var_3;
                            arr_112 [i_19] [i_19] = ((~(!var_14)));
                        }
                        for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
                        {
                            arr_117 [i_30] [i_19] [i_19] [i_2] = (~(var_15 / var_8));
                            var_52 = (!1591878626);
                            var_53 = (((((var_17 ? var_3 : var_9))) / var_0));
                        }
                        for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                        {
                            arr_120 [i_31] [8] [i_28] [i_2] [4] &= ((~((var_7 ? var_9 : var_6))));
                            arr_121 [i_19] [18] [i_31] |= var_8;
                            var_54 = ((((var_11 ? var_0 : var_1))) ? var_7 : (var_12 && var_10));
                        }
                        arr_122 [i_19] [5] [i_19] [i_19] = ((((var_0 ? var_3 : var_14))) ? var_9 : (~-1));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_32 = 0; i_32 < 1;i_32 += 1)
    {
        arr_125 [i_32] = ((var_16 ? 201798269 : (~var_6)));
        var_55 -= ((var_10 % ((var_8 ? var_12 : var_2))));
    }
    #pragma endscop
}
