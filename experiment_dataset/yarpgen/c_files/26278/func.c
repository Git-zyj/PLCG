/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26278
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
    var_20 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0]))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_11 [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) / (var_17)))) ? (var_9) : (((/* implicit */unsigned long long int) 3981141359U)));
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (var_7) : ((-(3981141359U)))));
                }
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 313825955U))))))))));
                                var_24 = ((/* implicit */_Bool) var_17);
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned short) ((3981141353U) ^ (3981141363U)));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (((((/* implicit */_Bool) 1667645768U)) ? (12541142748614123231ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1 - 4] [i_1 - 4]))))));
                                arr_23 [i_0] [i_1 - 1] [i_3] [i_7] = ((/* implicit */signed char) (unsigned char)98);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_21 [i_0] [i_1 - 3] [i_3] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */int) arr_2 [i_0]))));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [7U]))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        arr_30 [i_9 - 1] [i_9] [i_9] [i_0] = ((/* implicit */int) var_8);
                        arr_31 [i_9 + 3] [i_9] [i_9] [i_0] = (+((+(arr_28 [i_1 - 4] [i_3]))));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_29 ^= ((/* implicit */_Bool) ((((arr_6 [i_9 + 2] [i_9 + 3] [i_9 + 3]) + (2147483647))) >> (((arr_6 [i_9 + 2] [i_9 + 2] [i_9 + 2]) + (202816825)))));
                            var_30 = ((/* implicit */int) max((var_30), (((int) arr_2 [i_0]))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_31 |= ((/* implicit */unsigned int) (~((-(18446744073709551605ULL)))));
                            arr_36 [i_9] = ((/* implicit */signed char) (-((~(arr_3 [i_0])))));
                            var_32 = ((/* implicit */unsigned short) (unsigned char)53);
                            var_33 -= ((/* implicit */unsigned long long int) ((313825930U) % (2469546461U)));
                        }
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            arr_39 [i_0] [i_1 - 3] [i_9 - 1] [i_9] [i_9] [i_1] [i_9] = ((/* implicit */unsigned char) arr_0 [i_3]);
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1667645783U)))))));
                        }
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_3] [i_1] [i_1] [i_9] [2LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15065288050766947712ULL))))) : ((-(arr_22 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] = (+(arr_22 [i_0] [i_0]));
                        var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2627321541U)) ? (1667645768U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7207)))));
                        var_37 -= ((/* implicit */long long int) 313825911U);
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (-((~(var_7))))))));
                        arr_44 [i_1 - 3] [i_1 - 3] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 4269824308539656706ULL)) ? (12143277078793460494ULL) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5905601325095428385ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (var_15)))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) var_5);
                        /* LoopSeq 2 */
                        for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
                        {
                            var_40 *= ((/* implicit */int) ((((((/* implicit */int) (unsigned char)229)) == (((/* implicit */int) (unsigned short)37581)))) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) >= (313825949U)))));
                            arr_51 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37581)) || (((/* implicit */_Bool) 5905601325095428385ULL))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_17 [i_0] [i_0] [i_3] [(unsigned char)12] [i_14]))));
                            arr_52 [i_0] [i_14] [i_14] [i_14] [17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12541142748614123242ULL)))) ? (((((/* implicit */_Bool) 4269824308539656706ULL)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) (unsigned short)18)));
                        }
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            arr_55 [i_0] [i_1 + 1] [i_3] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1873652943))));
                            var_42 -= ((/* implicit */unsigned int) var_0);
                            var_43 -= ((/* implicit */unsigned long long int) (-(313825937U)));
                            var_44 = ((/* implicit */unsigned char) min(((-(arr_25 [i_3] [i_3] [i_3] [i_1 + 1]))), (((/* implicit */int) arr_53 [(unsigned short)2] [i_3]))));
                            arr_56 [i_1] |= ((/* implicit */unsigned int) (~(arr_35 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 - 4] [i_1] [i_1])));
                        }
                    }
                }
                for (long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    var_45 ^= ((/* implicit */signed char) (+(min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (arr_54 [i_17] [i_1])))), ((+(8967939450280695657LL)))))));
                    var_46 = ((/* implicit */_Bool) (((_Bool)1) ? (3308939182U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43)))));
                    var_47 = ((/* implicit */unsigned char) var_4);
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                var_48 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4269824308539656735ULL)) ? (4269824308539656733ULL) : (((/* implicit */unsigned long long int) arr_28 [i_1 + 2] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) 2134009020)) : (12541142748614123236ULL)));
                                arr_63 [i_19] [i_18] [i_18] [i_17] [i_0] [i_0] [i_0] = (+(((unsigned int) (unsigned short)4)));
                                arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) (~((-(3869527115U)))));
                                arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_19);
                                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (unsigned short)6))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    arr_69 [i_0] [i_20] [i_20] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -954500961))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_21 = 2; i_21 < 15; i_21 += 4) 
                    {
                        var_50 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2627321525U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))) : (var_8))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 2) 
                        {
                            arr_75 [i_0] [3] [i_20] [3] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_54 [i_0] [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2627321525U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_1] [2])))))))));
                            arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(511U)));
                        }
                        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
                        {
                            arr_79 [i_0] [i_1] [i_0] [i_0] [i_23] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) % ((-(((/* implicit */int) arr_57 [i_0] [i_21 - 2] [i_23]))))));
                            arr_80 [i_0] [i_1 - 4] [i_20] [i_21] [(unsigned short)10] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (12541142748614123250ULL)));
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_37 [14ULL] [i_1 - 1] [i_20] [i_20] [i_20] [i_0] [i_0]);
                            var_51 = ((/* implicit */unsigned char) (+(4269824308539656733ULL)));
                        }
                        for (unsigned short i_24 = 0; i_24 < 18; i_24 += 2) /* same iter space */
                        {
                            var_52 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4))));
                            arr_86 [i_1 + 2] [i_20] [(unsigned short)7] |= ((/* implicit */long long int) ((2627321525U) * (313825950U)));
                        }
                        for (unsigned short i_25 = 0; i_25 < 18; i_25 += 2) /* same iter space */
                        {
                            arr_89 [i_0] [i_1] [i_20] [i_21] [i_25] = ((/* implicit */long long int) arr_21 [i_0] [i_1 - 2] [i_21 + 1] [i_25]);
                            var_53 = ((/* implicit */int) ((((/* implicit */_Bool) arr_77 [i_1] [i_25])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 618394457U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1471))) : (3367740614U)))));
                            var_54 = ((/* implicit */unsigned long long int) min((var_54), (4269824308539656727ULL)));
                        }
                        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (~(((18ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (var_4)));
                        arr_90 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_49 [i_0] [12LL] [i_20]);
                    }
                    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        var_57 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_26]);
                        arr_94 [i_0] [i_0] [i_20] = ((/* implicit */signed char) ((((18446744073709551608ULL) % (((/* implicit */unsigned long long int) (+(4294967274U)))))) >> (((((long long int) min((((/* implicit */unsigned short) var_12)), (var_13)))) - (1725LL)))));
                    }
                    arr_95 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0])))))))));
                    arr_96 [i_0] |= arr_0 [i_0];
                }
                arr_97 [i_0] [(_Bool)1] = (~(max((((/* implicit */int) (signed char)-119)), (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_84 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)16)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_27 = 0; i_27 < 22; i_27 += 4) 
    {
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 22; i_28 += 4) 
        {
            for (unsigned short i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_31 = 1; i_31 < 21; i_31 += 4) 
                        {
                            var_58 = ((14176919765169894891ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))));
                            arr_110 [i_27] [i_28] [i_28] [i_30] [i_30] = ((/* implicit */_Bool) arr_103 [i_27] [i_28] [i_29]);
                        }
                        /* LoopSeq 3 */
                        for (int i_32 = 1; i_32 < 20; i_32 += 4) 
                        {
                            var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_7))) & (((/* implicit */unsigned int) (-(arr_102 [i_30]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) + (((/* implicit */int) (unsigned char)204))))) : (min((((/* implicit */unsigned long long int) arr_98 [i_32 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) ^ (14176919765169894889ULL)))))));
                            var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) (~(var_9))))));
                        }
                        for (signed char i_33 = 2; i_33 < 21; i_33 += 4) 
                        {
                            arr_117 [i_27] [0] [0] [0] [i_30] [i_33 + 1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_114 [i_33 - 2] [i_28] [i_30] [i_30] [17] [i_27]), (arr_114 [i_33 + 1] [i_29] [i_29] [i_33] [i_33] [i_33 - 2])))), (min((((unsigned long long int) (unsigned short)29562)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_27] [i_27] [i_29]))) : (var_8)))))));
                            var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) 2147483647))));
                            var_62 &= ((/* implicit */signed char) (-(-6778734123607126080LL)));
                            arr_118 [i_28] [i_30] = ((/* implicit */unsigned char) var_9);
                        }
                        for (int i_34 = 0; i_34 < 22; i_34 += 1) 
                        {
                            arr_121 [i_27] [i_28] [i_29] [i_30] [i_34] = (+(((((/* implicit */_Bool) arr_109 [i_29] [i_28] [10ULL] [i_28] [i_34] [2ULL])) ? (((/* implicit */unsigned long long int) var_14)) : (13133167520901751756ULL))));
                            arr_122 [i_30] [i_28] [i_29] [i_29] [i_34] = ((/* implicit */signed char) ((((/* implicit */int) arr_109 [i_27] [10U] [i_29] [i_30] [i_30] [i_34])) > (((/* implicit */int) (unsigned char)215))));
                            arr_123 [14U] [i_28] [14U] [i_30] [(signed char)17] [i_34] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 422061327)) ? (arr_116 [i_27] [i_27] [i_27] [i_27]) : (((/* implicit */unsigned long long int) arr_101 [i_27]))))))))) ^ (arr_101 [i_28])));
                            arr_124 [i_30] = ((/* implicit */signed char) arr_112 [i_27] [i_27] [i_28] [i_29] [i_28] [i_34] [i_34]);
                        }
                        var_63 = ((/* implicit */signed char) ((arr_116 [i_27] [i_28] [i_27] [i_27]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_115 [i_30])) > (((/* implicit */int) var_2))))))));
                        var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)35973)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_101 [i_27]) : (var_7)))) ? (((/* implicit */int) ((arr_119 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_115 [i_28])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)65535)))))))))));
                        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)37121)) < (((/* implicit */int) arr_107 [i_27] [i_27] [i_29] [i_30])))))))) != (min((var_9), (((/* implicit */unsigned long long int) (-(var_0)))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_35 = 0; i_35 < 22; i_35 += 4) 
                    {
                        var_66 = ((/* implicit */unsigned long long int) arr_104 [i_27] [i_29] [i_29]);
                        var_67 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15200))));
                    }
                    var_68 = 888298463;
                    /* LoopSeq 1 */
                    for (unsigned int i_36 = 4; i_36 < 21; i_36 += 4) 
                    {
                        arr_130 [i_27] [i_27] [i_27] [i_28] [1U] [i_36 - 1] = ((/* implicit */unsigned short) ((-1660513822) % (((/* implicit */int) (unsigned char)126))));
                        var_69 *= ((/* implicit */unsigned char) (-((~(min((((/* implicit */long long int) (_Bool)1)), (var_15)))))));
                    }
                    var_70 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_19)) || ((!(((/* implicit */_Bool) var_0)))))), (((((_Bool) arr_100 [i_29])) || (((/* implicit */_Bool) var_8))))));
                }
            } 
        } 
        var_71 = ((/* implicit */unsigned short) ((signed char) var_10));
        var_72 = min(((unsigned short)12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)65519), ((unsigned short)29561)))) || (((/* implicit */_Bool) arr_102 [i_27]))))));
        var_73 = ((/* implicit */_Bool) min((var_73), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((((/* implicit */_Bool) arr_102 [(signed char)6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_102 [i_27])) : (var_19)))) : (((unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))))))));
    }
    var_74 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65529)) + (((/* implicit */int) (unsigned short)29570)))) + ((-(((/* implicit */int) (unsigned char)183))))))), (var_19)));
}
