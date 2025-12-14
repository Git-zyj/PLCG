/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50301
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (short)32752);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(var_10))))));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-18545))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [(unsigned short)8] |= ((/* implicit */short) (_Bool)1);
                        var_17 = ((/* implicit */short) (+(arr_10 [(_Bool)1] [i_1 + 2] [i_1 - 2] [i_1 - 2])));
                        var_18 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18524))) * (var_11)))));
                        var_19 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_1 [i_1])))))));
                    }
                } 
            } 
        }
        for (short i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) var_13)) << (((((17308845978648877389ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (17308845978648877410ULL)))));
            arr_16 [i_4] [i_4] [4LL] = arr_0 [i_0] [(signed char)3];
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)-14955)) ^ (((/* implicit */int) var_14))))));
            arr_20 [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_5])) % (((/* implicit */int) arr_18 [i_0] [i_0]))));
            arr_21 [i_0] [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)17356))))) ? (((/* implicit */int) (unsigned short)55671)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)55671)) : (((/* implicit */int) (short)18545))))));
            var_21 = ((/* implicit */long long int) (signed char)30);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) (((+(((/* implicit */int) var_3)))) < (((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                arr_29 [(_Bool)0] [(signed char)1] [i_6] [12U] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) / (832215428U)));
                arr_30 [(_Bool)1] &= ((/* implicit */unsigned int) var_5);
            }
        }
        var_23 = ((/* implicit */signed char) ((7017318665389564769ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (short)32767)))))));
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_24 = ((/* implicit */short) min(((!(((((/* implicit */_Bool) (short)-14955)) || (((/* implicit */_Bool) 15707189325176339295ULL)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (15707189325176339295ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14961)))))));
        var_25 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 3684266778U)), (7173264761019182195ULL)));
    }
    var_26 = min((((/* implicit */short) ((135852087U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (var_12));
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 10; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    arr_44 [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) (+(11429425408319986847ULL))));
                    arr_45 [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (signed char i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                {
                    arr_49 [i_9] [(unsigned char)11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7393436114341303989LL)) ? (4500762718225335094LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)18558))))) > (((/* implicit */int) (short)-29944))))))));
                    var_27 *= ((/* implicit */short) min((((((/* implicit */_Bool) min(((unsigned short)41567), (((/* implicit */unsigned short) var_3))))) ? (((15U) * (2722070465U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)24857)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((/* implicit */int) var_15)))))));
                    var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)20412)) || (((/* implicit */_Bool) (signed char)-11))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)7890)), (((arr_15 [i_9 + 2] [i_10 + 3] [i_14 + 2]) + (var_11)))));
                                var_30 += ((/* implicit */long long int) ((min((((0ULL) * (((/* implicit */unsigned long long int) 4U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)17068))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((9U) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((11429425408319986846ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))))));
                                var_31 = ((/* implicit */short) ((var_2) * (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_18 [i_9] [i_9])))) : (((/* implicit */int) (unsigned short)48197)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 4; i_15 < 11; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 3; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + ((~(((unsigned int) var_0))))));
                                arr_61 [i_9] [i_10] [i_10] [i_15] [i_16 + 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((19ULL) <= (18446744073709551596ULL))))) * (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65518))))), (var_2)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned int) arr_27 [i_9 - 1] [i_9 - 1] [i_10 - 1] [i_10 + 3])))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_68 [(short)7] [i_17] [i_10] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_18] [i_17] [i_9] [i_9])) ? (((4294967291U) + (4294967272U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (9223372036854775788LL)))))));
                        arr_69 [i_10] [7ULL] [i_17] [(unsigned short)6] [i_10] [i_10] = ((/* implicit */unsigned short) var_13);
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_11))));
                        var_36 += ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_4))));
                        var_37 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_33 [i_18]))));
                    }
                    var_38 += ((/* implicit */unsigned long long int) var_8);
                }
                var_39 |= ((2722070465U) > (2158698760U));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        {
                            arr_76 [i_9] [i_19] [i_10] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10 + 3] [i_10 + 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min(((short)-4662), (((/* implicit */short) (_Bool)0))))))), ((~(((/* implicit */int) ((7017318665389564791ULL) >= (11576871781159485458ULL))))))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) << ((((~(((/* implicit */int) (short)14087)))) + (14100)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 1; i_21 < 11; i_21 += 2) 
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32756)) * (((/* implicit */int) (short)-2343))))), (4U)))))));
                    arr_80 [i_10] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((short) var_12))) / (((/* implicit */int) var_7)))), (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 3; i_22 < 10; i_22 += 1) 
                    {
                        for (signed char i_23 = 1; i_23 < 10; i_23 += 1) 
                        {
                            {
                                arr_86 [i_9] [i_10] [i_21 - 1] [i_22] [i_22] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) 576459652791795712LL)), (6ULL))));
                                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2722070465U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15309))) : (arr_40 [i_9] [i_21 + 2] [i_21 + 1]))))))));
                                var_43 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_22 - 1] [i_10 + 2]))) + (2638957342U)))) ? (((arr_70 [i_10 + 3] [i_21 + 1]) ? (((/* implicit */int) arr_70 [i_9 + 2] [i_9])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((var_15), ((signed char)-1))))));
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_2))));
                                var_45 ^= ((/* implicit */signed char) ((_Bool) ((var_11) % (((/* implicit */unsigned long long int) arr_28 [(unsigned short)12] [i_21] [i_22 - 2] [i_23 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_24 = 0; i_24 < 13; i_24 += 1) 
                    {
                        var_46 += (!(((((/* implicit */_Bool) max(((short)24875), (((/* implicit */short) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)24853))) + (var_2)))))));
                        var_47 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4294967290U)) ? (arr_36 [i_9 + 1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3550882578U)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_48 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-27683))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 1572896831U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-33))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_9 [(signed char)14] [(signed char)14] [i_9])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                            arr_94 [i_10] [i_10] [(_Bool)1] [i_10] [i_10] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) -952207225181573349LL)))));
                            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) min(((((((_Bool)1) ? (((/* implicit */int) arr_34 [i_9])) : (((/* implicit */int) var_10)))) + (((/* implicit */int) (short)-32752)))), ((((-(((/* implicit */int) (short)-24844)))) - ((-(-1))))))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        arr_99 [i_26] [i_10] [9U] [i_10] [i_9] = ((/* implicit */short) (+(arr_75 [i_9] [i_10] [i_21] [i_10])));
                        arr_100 [i_10] [i_10] [i_10] [i_10] [i_10] [i_26] = ((/* implicit */_Bool) 3695281850036715072ULL);
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)14870)) > (((/* implicit */int) (unsigned short)4096))))) < (((/* implicit */int) (!((_Bool)1))))));
                    }
                }
                /* vectorizable */
                for (short i_27 = 0; i_27 < 13; i_27 += 4) 
                {
                    arr_103 [i_10] [i_10] [i_10] [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (18446744073709551615ULL)))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)2343)))) : (((/* implicit */int) var_4))));
                    arr_104 [i_10] = ((/* implicit */unsigned int) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2353)))));
                    /* LoopSeq 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */unsigned long long int) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_108 [i_27] [i_27] [i_27] [i_27] |= (_Bool)1;
                        var_52 -= ((/* implicit */_Bool) var_15);
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_30 = 0; i_30 < 13; i_30 += 1) /* same iter space */
                        {
                            arr_115 [(signed char)3] [i_10 - 1] [(signed char)1] [(signed char)1] [i_10] [i_29] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [i_9 + 3] [i_10])) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [4] [4] [i_10])))));
                            var_53 += ((/* implicit */signed char) arr_17 [i_9 - 1] [i_9 - 1] [(_Bool)1]);
                            arr_116 [i_10] [i_29] [i_10] = ((/* implicit */unsigned int) (short)-6374);
                            arr_117 [i_10] [(short)11] [i_10] [i_10] = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)-24877)) || (((/* implicit */_Bool) (short)5026))))));
                        }
                        for (unsigned int i_31 = 0; i_31 < 13; i_31 += 1) /* same iter space */
                        {
                            arr_120 [i_10] [i_29] [i_27] [i_10 + 3] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_11) << (((((/* implicit */int) (short)-17796)) + (17832))))))));
                            arr_121 [i_9] [i_27] [i_27] [i_29] [i_31] [i_31] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_74 [i_9] [i_27] [i_27] [i_29] [i_10])) ? (((/* implicit */int) (short)-13040)) : (((/* implicit */int) (signed char)90))))));
                        }
                        for (unsigned int i_32 = 0; i_32 < 13; i_32 += 1) /* same iter space */
                        {
                            arr_126 [(_Bool)1] [i_10 - 1] [i_27] [i_27] [i_27] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967271U)) || (((/* implicit */_Bool) -1187828420642387151LL))));
                            var_54 = ((/* implicit */_Bool) 134217712U);
                        }
                        for (long long int i_33 = 1; i_33 < 12; i_33 += 3) 
                        {
                            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-24875))))) ? (((288230341791973376LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37891))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))));
                            var_56 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) -1816224574)))))) : (arr_79 [i_9 + 1] [i_9 + 1] [i_29])));
                            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)8)) && (((/* implicit */_Bool) (short)-12451)))))));
                            arr_129 [i_9 + 2] [i_10] [i_10] [i_29] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)237)) ? (arr_10 [i_27] [i_29] [i_27] [i_29]) : (-1LL)));
                        }
                        arr_130 [i_10] [i_27] [12ULL] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)64))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_34 = 3; i_34 < 12; i_34 += 1) 
                    {
                        for (signed char i_35 = 4; i_35 < 12; i_35 += 2) 
                        {
                            {
                                var_58 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                arr_137 [i_27] [i_34] &= ((/* implicit */long long int) ((arr_119 [i_10 - 1]) != (((/* implicit */int) (unsigned char)111))));
                                arr_138 [i_10] [(short)8] [(signed char)1] [i_27] [i_10 + 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)6374)) - (((/* implicit */int) (unsigned char)92))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_36 = 0; i_36 < 13; i_36 += 2) 
                    {
                        arr_141 [i_9] [(short)8] [i_27] [i_10] = ((/* implicit */long long int) var_5);
                        arr_142 [i_9] [i_10 - 1] [i_10] [i_36] = ((/* implicit */long long int) (signed char)(-127 - 1));
                    }
                    for (unsigned char i_37 = 1; i_37 < 12; i_37 += 3) 
                    {
                        var_59 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11005968732011688718ULL)) ? (((/* implicit */int) (short)-6374)) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101))))) : (((/* implicit */int) (unsigned char)254))));
                        arr_145 [(_Bool)1] [i_10] [i_27] [i_37] = ((/* implicit */long long int) arr_58 [i_9 + 3] [i_10 - 1] [i_10]);
                    }
                }
                arr_146 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)59321), (((/* implicit */unsigned short) var_4)))))))) ? (((((/* implicit */_Bool) arr_134 [i_10 + 1] [i_9] [i_9 - 1] [i_9 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3577))) : (arr_134 [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) (signed char)-25)) / (((/* implicit */int) (signed char)-113)))))))));
            }
        } 
    } 
}
