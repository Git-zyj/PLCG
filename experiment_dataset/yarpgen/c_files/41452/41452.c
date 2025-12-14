/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_17, var_13));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(((max(var_13, var_14))), (max(var_18, (max(var_8, var_0))))));
        var_21 = (min(var_21, ((((((var_2 ? var_6 : var_2))) ? var_14 : ((var_12 ? var_11 : var_8)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = ((-(~var_15)));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, var_13));
                    arr_14 [i_3] [i_3] [i_2] [i_3] = -var_8;
                    arr_15 [i_3] [i_3] = (!var_15);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_24 = var_15;

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_21 [i_6] [i_5] [i_3] [i_2] [i_1] = ((var_16 ? var_12 : var_18));
                        var_25 *= (~2597935144);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_3] = var_4;
                        arr_27 [i_1] [i_3] [i_2] [i_2] [i_3] [i_2] [i_7] = (!var_15);
                        arr_28 [i_1] [i_1] [i_3] [i_5] [i_3] = (var_0 + var_11);
                        arr_29 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = ((var_17 ? var_10 : var_5));
                        arr_30 [i_1] [i_2] [i_2] [i_3] [i_5] [i_5] [i_3] = (var_8 / var_2);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_3] [i_3] [i_5] [i_8] = 2564679948016681542;
                        var_26 ^= ((!var_6) + var_5);
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_3] [i_2] [i_3] [i_3] [i_9] [i_3] [i_9] = ((var_17 ? var_4 : var_18));
                        var_27 = (var_15 >= var_14);
                    }
                    arr_38 [i_1] [i_3] [i_3] [i_2] [i_1] = var_8;
                }
                var_28 = ((var_2 ? var_11 : var_2));
                var_29 = (~var_8);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 += (min(((var_10 ? var_5 : (((var_3 ? var_6 : var_1))))), ((~(max(var_16, var_13))))));
                arr_42 [6] [i_2] [i_10] = ((var_4 > (max(var_0, var_13))));
                arr_43 [i_1] [i_2] = (max((max(var_2, var_4)), (min(var_2, var_17))));
            }
            arr_44 [i_1] [i_2] = max(((min(var_6, var_5))), (~var_0));

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_49 [i_1] [i_11] = (min((~var_13), (min(var_2, var_14))));
                arr_50 [i_2] = (-(var_5 ^ var_8));
                arr_51 [i_1] [i_2] [i_11] [i_11] = var_17;
                arr_52 [i_11] = (((var_6 ? var_0 : var_2)));

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_58 [i_1] [i_2] [i_2] [i_13] [i_13] = (min((~var_13), (var_9 < var_15)));
                        arr_59 [i_13] = ((max(var_16, var_1)));
                    }
                    arr_60 [i_1] [i_2] [i_11] [i_12] [i_1] [i_2] = (min((((!((max(var_9, var_15)))))), var_12));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    arr_63 [i_14] [17] [17] [i_11] [i_14] = (max((max(var_18, ((var_4 ? var_3 : var_14)))), var_11));

                    for (int i_15 = 4; i_15 < 19;i_15 += 1)
                    {
                        var_31 = (var_15 - var_2);
                        arr_66 [i_14] = (((-9223372036854775807 - 1) / 103));
                        arr_67 [i_1] [i_2] [i_14] [i_14] [i_15 - 4] [i_2] = (max((var_7 && var_17), ((var_3 ? var_15 : (var_5 ^ var_6)))));
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_72 [6] [i_2] [i_16] [i_14] [i_16] &= (max(((min((min(var_9, var_9)), var_7))), (max((~var_1), var_0))));
                        var_32 = (max((~var_4), ((var_9 ? var_15 : var_9))));
                        arr_73 [i_1] [8] [i_11] [i_14] [i_16] [i_11] &= (max((((256 ? -29225 : 4519888848035605150))), ((~(max(var_16, var_0))))));
                        var_33 = var_14;
                    }
                    arr_74 [i_11] [i_14] = ((-(min((min(var_8, var_17)), var_14))));
                    arr_75 [i_14] [i_14] [i_11] [i_14] = var_1;
                    arr_76 [i_1] [i_14] = (-(((max(var_2, var_11)) + (((max(var_11, var_17)))))));
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    arr_79 [i_17] [i_2] [i_11] [i_17] = -var_7;
                    arr_80 [i_1] [i_17] [i_17] = (min((max(var_4, var_17)), var_17));
                    var_34 ^= (max(var_5, var_15));
                }
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    var_35 = (max((var_17 < var_6), var_7));
                    arr_84 [i_1] [i_2] = (min((~var_6), (~var_10)));
                }
            }
            /* vectorizable */
            for (int i_19 = 2; i_19 < 20;i_19 += 1)
            {
                arr_89 [i_1] [i_1] [i_19] = -var_17;
                arr_90 [i_1] [i_2] [i_19] [i_2] = ((var_17 ? var_5 : var_9));
                arr_91 [17] [i_1] [i_1] [i_1] = (var_15 | var_7);
                arr_92 [i_1] [i_2] [i_19] = var_17;
            }
        }
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            arr_95 [i_1] [16] [i_1] = (max((max(((min(var_7, var_7))), var_8)), var_18));
            arr_96 [i_1] [i_1] = (max(var_18, ((max(var_6, var_17)))));
            var_36 = (min((min(var_11, -var_0)), ((min(var_11, var_9)))));
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            var_37 = (~var_12);
            var_38 = ((926842129 ? -22029 : 225));
            var_39 = var_12;
            arr_101 [i_1] = ((!var_6) > var_15);
        }

        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                arr_107 [i_1] [i_1] [i_1] [i_1] = (((var_14 + var_13) ? ((65535 ? -56 : 2276908668)) : var_18));

                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {

                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        var_40 |= (var_4 - var_4);
                        arr_115 [i_1] [17] [i_25] [i_24] [i_23] = (var_11 - var_8);
                        arr_116 [i_1] [i_22] [i_24] [i_25] = (((((var_13 ? var_0 : var_12))) ? -4294967295 : var_13));
                        arr_117 [i_1] = (~var_9);
                        arr_118 [i_1] [i_22] [5] [i_24] [i_25] = ((var_13 ^ (~var_18)));
                    }
                    /* vectorizable */
                    for (int i_26 = 1; i_26 < 19;i_26 += 1)
                    {
                        arr_123 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_11 ? var_13 : var_5));
                        arr_124 [i_1] [i_22] [i_23] [i_24] [i_26 + 2] = (~var_14);
                        arr_125 [i_1] [i_22] [i_1] [i_24] [i_26] = ((var_8 ? var_2 : var_15));
                        var_41 = (var_16 - var_11);
                    }

                    /* vectorizable */
                    for (int i_27 = 1; i_27 < 19;i_27 += 1) /* same iter space */
                    {
                        var_42 = var_17;
                        arr_128 [i_27] [i_22] [i_23] [i_24] [i_27] = (var_14 > var_17);
                        arr_129 [i_27] [i_24] [i_23] [i_22] [i_27] = -22065;
                    }
                    for (int i_28 = 1; i_28 < 19;i_28 += 1) /* same iter space */
                    {
                        var_43 = ((~((max(var_17, var_17)))));
                        arr_134 [i_23] [i_22] [i_23] [i_28] [i_28] = (max((((var_3 + ((max(var_7, var_11)))))), (((var_17 ? var_15 : var_2)))));
                    }
                    for (int i_29 = 1; i_29 < 19;i_29 += 1) /* same iter space */
                    {
                        var_44 = (((max(var_0, var_18)) >> ((((min(var_18, var_15))) - 6925))));
                        arr_138 [i_1] [8] [i_23] [i_23] [i_23] [i_24] [i_29] = ((var_1 == (min(var_3, var_16))));
                        arr_139 [i_1] [i_1] [i_1] [i_1] = (min((min(var_16, var_6)), ((min(var_14, var_18)))));
                    }

                    for (int i_30 = 0; i_30 < 21;i_30 += 1)
                    {
                        arr_143 [i_30] [i_23] [i_1] = -31555;
                        arr_144 [i_23] = ((~(~var_17)));
                    }
                    for (int i_31 = 0; i_31 < 21;i_31 += 1)
                    {
                        arr_147 [i_22] = ((-var_14 ? (~var_10) : var_2));
                        arr_148 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((~4694619040756988770) + 9223372036854775807)) >> (((max(var_18, var_7)) - 45201))));
                        var_45 -= var_6;
                        var_46 ^= max((~var_15), (max(-var_4, var_16)));
                    }
                    for (int i_32 = 0; i_32 < 21;i_32 += 1)
                    {
                        arr_151 [i_32] [i_24] [i_23] [i_22] [i_1] = (min((max(9223372036854775807, 2)), (((!((max(var_12, var_0))))))));
                        arr_152 [i_1] [i_22] [i_23] [i_24] [i_32] = (min(31453, 14054684353707938072));
                        var_47 = ((max((min(5804672811657777191, 214373009654456072)), ((max(var_14, var_7))))) & ((((max(var_9, var_7))) ^ (~var_12))));
                        var_48 = var_10;
                    }
                    var_49 = ((-(min(((max(var_10, var_13))), ((var_5 ? var_16 : var_18))))));
                    var_50 = ((~(!var_9)));
                }
            }

            for (int i_33 = 0; i_33 < 21;i_33 += 1)
            {
                var_51 = ((!(((var_18 ? var_7 : var_12)))));
                arr_155 [i_33] [i_22] [i_33] = ((-1499186979 ? ((-((var_13 ? var_16 : var_8)))) : ((-(var_12 | var_10)))));
            }
            for (int i_34 = 0; i_34 < 21;i_34 += 1)
            {
                arr_158 [i_1] [i_22] [i_1] [i_34] = (((max(var_17, var_15))) ? (!var_3) : (((max(var_1, var_11)))));
                arr_159 [i_1] [i_1] [i_34] [i_1] = ((max(var_16, var_7)) > ((max(16383, 11))));
            }
            for (int i_35 = 2; i_35 < 20;i_35 += 1)
            {
                arr_162 [i_1] [i_22] [i_35] |= var_17;
                arr_163 [i_22] [i_22] = (max(-var_16, var_15));
                var_52 = ((max(var_0, (((var_17 ? var_2 : var_3))))) - (min(6872135663007205238, 18218412171291568050)));
                var_53 = (((max(var_9, var_0)) == (~var_9)));
                arr_164 [i_1] [i_22] [i_35 - 2] = ((+((max((var_7 != var_16), var_3)))));
            }
            /* vectorizable */
            for (int i_36 = 0; i_36 < 21;i_36 += 1)
            {

                for (int i_37 = 4; i_37 < 20;i_37 += 1)
                {
                    var_54 ^= ((var_16 ? var_15 : var_10));
                    var_55 -= (var_9 <= var_4);
                    arr_169 [i_1] [19] [i_1] [i_1] = ((-3723120716246347726 ? -3419809581559308969 : (-9223372036854775807 - 1)));
                }

                for (int i_38 = 0; i_38 < 21;i_38 += 1) /* same iter space */
                {
                    arr_172 [i_1] [i_22] [i_36] [i_38] = ((var_13 ? var_6 : var_9));
                    arr_173 [i_1] [i_1] [i_1] [i_1] [i_1] = var_11;
                    var_56 ^= var_6;
                }
                for (int i_39 = 0; i_39 < 21;i_39 += 1) /* same iter space */
                {
                    var_57 = -var_6;
                    arr_177 [i_1] [i_22] = (var_6 ^ var_17);
                }
                for (int i_40 = 0; i_40 < 21;i_40 += 1)
                {
                    var_58 += var_11;
                    var_59 = (min(var_59, (((!(var_11 & var_0))))));
                    var_60 = var_17;
                    var_61 = (~var_1);
                }
                for (int i_41 = 0; i_41 < 21;i_41 += 1)
                {
                    var_62 = (~var_16);
                    var_63 = ((var_4 ? var_5 : var_10));
                    var_64 += (!var_8);
                }
            }
        }
        var_65 = (max(((((min(var_6, var_6))) ? -var_6 : (((var_5 + 9223372036854775807) << (var_10 - 41484))))), (((~(var_17 & var_8))))));
        var_66 = (max((((!(var_0 && var_17)))), (max((min(var_8, var_12)), var_1))));
    }
    #pragma endscop
}
