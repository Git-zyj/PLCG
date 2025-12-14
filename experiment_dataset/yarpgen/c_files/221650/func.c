/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221650
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(2189873552U)))) / ((((_Bool)1) ? (((/* implicit */long long int) max((2189873538U), (((/* implicit */unsigned int) (signed char)-1))))) : (((((/* implicit */_Bool) -8731077142991745480LL)) ? (((/* implicit */long long int) -121653590)) : (9223372036854775807LL)))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-21)))) ? ((~((~(8751153340846197988ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15778202339526278449ULL)) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (2189873556U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) ^ (((/* implicit */int) (_Bool)1)))))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((!(((/* implicit */_Bool) -2049810037)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)30720))))) : (((((/* implicit */_Bool) 5885298088749375335LL)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))))))));
            arr_11 [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (3590497557531187132ULL))) >> (((max((((unsigned long long int) (unsigned char)100)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)24)) < (((/* implicit */int) (unsigned short)8407))))))) - (83ULL)))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_9))));
        }
        arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])) : (67106816LL))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (arr_2 [i_0])))))) ? (2147483647LL) : ((((_Bool)1) ? (min((((/* implicit */long long int) (short)0)), (5885298088749375327LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_22 *= ((/* implicit */short) min((1U), (0U)));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(arr_7 [i_5]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)121)))))))) ? (((((/* implicit */unsigned long long int) (-(var_3)))) ^ (arr_8 [i_5] [i_5] [i_4]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) 100637730U)) + (var_3))), (((/* implicit */long long int) var_14)))))));
            arr_19 [i_4] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)-15126)) : (-970227078)))))));
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_22 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((16249886521919730949ULL) * (4194303ULL)));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((3404976166684113157ULL) ^ (((/* implicit */unsigned long long int) (~(var_7)))))))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 5U))));
                arr_27 [i_4] [i_4] [i_5] [i_7] = ((/* implicit */short) 4ULL);
                arr_28 [i_4] [i_5] [i_7] = ((((/* implicit */_Bool) arr_9 [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) : (arr_9 [i_7 + 1] [i_7 + 1] [i_7 + 1]));
                var_25 = ((/* implicit */short) var_3);
                var_26 = ((/* implicit */short) ((arr_3 [i_7 + 1]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 + 1])))));
            }
            for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((7U) | (3402809301U)))) && (((/* implicit */_Bool) (~(2313550796U)))))) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) ((((/* implicit */int) (signed char)53)) != (((/* implicit */int) arr_16 [i_4]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_34 [i_4] [i_9] [i_8] [i_4] = ((/* implicit */signed char) (~(((766999154U) % (((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4]))))));
                    arr_35 [i_8] = ((/* implicit */signed char) (~((~(766999161U)))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    arr_38 [i_4] [i_4] [i_4] [i_8] [i_8 - 1] [i_4] = ((/* implicit */unsigned int) ((-728957387) + (((/* implicit */int) (short)29385))));
                    var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-13))))), ((+(-5885298088749375335LL)))));
                }
                arr_39 [i_4] [i_8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) ^ (var_1)));
            }
            /* vectorizable */
            for (short i_11 = 2; i_11 < 19; i_11 += 1) 
            {
                var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_17 [i_11 - 2] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 5U)))))));
                arr_42 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (((+(9488747682222350415ULL))) == (((/* implicit */unsigned long long int) 0U))));
                var_30 = (-((+(4294967291U))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    arr_45 [i_5] [i_5] [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 100637730U)) ? (((/* implicit */unsigned int) -855585339)) : (3973508849U)))));
                    arr_46 [i_4] = ((/* implicit */int) var_5);
                }
            }
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                var_31 += ((((((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_5])), (var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) : (((/* implicit */int) ((-440819727) == (((/* implicit */int) arr_49 [i_4] [i_4] [i_4]))))))) * (((/* implicit */int) (_Bool)1)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_5]))))) ? (((((/* implicit */int) (unsigned char)58)) >> (((((/* implicit */int) (unsigned char)83)) - (65))))) : (((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_56 [i_4] [i_5] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-2147483658LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))) : (9488747682222350414ULL))) : (var_1)));
                        var_33 = ((/* implicit */_Bool) (-(arr_44 [i_4] [i_14] [i_13] [i_14])));
                        var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1440))) : (3402809300U)))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1026312620)) ? (10627582562607598387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_59 [i_4] [i_5] [i_13] [i_14] = arr_48 [i_16] [i_5] [i_5] [i_4];
                        arr_60 [i_4] [i_4] [i_4] [i_4] [i_14] [i_16] = ((/* implicit */short) arr_8 [i_14] [i_14] [i_14]);
                    }
                    for (unsigned int i_17 = 2; i_17 < 17; i_17 += 1) 
                    {
                        arr_63 [i_17] = ((/* implicit */int) arr_61 [i_17 + 2] [i_5] [i_13] [i_14] [i_17]);
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((unsigned int) (unsigned short)56482)))));
                        arr_64 [i_13] [i_13] [i_13] [i_14] [i_17] &= ((/* implicit */unsigned short) 1852627533954001216LL);
                        arr_65 [i_14] [i_14] [i_17] [i_14] [i_17 + 2] = (-((+(((/* implicit */int) arr_0 [i_5])))));
                        var_37 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) (unsigned char)12)));
                    }
                }
                for (unsigned int i_18 = 1; i_18 < 19; i_18 += 1) 
                {
                    arr_68 [i_18] [i_18] [i_18] [i_4] = ((/* implicit */unsigned short) var_17);
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((3402809305U) << (((((((/* implicit */_Bool) 5289321889617989417ULL)) ? (9488747682222350400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_5] [i_18 - 1]))))) - (9488747682222350389ULL)))))));
                    var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3968297775U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21601))) : (803117622U))), (((4194329560U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        {
                            arr_75 [i_4] [i_4] [i_4] [i_4] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_5] [i_20]) ? (((/* implicit */unsigned long long int) 8589934591LL)) : (8957996391487201204ULL)))) ? (1458001405753636551LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7819161511101953230ULL))))))));
                            arr_76 [i_4] [i_4] [i_19] [i_19] [i_20] [i_21] = ((/* implicit */short) (~(min((((/* implicit */long long int) 0U)), (var_10)))));
                            var_40 = ((/* implicit */int) -6555610262737807237LL);
                            arr_77 [i_21] = min((((((/* implicit */_Bool) max((var_3), (arr_2 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_4] [i_21] [i_19] [i_19] [i_21] [i_4] [i_20]))) : ((-(18446744073709551601ULL))))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((!(((/* implicit */_Bool) -199727157))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_22 = 0; i_22 < 20; i_22 += 2) 
        {
            arr_81 [i_4] [i_22] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -23LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_44 [i_4] [i_4] [i_4] [i_4])));
            arr_82 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_22] [i_22] [i_22])) ? ((~(var_2))) : ((~(arr_31 [i_4] [i_22] [i_4] [i_4])))));
            var_41 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_48 [i_22] [i_4] [i_4] [i_4])))) <= (((/* implicit */int) (signed char)63))));
            arr_83 [i_4] [i_22] [i_22] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 2; i_23 < 18; i_23 += 2) 
        {
            for (unsigned long long int i_24 = 4; i_24 < 19; i_24 += 4) 
            {
                {
                    arr_91 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (7819161511101953229ULL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        arr_94 [i_4] [i_25] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-12139))) == (4230269333093375891LL))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 4142548830U)) ? (1274612954) : (((/* implicit */int) (signed char)11))))));
                        /* LoopSeq 4 */
                        for (long long int i_26 = 2; i_26 < 18; i_26 += 4) 
                        {
                            var_42 = ((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_23 - 1] [i_23 - 2] [i_24 - 3] [i_26 + 2] [i_26 + 1])))));
                            var_43 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (short)15)) + (var_16))));
                        }
                        for (unsigned int i_27 = 4; i_27 < 18; i_27 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (short)15353))));
                            arr_100 [i_25] [i_25] [i_25] [i_25] [i_27] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((-3LL) + (9223372036854775807LL))) >> (((var_15) - (5517292040261516645ULL))))))));
                            arr_101 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_57 [i_25] [i_23 - 1] [i_27 - 4] [i_25] [i_24 - 2]) : (arr_57 [i_24 - 4] [i_23 - 2] [i_27 - 2] [i_24 - 4] [i_24 + 1])));
                            arr_102 [i_4] [i_4] [i_4] [i_25] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_9)))) : (((((/* implicit */_Bool) arr_54 [i_24 - 1] [i_24] [i_24 + 1] [i_24] [i_24])) ? (6555610262737807249LL) : (var_2)))));
                        }
                        for (signed char i_28 = 0; i_28 < 20; i_28 += 2) 
                        {
                            arr_105 [i_4] [i_23] [i_24] [i_25] [i_25] [i_4] [i_23] = ((/* implicit */short) (+(((/* implicit */int) arr_61 [i_23 - 1] [i_23 - 1] [i_24 - 3] [i_24 - 2] [i_25]))));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) 1628621288)) || (((/* implicit */_Bool) 1728131802U))));
                        }
                        for (short i_29 = 4; i_29 < 19; i_29 += 4) 
                        {
                            arr_109 [i_4] [i_25] [i_23 - 1] [i_23] [i_24 - 1] [i_25] [i_29] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-13691))));
                            arr_110 [i_4] [i_23 - 1] [i_25] [i_23 - 1] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_79 [i_23]))) ? (((unsigned int) 6369919212874906544LL)) : (((/* implicit */unsigned int) 1628621286))));
                            arr_111 [i_4] [i_23 - 1] [i_23] [i_25] [i_29] &= ((/* implicit */signed char) (~(arr_66 [i_24 + 1] [i_24 - 2] [i_24 + 1])));
                            arr_112 [i_4] [i_25] [i_4] [i_25] = ((/* implicit */short) (!(((((/* implicit */int) var_12)) < (((/* implicit */int) arr_14 [i_4]))))));
                        }
                        var_46 = ((/* implicit */short) var_1);
                        arr_113 [i_25] [i_23] [i_24 - 1] [i_25] = ((/* implicit */unsigned long long int) (short)32767);
                    }
                }
            } 
        } 
        var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (-(((/* implicit */int) arr_92 [i_4] [6])))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) arr_36 [i_4] [i_4])) : (((/* implicit */int) max(((short)10402), (var_8))))))));
    }
    var_48 = ((/* implicit */unsigned int) (unsigned char)228);
    var_49 &= ((/* implicit */unsigned char) var_16);
}
