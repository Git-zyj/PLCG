/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((((var_0 > 1073741824) ^ (min(15779, var_12))))) || ((((!var_2) ? (max(25515, 1156769934856612601)) : -378332230)))));
        arr_5 [i_0] [i_0] = (!var_13);
        var_18 = (~8);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = ((~((((min(var_10, 22642))) & ((var_9 ? var_16 : var_15))))));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_19 ^= ((((~(min(var_0, var_9)))) >> (((max(var_2, var_15)) - 9355614397238923476))));
                            var_20 = ((((var_6 & -15779) | ((var_5 ? var_15 : var_17)))));
                            var_21 = ((((max(1156769934856612603, (var_0 || var_17)))) ? (max(-var_13, (max(var_0, var_12)))) : ((max((((var_6 + 2147483647) << (((var_6 + 32628) - 9)))), ((-(-32767 - 1))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_22 ^= var_8;
                            var_23 = (-1465133044 <= -70);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] = (max(((max(29301, 1156769934856612609))), (-9139 != var_10)));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_6] = ((((max(14246, 19898))) <= ((var_14 ? 24 : var_6))));
                            var_24 = (-(((!((max(var_12, var_17)))))));
                            var_25 = (min(var_25, (((~((var_10 ? (var_6 + 49434) : -1156769934856612602)))))));
                            var_26 = var_10;
                        }
                        var_27 = (min(var_27, var_9));
                        arr_23 [i_0] [i_1] [i_1] [i_0] = var_12;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_34 [10] [i_8] [i_8] &= (4119998165 + var_3);
                        var_28 ^= var_9;

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_29 = var_11;
                            var_30 = (var_16 | var_1);
                            var_31 = (var_15 % var_7);
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            arr_40 [i_7] [i_7] [i_9] [i_7] [14] [14] = var_0;
                            arr_41 [4] [i_7] [i_10] = ((4323455642275676160 | (var_1 < var_4)));
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_32 = (min(var_32, ((((var_13 << (1961820418097493517 - 1961820418097493516))) | var_4))));
                            var_33 = -var_9;
                            var_34 = ((15772 ? var_11 : ((19893 ? var_9 : var_9))));
                            arr_45 [i_7] [i_7] [i_7] = (((17777 & -23) ? ((var_14 ? var_11 : var_17)) : (~var_13)));
                            var_35 = (max(var_35, (((var_16 ? var_8 : var_17)))));
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_36 = (min(var_36, (var_4 > -42)));
                            arr_48 [20] [i_7] [i_7] [5] [i_14] = (((var_6 - var_1) + (var_9 * var_17)));
                            var_37 = var_15;
                            var_38 = (((56935 ? var_9 : var_13)));
                        }
                    }
                }
            }
        }

        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {
            var_39 = (!var_1);
            var_40 = (10434 != var_0);
        }
        arr_52 [i_7] = (~var_7);
        arr_53 [i_7] = (((var_17 != var_15) - var_12));
        var_41 = (!6847296750906498008);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_42 = (min(var_42, var_5));
        arr_57 [i_16] [i_16] |= ((var_2 * var_8) - var_12);
        var_43 |= var_15;
        var_44 += (var_16 ? var_10 : ((var_17 >> (var_16 + 5802584295320085065))));
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
    {
        var_45 = var_1;
        arr_62 [i_17] = (min(((((var_12 / var_13) || (var_7 > var_7)))), var_6));
        var_46 = (((max((((var_17 ? var_16 : var_11))), ((var_12 ? var_10 : var_0)))) ^ ((max(939524096, var_6)))));
        arr_63 [i_17] [i_17] = var_6;
    }
    var_47 = ((((-1156769934856612595 << (((min(59175, var_17)) - 59137)))) << (var_10 - 2556055748)));

    for (int i_18 = 1; i_18 < 9;i_18 += 1)
    {
        var_48 |= ((((max((max(var_10, var_8)), (var_16 - 4119998165)))) || (((var_17 ? 160 : var_3)))));

        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
        {
            var_49 = (max(var_49, ((max(((max(var_16, -var_1))), (max((max(var_14, var_2)), var_16)))))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            var_50 = ((((max(var_3, var_0)) * (1 * var_10))));
                            var_51 = (min(var_51, ((max(((var_0 ? (~var_0) : (max(8951006491271508673, -1865409058091282121)))), ((max(var_17, var_3))))))));
                            var_52 = (min(var_12, (!6360)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
        {
            var_53 = ((var_8 ? (56931 & var_8) : var_8));
            var_54 = -7247279582771613837;
        }
    }
    for (int i_24 = 0; i_24 < 12;i_24 += 1)
    {
        arr_86 [i_24] |= (((~var_15) ? ((min(-var_15, ((max(var_7, var_14)))))) : (((~1) ? ((max(var_15, var_3))) : (min(-1023691229923905491, var_8))))));
        arr_87 [i_24] = min(((~(max(var_9, var_10)))), var_6);
        arr_88 [5] [5] = ((((min(var_15, var_14))) > (var_0 / var_6)));
    }
    var_55 = ((var_11 ? (((max(1, var_12)) * (var_2 ^ var_12))) : (!var_3)));
    /* LoopNest 3 */
    for (int i_25 = 0; i_25 < 22;i_25 += 1)
    {
        for (int i_26 = 1; i_26 < 20;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 22;i_27 += 1)
            {
                {
                    arr_97 [i_25] [i_25] = ((((var_8 ? (!var_12) : -var_6)) < (max(-3563837749421385361, (((var_4 + 2147483647) >> (8944513400707135130 - 8944513400707135125)))))));

                    for (int i_28 = 0; i_28 < 22;i_28 += 1)
                    {

                        for (int i_29 = 0; i_29 < 22;i_29 += 1)
                        {
                            var_56 = (min(19893, (max(-var_5, ((max(var_14, var_13)))))));
                            arr_102 [i_25] [i_25] [1] = ((~(((var_17 < var_4) ? ((max(var_17, 1139114447))) : ((var_9 ? 3584726308548444747 : -3213570237115824910))))));
                        }
                        for (int i_30 = 0; i_30 < 22;i_30 += 1)
                        {
                            var_57 = var_2;
                            var_58 = (max(((min((min(var_16, var_16)), 127))), (max(var_17, (~17489)))));
                        }
                        arr_105 [6] &= ((-var_15 && (((var_17 << (((min(48048, var_16)) + 5802584295320085068)))))));
                        var_59 = ((~(var_17 != var_2)));
                        arr_106 [10] [i_26] [i_27] [12] &= (((min(var_15, var_11))) || (((((max(38784, var_17))) ? ((max(var_6, var_9))) : 3500548345524409654))));

                        /* vectorizable */
                        for (int i_31 = 1; i_31 < 21;i_31 += 1)
                        {
                            arr_109 [i_25] [i_25] [i_25] [6] [8] |= (((var_0 < 8561232299271389713) ? var_16 : (var_9 > var_13)));
                            var_60 += var_16;
                        }
                        for (int i_32 = 4; i_32 < 21;i_32 += 1)
                        {
                            arr_113 [i_25] [12] [12] [i_25] [i_25] [i_25] [12] = ((var_6 ^ (((var_2 >= ((var_11 ? var_12 : var_11)))))));
                            arr_114 [i_25] [i_25] [10] [i_25] = (((var_17 && var_0) ? (((~(48048 >= var_16)))) : (max(-70, var_8))));
                        }
                        for (int i_33 = 1; i_33 < 19;i_33 += 1)
                        {
                            arr_117 [i_25] = 48045;
                            var_61 *= ((max(var_4, var_13)));
                            arr_118 [i_25] [1] [i_25] = (max((var_0 ^ var_8), -12825));
                        }
                    }
                    /* vectorizable */
                    for (int i_34 = 0; i_34 < 22;i_34 += 1)
                    {
                        arr_121 [i_34] [i_25] [i_25] [i_25] = (var_9 || var_12);
                        arr_122 [i_25] [i_25] = (23435 + var_4);

                        for (int i_35 = 0; i_35 < 22;i_35 += 1)
                        {
                            var_62 = ((var_8 ? (var_5 < var_5) : var_15));
                            arr_125 [20] [1] [8] [1] [i_25] &= (((~var_9) * (var_12 / var_8)));
                            var_63 += var_12;
                        }
                    }
                    for (int i_36 = 0; i_36 < 22;i_36 += 1)
                    {
                        var_64 = ((65534 && (var_9 || var_0)));
                        arr_128 [i_25] = ((!((max(var_3, (var_11 / var_17))))));
                        var_65 = (max(var_65, (((-(~var_3))))));
                    }
                    for (int i_37 = 0; i_37 < 22;i_37 += 1)
                    {
                        var_66 = (max(var_66, (((((var_17 <= var_3) ? (!var_15) : ((var_1 ? var_1 : var_17)))) == ((var_13 ? (max(var_17, 17489)) : (max(117, var_10))))))));
                        arr_132 [i_25] [i_26 + 1] [6] [i_25] |= ((!((max(-18, -var_2)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
