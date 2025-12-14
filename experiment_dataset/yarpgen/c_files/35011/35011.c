/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
            {
                var_14 = ((-((1228259597885714040 ? (-32767 - 1) : 1228259597885714040))));
                var_15 = (min(var_15, (var_5 & 32745)));
                var_16 = var_7;
            }
            for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_17 += ((var_7 ^ (arr_4 [18] [i_0 - 2])));

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_18 |= (20471 > -18);
                    var_19 += ((((((arr_11 [i_0 - 1] [i_1] [i_3] [i_4]) << 1))) && -543970846));
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] [i_7] = ((var_6 >= 1022811869) ^ (var_11 + 16525881057919300566));
                            var_20 += ((((var_7 ? var_7 : var_2)) | var_0));
                            var_21 *= ((-(arr_7 [i_7])));
                        }
                    }
                }
            }
        }
        for (int i_8 = 4; i_8 < 19;i_8 += 1)
        {
            var_22 = 1;
            var_23 *= 13507;
        }
        var_24 = (((arr_18 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 4]) && (arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3])));
    }
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_31 [i_9] [i_10] = 1693;
            var_25 *= (-32767 - 1);
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_26 -= (((max(((max(var_7, var_2))), (max(552958921, var_9)))) + (-109 * 32761)));
            var_27 += max(var_2, (min((arr_27 [i_9 - 2]), ((min(var_10, 30))))));
            var_28 = (arr_28 [i_9] [i_11]);

            for (int i_12 = 1; i_12 < 24;i_12 += 1)
            {

                /* vectorizable */
                for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_29 = (16050 > -781908011);
                    var_30 = (((var_6 * var_1) * (var_3 < 63)));
                    var_31 = (552958924 ^ var_5);
                }
                for (int i_14 = 1; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    arr_44 [i_12] = (min((((var_9 & var_0) != (((max(var_0, var_8)))))), (!101)));

                    for (int i_15 = 1; i_15 < 23;i_15 += 1)
                    {
                        arr_48 [i_15 + 1] [i_15 - 1] [i_12] [i_15] [i_15 + 2] = var_5;
                        var_32 += -31;
                        arr_49 [i_12] [i_9 + 1] = (max((1 && 1965094461), ((~(161 * -11831)))));
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_33 += ((((min((((arr_43 [i_16]) <= 109)), (!var_11)))) | (-20520 && var_10)));
                        var_34 *= (((((arr_38 [i_9 - 1] [i_11] [i_12] [i_14]) ^ 235)) * ((~(-89 & var_11)))));
                        var_35 = arr_47 [i_9 + 2] [i_11] [i_11] [i_12] [i_14 + 1] [i_16] [i_16];
                        var_36 *= (max(((((max(1, var_0))) | 16535)), -118));
                        var_37 = -11831;
                    }
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_38 = (max(var_38, 52029));
                        arr_56 [i_9] [i_9] [i_11] [i_12] [i_14] [i_17] = (arr_27 [i_11]);
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        arr_60 [i_12] [i_14] [i_12] [i_11] [i_12] = (arr_59 [i_12]);
                        var_39 ^= ((-(max(524287, ((var_1 ? var_4 : -95))))));
                    }
                    var_40 ^= (max((((max(var_12, (arr_26 [i_9] [i_11]))))), ((~(var_10 <= 61959)))));
                }
                /* vectorizable */
                for (int i_19 = 1; i_19 < 22;i_19 += 1) /* same iter space */
                {
                    var_41 += (11830 | var_7);
                    var_42 = ((((((arr_52 [i_9] [i_11] [i_12 - 1] [i_19] [i_19] [i_19]) ? -53 : var_5))) >= (-88 + var_9)));
                }
                var_43 = ((-11831 | (((var_1 < var_2) | (max(781908010, 79))))));
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                var_44 = 170;
                var_45 = ((~(32 - var_3)));
            }
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                var_46 = 96;
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            arr_73 [i_21] [i_9] [i_21] |= ((~((max((arr_28 [i_11] [i_21]), (!-11941))))));
                            var_47 = -4;
                            arr_74 [i_9] [i_11] [i_21] [i_22] [i_21] = (((((max(16535, (min((arr_66 [i_9] [i_9] [i_9] [i_9]), (arr_37 [i_22]))))))) ^ (min((arr_43 [i_21]), (min(var_12, (arr_27 [i_21])))))));
                            var_48 *= ((((((!var_8) * (var_4 | var_4)))) <= (((arr_71 [i_9 + 2] [i_9] [i_9] [i_9 - 1] [i_9]) | (arr_45 [i_9 + 2] [i_9] [i_21] [i_22] [i_23])))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 25;i_24 += 1)
            {

                for (int i_25 = 2; i_25 < 22;i_25 += 1)
                {
                    var_49 = (var_6 && -19);

                    for (int i_26 = 1; i_26 < 21;i_26 += 1)
                    {
                        var_50 = (arr_47 [i_26 - 1] [i_26] [i_26 + 3] [i_26 + 1] [i_25] [i_25] [i_25 + 2]);
                        var_51 += var_9;
                        var_52 += var_2;
                    }
                }
                for (int i_27 = 2; i_27 < 24;i_27 += 1)
                {
                    var_53 = (max(var_53, ((((arr_37 [i_11]) >= (((!(arr_38 [i_9 - 2] [i_11] [i_24] [i_27 - 2])))))))));

                    for (int i_28 = 0; i_28 < 25;i_28 += 1)
                    {
                        var_54 = (arr_87 [i_27] [i_27] [i_24] [i_11] [i_27]);
                        var_55 ^= (((14672346924923190791 | var_8) <= -4));
                        var_56 = (min(var_56, 0));
                        var_57 = (max(var_57, (27661 && 241)));
                    }
                }
                for (int i_29 = 2; i_29 < 21;i_29 += 1)
                {

                    for (int i_30 = 2; i_30 < 24;i_30 += 1)
                    {
                        arr_93 [i_30] [i_11] [i_24] [i_29 - 1] [i_30] = (((((arr_84 [i_30] [i_24] [i_29] [i_30 - 1]) > -12958)) && ((((arr_86 [i_30] [i_29] [i_24] [i_11] [i_9 - 2]) * 2976)))));
                        arr_94 [i_30] [i_11] [i_24] [i_9] [i_30] = ((var_12 + (var_8 >= var_9)));
                        var_58 = (arr_32 [i_9] [i_24] [i_29 + 1]);
                    }
                    var_59 -= (-7 * var_8);

                    for (int i_31 = 3; i_31 < 22;i_31 += 1)
                    {
                        var_60 = ((~(!0)));
                        var_61 *= var_3;
                    }
                }
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 25;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 25;i_33 += 1)
                    {
                        {
                            var_62 ^= ((var_10 ^ (arr_34 [i_9 + 2] [i_32])));
                            var_63 *= ((!(arr_51 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1])));
                        }
                    }
                }
                var_64 ^= (((((var_9 ? (arr_46 [i_9] [i_11] [i_24] [i_24] [i_9]) : var_2))) ^ (arr_95 [i_24] [i_11])));
            }
        }
        /* vectorizable */
        for (int i_34 = 3; i_34 < 22;i_34 += 1)
        {
            var_65 += var_12;
            arr_105 [i_9 + 1] = var_2;
        }
        /* LoopNest 3 */
        for (int i_35 = 2; i_35 < 22;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 25;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 25;i_37 += 1)
                {
                    {
                        var_66 = (max((max(var_6, (var_2 - 16553))), 64));

                        for (int i_38 = 0; i_38 < 25;i_38 += 1)
                        {
                            var_67 = (((((49002 && (arr_63 [i_38] [i_38] [i_35] [i_35] [i_35] [i_9])))) * (-33 >= var_11)));
                            var_68 = (max((94 - 117), (arr_52 [i_35] [i_35 + 2] [i_36] [i_37] [i_38] [i_35 + 2])));
                            var_69 = (!112);
                            var_70 = (max(var_70, ((max((((-1 <= var_4) ^ (-95 + -80))), (max(((-(arr_42 [i_9] [i_36] [i_37] [i_9]))), ((max(98, (arr_63 [i_38] [i_37] [i_36] [i_36] [i_35 + 1] [i_9])))))))))));
                            var_71 = (max(var_71, (-1603132146 << var_12)));
                        }
                    }
                }
            }
        }
    }
    for (int i_39 = 0; i_39 < 13;i_39 += 1)
    {
        var_72 = (max((min(((max((arr_96 [i_39] [i_39] [i_39] [i_39] [i_39] [i_39] [i_39]), var_12))), 127)), 1182349878));
        var_73 = (min(var_73, var_3));
    }
    var_74 = var_10;
    var_75 = (min(((((var_12 & var_13) && 117))), -127));
    #pragma endscop
}
