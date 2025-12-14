/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46311
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2276828283U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = (!(((/* implicit */_Bool) 18446744073709551615ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(32505856U)));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_0 [i_0] [(unsigned char)4]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2270277113U)) ? (((/* implicit */int) (unsigned short)14406)) : (1579389268)));
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_22 = ((4294967291U) % (2024690180U));
        var_23 = ((/* implicit */signed char) arr_5 [i_1]);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_1))));
        var_25 = ((/* implicit */long long int) arr_5 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_27 += ((/* implicit */unsigned short) (short)1753);
                arr_15 [(signed char)11] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551609ULL)) && (((/* implicit */_Bool) arr_11 [i_4] [i_2]))));
                arr_16 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) arr_9 [i_4] [i_4]);
            }
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_28 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1752))) : (63ULL)));
                var_29 = ((/* implicit */unsigned long long int) var_8);
                arr_19 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) arr_8 [i_5] [i_3 + 1]);
            }
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (signed char)0))));
        }
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) & (18446744073709551615ULL)));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (1102243088) : (((/* implicit */int) (signed char)-125))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (2358545961U)))) ^ (16383LL)))));
                    var_34 = ((/* implicit */unsigned char) var_4);
                    arr_29 [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) (+(63ULL)));
                    var_35 = arr_9 [i_8] [(signed char)0];
                }
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2270277140U)) <= (34359738367LL)));
                arr_30 [i_2] [i_6 + 4] [1LL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) > (52ULL)));
            }
            for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_37 = 1936421335U;
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 11; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) (-(1936421330U)));
                            arr_39 [i_2] [i_2] [(short)8] [i_2] [i_9] [i_9] [i_2] = ((/* implicit */unsigned char) arr_13 [i_10 - 1] [i_10 - 1] [i_10 - 1] [7LL]);
                            var_39 &= ((/* implicit */unsigned int) min((4533700784351918392ULL), (18446744073709551533ULL)));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned char) arr_38 [i_2] [i_2] [i_6] [i_2] [i_2]);
        }
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 8; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_41 *= ((/* implicit */unsigned int) (~(6113194462152277564LL)));
                    var_42 = ((/* implicit */short) (~(((/* implicit */int) (short)6))));
                    var_43 += (signed char)-40;
                    arr_48 [i_12] [(unsigned short)9] [i_13] [i_12] = ((/* implicit */long long int) (signed char)9);
                    arr_49 [i_2] [i_12] [i_13 + 1] [i_14] = ((/* implicit */unsigned int) arr_42 [i_12] [i_12 + 4] [i_13 + 1]);
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    arr_53 [i_15] [9LL] [i_15] [i_12] = ((((/* implicit */_Bool) arr_35 [i_13 + 1] [(signed char)5] [0ULL] [i_12 - 1] [(signed char)5] [i_12 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (-3166192794316952514LL));
                    arr_54 [i_15] [i_12] [i_15] [i_15] = ((/* implicit */signed char) (~(7ULL)));
                }
                for (int i_16 = 3; i_16 < 9; i_16 += 2) 
                {
                    arr_58 [i_2] [i_12] [(unsigned char)10] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (6606553852104141154LL) : (-5680384763795120912LL)));
                    var_44 = ((/* implicit */long long int) (unsigned char)133);
                    /* LoopSeq 4 */
                    for (short i_17 = 1; i_17 < 11; i_17 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2270277113U)) || (((/* implicit */_Bool) (unsigned char)120))));
                        arr_61 [i_2] [i_12] [3LL] [3LL] [i_17 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1753)) ? (0U) : (((((/* implicit */_Bool) arr_23 [i_16] [i_13] [i_12] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) : (var_10)))));
                    }
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                        var_47 = var_12;
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1754))) != (18446744073709551615ULL)));
                    }
                    for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_49 = arr_55 [i_12] [i_12] [i_12] [i_12 + 1] [i_19] [i_13];
                        arr_67 [i_2] [i_2] [i_2] [i_12] [i_2] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (35747322042253312ULL) : (((/* implicit */unsigned long long int) 2049512518))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)127))));
                    }
                    for (int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        arr_71 [i_12] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_9 [i_20] [i_16])))) > ((~(-1185340072)))));
                        var_50 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_16] [i_16] [0LL] [i_16] [i_2] [11ULL]))) & (-4818828305993879191LL)))) + (7ULL)));
                    }
                    arr_72 [i_2] [i_2] [i_13] [i_12] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_13 + 1] [i_12] [i_13 + 1] [i_16] [i_2])) ? (2147483640) : (((/* implicit */int) (unsigned char)0))));
                }
                var_51 = ((/* implicit */unsigned short) ((4818828305993879170LL) ^ (((/* implicit */long long int) 2358545961U))));
                var_52 = ((/* implicit */int) var_17);
            }
            for (unsigned short i_21 = 2; i_21 < 11; i_21 += 1) 
            {
                var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28286)) ? (8735041467751664555LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1759))))))));
                var_54 = arr_9 [i_2] [i_21];
            }
            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                var_55 = ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) (unsigned char)0)));
                arr_78 [i_2] [i_12] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)32767)))) : (((((/* implicit */_Bool) (signed char)-2)) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))));
            }
            var_56 = ((/* implicit */unsigned char) arr_5 [i_12 + 3]);
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 12; i_23 += 3) 
            {
                for (unsigned int i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    {
                        var_57 = ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) << (((((/* implicit */int) (short)1753)) - (1743)))))) : (-6931847046827434133LL));
                        arr_84 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4818828305993879174LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)201))));
                        var_58 = (+(arr_34 [i_2] [i_12] [i_12] [i_24]));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (long long int i_25 = 0; i_25 < 12; i_25 += 4) /* same iter space */
        {
            arr_87 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_76 [i_25] [i_25] [i_25])) ? (((((/* implicit */_Bool) (signed char)122)) ? (-4818828305993879197LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) 1936421334U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32749)))));
            var_59 *= ((/* implicit */short) arr_32 [(short)9] [i_25]);
            arr_88 [i_2] [i_2] [i_25] = ((/* implicit */short) arr_12 [i_25] [i_25]);
            arr_89 [i_25] = ((/* implicit */signed char) (+((-((-(arr_31 [i_25] [i_2] [i_2] [i_2])))))));
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 12; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    {
                        arr_97 [i_2] [(unsigned short)2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (signed char)122);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 1) 
                        {
                            arr_102 [i_25] [i_25] [i_25] [(signed char)6] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) arr_51 [0ULL] [i_25] [0ULL] [0ULL]);
                            var_60 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((363456912U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) <= (((min((var_14), (((/* implicit */long long int) -2140292517)))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)34)))))));
                            var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) && (((/* implicit */_Bool) 17626734863379997545ULL))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_30 = 2; i_30 < 11; i_30 += 4) 
            {
                for (unsigned char i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    {
                        arr_111 [i_2] [i_2] [i_2] [i_2] [(unsigned char)5] [(unsigned short)10] = ((/* implicit */signed char) 16999862194038347577ULL);
                        /* LoopSeq 2 */
                        for (short i_32 = 0; i_32 < 12; i_32 += 2) 
                        {
                            var_62 = ((/* implicit */short) arr_91 [i_2] [i_29] [5ULL]);
                            arr_114 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) 536870880)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)4095))));
                            var_63 = ((/* implicit */short) ((int) arr_59 [i_29] [i_31] [i_31] [i_30] [i_29] [i_29]));
                            var_64 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65382))));
                        }
                        /* vectorizable */
                        for (unsigned short i_33 = 0; i_33 < 12; i_33 += 2) 
                        {
                            var_65 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14388)) ? (((/* implicit */long long int) 3681467293U)) : (((((/* implicit */_Bool) (short)-5224)) ? (((/* implicit */long long int) 4177920)) : (9010602781607426368LL)))));
                            var_66 = ((/* implicit */unsigned char) min((var_66), (((/* implicit */unsigned char) arr_108 [i_2] [i_29] [i_31] [i_33]))));
                            var_67 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5224))) != (4294967295U)));
                            arr_118 [(short)10] [i_29] [i_29] [10] [(signed char)4] [i_29] [(signed char)4] = ((/* implicit */unsigned char) (+((+(4294967276U)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_34 = 2; i_34 < 10; i_34 += 3) 
            {
                for (unsigned long long int i_35 = 0; i_35 < 12; i_35 += 3) 
                {
                    {
                        var_68 |= ((((((/* implicit */_Bool) 3793628313U)) ? (((/* implicit */int) var_17)) : (1481270897))) * (((/* implicit */int) (short)-4090)));
                        var_69 = ((/* implicit */unsigned long long int) arr_32 [(unsigned char)2] [i_2]);
                        arr_124 [i_35] [i_34] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(4177930)))), (((((/* implicit */_Bool) arr_98 [i_35] [i_34 - 2] [i_34 + 1] [i_34 - 2] [i_34 + 2])) ? (arr_98 [(unsigned char)11] [i_34 + 1] [i_34 + 1] [i_34 - 1] [i_34 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))))));
                        var_70 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) (signed char)127))));
                        arr_125 [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_35] [i_34] [i_29] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) : (10194625216324803367ULL)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_36 = 2; i_36 < 10; i_36 += 4) 
        {
            arr_128 [i_2] [i_2] = ((/* implicit */unsigned short) ((7ULL) / (((/* implicit */unsigned long long int) -1903639283))));
            arr_129 [i_2] [i_2] [i_36] = ((/* implicit */short) (~(((((/* implicit */_Bool) -8304541618463157930LL)) ? (910360762U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))));
            var_71 = ((/* implicit */int) ((820009210329554071ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65509)))));
            var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (short)-4090))));
        }
        /* vectorizable */
        for (unsigned int i_37 = 2; i_37 < 10; i_37 += 2) 
        {
            arr_132 [i_2] [i_37 - 1] [i_2] = (~(18446744073709551608ULL));
            arr_133 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)19)) ? ((~(7489435553252264451ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1830376041)) || (((/* implicit */_Bool) (signed char)114))))))));
            arr_134 [i_37] [i_2] [i_2] = arr_112 [i_2] [i_2] [i_2] [i_2] [i_2];
            var_73 -= ((/* implicit */unsigned long long int) ((3681467319U) >> (((142989288169013248LL) - (142989288169013223LL)))));
        }
    }
    var_74 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)1));
    /* LoopNest 2 */
    for (long long int i_38 = 0; i_38 < 22; i_38 += 1) 
    {
        for (long long int i_39 = 0; i_39 < 22; i_39 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_40 = 0; i_40 < 22; i_40 += 4) 
                {
                    for (short i_41 = 2; i_41 < 20; i_41 += 1) 
                    {
                        for (unsigned int i_42 = 0; i_42 < 22; i_42 += 2) 
                        {
                            {
                                var_75 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)64)), (min((10957308520457287186ULL), (((/* implicit */unsigned long long int) 1628871304U))))));
                                arr_147 [i_38] [i_38] [i_38] [i_38] [i_39] [i_38] [i_38] = ((/* implicit */unsigned char) var_9);
                                var_76 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (-7313776653802003810LL)));
                            }
                        } 
                    } 
                } 
                var_77 = ((/* implicit */unsigned int) min((var_77), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65512)))))));
                arr_148 [i_39] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) | (1359751594U)));
            }
        } 
    } 
}
