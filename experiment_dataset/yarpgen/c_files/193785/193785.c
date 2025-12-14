/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 |= (var_10 || var_5);
        arr_2 [10] [10] |= ((var_1 <= var_6) - -var_5);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = (((((var_11 ? var_2 : var_8))) ? var_5 : var_12));
                    var_17 = (!var_4);
                }
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_0] = (((var_11 - var_13) ? var_8 : var_9));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] = (!var_4);
                        var_18 -= (var_8 || var_1);
                        var_19 = (!var_1);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_13 >= var_12);
                        var_20 = var_14;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_0] = var_9;
                        arr_25 [i_0] [i_0] = (!var_5);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_21 = (!var_14);
                        arr_29 [i_7] [10] [i_2] [10] [i_0] |= ((var_12 >> (var_9 - 22676)));
                        var_22 ^= ((!(!var_11)));
                        var_23 = ((-123 ? 0 : -27533));
                    }
                }
                arr_30 [i_0] [i_1] [i_0] = var_13;
            }
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                var_24 |= (((var_11 != var_5) & -var_9));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_25 ^= (!var_7);
                    arr_37 [i_0] [i_1] [i_8] [i_0] = (!var_6);
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_26 = (max(var_26, (var_0 ^ var_7)));
                        var_27 = var_12;
                        var_28 &= ((var_10 ? (!var_13) : (!var_7)));
                    }
                    var_29 = (-2650761623052908744 % 1);
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_30 = (~var_3);

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_31 = (max(var_31, var_5));
                        var_32 = (((var_3 >= var_14) ? var_8 : var_10));
                        var_33 = (~var_8);
                        var_34 ^= 15675745660577399950;
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        var_35 = var_2;
                        arr_50 [15] [i_0] [i_8 - 1] [i_8 - 1] [i_12] [i_12] [i_14] = var_7;
                    }
                    var_36 = var_10;
                }
                arr_51 [i_0] [i_0] [i_1] [i_8] = (max((!var_13), var_13));
            }

            for (int i_15 = 2; i_15 < 17;i_15 += 1)
            {
                var_37 += (((((!(var_0 + var_9))))) | (min(var_10, var_12)));

                for (int i_16 = 3; i_16 < 17;i_16 += 1)
                {
                    var_38 = ((((((var_0 | var_6) - var_4))) ? (23038 != -27533) : ((+(((var_13 + 2147483647) >> (var_7 - 53873)))))));
                    arr_59 [16] [i_16] |= (!var_4);
                    arr_60 [i_1] [i_0] = (max(((((min(var_8, var_1))) ? (var_8 < var_5) : (~0))), (((var_11 >= (((-2650761623052908773 + 9223372036854775807) << (7925792124412834145 - 7925792124412834145))))))));
                }
                var_39 |= var_2;
                var_40 = var_14;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_41 |= -6176;
                            arr_65 [i_0] [i_1] [i_0] [i_17] [i_15 - 2] = (((!var_4) ? (!var_11) : (!var_0)));
                            var_42 -= (min((~var_9), (((max(var_4, var_10)) % ((max(var_8, var_14)))))));
                            var_43 ^= (!var_11);
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                arr_70 [i_0] [i_0] [1] [i_0] = var_0;
                var_44 = (((!var_12) % (~-28215)));
            }
            for (int i_20 = 3; i_20 < 17;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 4; i_21 < 17;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_45 += (((var_11 ? var_10 : var_8)));
                            var_46 = ((max(-var_2, var_7)) / (((var_7 || ((max(var_8, var_1)))))));
                        }
                    }
                }
                var_47 |= (((((!(~-23039)))) >= var_9));
                arr_80 [i_0] [i_1] [i_1] = ((~(~var_1)));
                var_48 = var_0;
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            var_49 -= 28219;
            var_50 = (max(var_50, (!var_13)));
        }
        for (int i_24 = 0; i_24 < 18;i_24 += 1)
        {
            var_51 = ((!(var_14 == var_0)));
            var_52 ^= (max(((var_9 << (var_14 + 7640603356967082671))), -var_2));
        }
        var_53 *= (max((-23066 - -27542), (max((var_12 ^ var_10), var_10))));
        arr_88 [i_0] = ((-((min(var_6, (max(var_13, var_2)))))));
    }
    for (int i_25 = 3; i_25 < 12;i_25 += 1)
    {

        for (int i_26 = 0; i_26 < 13;i_26 += 1)
        {
            var_54 += -27542;
            var_55 = (max(var_55, ((((((-((var_7 ? var_1 : var_1))))) ? var_14 : (!var_12))))));
            var_56 = ((var_13 > (var_4 <= var_10)));

            for (int i_27 = 2; i_27 < 12;i_27 += 1)
            {
                var_57 = var_9;
                var_58 &= (min(var_9, (!var_5)));
            }
            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                var_59 = var_14;
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        {
                            var_60 = (max(var_60, (-7899358436716402107 <= 3531271087)));
                            var_61 += var_4;
                            arr_105 [i_29] [i_26] = 0;
                            var_62 = (~var_2);
                            var_63 = (7417642191006603128 ^ 43461);
                        }
                    }
                }
                var_64 = (max(var_64, ((((var_13 ? 4156980818 : (((min(var_13, var_8))))))))));
                arr_106 [i_25] [3] = (((((!var_11) ? (((max(var_8, var_7)))) : var_5)) % (((min(1, 3907))))));
                var_65 = (((~var_0) - ((var_1 ? var_13 : var_6))));
            }
            for (int i_31 = 1; i_31 < 12;i_31 += 1)
            {
                var_66 = -var_4;

                for (int i_32 = 0; i_32 < 13;i_32 += 1)
                {

                    for (int i_33 = 1; i_33 < 12;i_33 += 1)
                    {
                        var_67 -= ((-(var_3 / var_13)));
                        var_68 *= var_8;
                    }
                    for (int i_34 = 0; i_34 < 13;i_34 += 1)
                    {
                        var_69 = (max(var_69, ((((((!(!var_9)))) - (((!(!var_2)))))))));
                        var_70 = (((!var_5) & 7899358436716402106));
                    }
                    arr_119 [i_32] [6] [i_31 - 1] [7] = ((10376 ? 4294967288 : 10374));
                }
                for (int i_35 = 0; i_35 < 13;i_35 += 1)
                {
                    var_71 = (((!var_9) - (2408136815066191420 | 0)));

                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_72 = (min(var_72, (((((max(var_14, var_8))) ? (!var_1) : -var_0)))));
                        var_73 = (+-4282651516226801168);
                    }
                }
                for (int i_37 = 0; i_37 < 13;i_37 += 1)
                {
                    var_74 -= ((11021 ^ (!-6)));
                    var_75 = (var_6 % var_1);
                }
            }
        }
        var_76 = var_1;

        for (int i_38 = 3; i_38 < 12;i_38 += 1)
        {
            var_77 = (min(var_77, (((max(var_11, (max(var_1, var_14))))))));
            var_78 -= var_7;
            arr_132 [i_38] [i_38] [i_38] = (-977283268 || 1153630363031354045);
        }
        for (int i_39 = 0; i_39 < 13;i_39 += 1)
        {
            var_79 = max((!var_5), var_3);
            var_80 = (((~var_14) ? ((var_8 ? -var_10 : -var_4)) : (((((max(var_0, var_14)) == var_9))))));
            var_81 = ((min(var_3, var_12)));
        }
    }
    for (int i_40 = 0; i_40 < 17;i_40 += 1)
    {
        arr_137 [i_40] = ((~((~(32767 ^ -26016)))));
        var_82 *= ((!(var_4 ^ var_10)));
    }
    var_83 = var_0;

    for (int i_41 = 1; i_41 < 21;i_41 += 1)
    {
        var_84 = (min(var_84, var_10));
        var_85 = ((var_10 / (!var_2)));
        arr_140 [i_41] = ((!(~var_2)));

        for (int i_42 = 2; i_42 < 20;i_42 += 1)
        {
            arr_144 [4] [18] |= (!0);
            var_86 ^= var_11;
            var_87 -= var_14;
        }

        for (int i_43 = 2; i_43 < 20;i_43 += 1)
        {

            for (int i_44 = 1; i_44 < 19;i_44 += 1)
            {
                arr_150 [i_44] = ((!((min(((var_5 ? var_11 : var_12)), ((var_11 ? var_8 : var_1)))))));
                var_88 = var_14;
            }
            arr_151 [i_41] [i_43] [i_43] = (~var_14);
        }
    }
    for (int i_45 = 0; i_45 < 13;i_45 += 1)
    {
        var_89 = (min(var_89, var_5));
        arr_155 [i_45] [i_45] = ((~(~var_12)));
        var_90 = min(7899358436716402106, 0);
    }
    for (int i_46 = 0; i_46 < 17;i_46 += 1)
    {
        arr_158 [i_46] = max(var_8, (-var_9 * var_3));
        /* LoopNest 2 */
        for (int i_47 = 0; i_47 < 17;i_47 += 1)
        {
            for (int i_48 = 0; i_48 < 1;i_48 += 1)
            {
                {

                    for (int i_49 = 3; i_49 < 15;i_49 += 1)
                    {

                        for (int i_50 = 0; i_50 < 17;i_50 += 1)
                        {
                            var_91 = var_6;
                            var_92 = (max(var_92, (((11021 ? 1 : (!16247605060877094792))))));
                            var_93 &= (max((max(var_9, var_1)), (-var_6 == var_0)));
                            var_94 = (max(var_94, var_10));
                            arr_170 [i_48] [i_49 - 2] [i_48] [i_47] [i_48] = (min((max(var_9, var_8)), (16 >= 28214)));
                        }
                        for (int i_51 = 0; i_51 < 17;i_51 += 1)
                        {
                            var_95 = (((var_0 ? var_4 : var_6)));
                            var_96 = ((((~(var_8 && var_6))) - ((((((var_3 ? var_7 : var_8))) || var_4)))));
                            arr_174 [i_48] [14] [i_48] [i_48] [i_48] [i_48] [i_48] = -798365485076927332;
                            arr_175 [i_46] [3] [i_48] [i_48] [i_51] [i_48] = ((-7899358436716402105 ? 32767 : -1249884537));
                        }
                        for (int i_52 = 4; i_52 < 14;i_52 += 1)
                        {
                            var_97 = (!var_6);
                            arr_178 [i_48] [i_47] [16] [16] = var_6;
                        }
                        arr_179 [i_46] [i_46] [i_48] [i_49 + 1] = ((-((min(11021, -28215)))));

                        for (int i_53 = 2; i_53 < 15;i_53 += 1)
                        {
                            var_98 &= -1;
                            var_99 = (max(var_99, ((min((((((var_0 ? var_14 : var_12))) ? (!var_2) : var_13)), (!var_0))))));
                        }
                        for (int i_54 = 2; i_54 < 14;i_54 += 1)
                        {
                            arr_187 [i_48] [i_47] [i_47] [8] [i_47] [8] = (~-11311);
                            var_100 = (min(var_100, ((((var_12 - var_14) ? 0 : (var_6 + var_11))))));
                            arr_188 [16] &= var_2;
                        }
                    }
                    arr_189 [i_48] [i_47] = ((var_9 != (var_8 > var_11)));

                    for (int i_55 = 0; i_55 < 1;i_55 += 1)
                    {
                        var_101 -= (((var_13 + 2147483647) << (((max(1, 2886)) - 2886))));
                        var_102 = var_4;
                    }
                    var_103 = (max(var_103, (~var_4)));
                }
            }
        }
    }
    #pragma endscop
}
