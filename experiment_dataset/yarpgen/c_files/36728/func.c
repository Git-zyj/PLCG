/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36728
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && ((!(((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 332886566U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = ((arr_1 [i_0] [i_0]) ? (0U) : (((/* implicit */unsigned int) var_4)));
        var_17 = ((/* implicit */signed char) 5648414451262948311LL);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) % (((/* implicit */int) var_0)))) ^ (8387584)));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_7 [i_1]), (arr_1 [i_1] [i_1])))), (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58117)) ? (-8387584) : (-8387566)));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_21 ^= ((/* implicit */long long int) ((_Bool) arr_2 [i_2]));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
            {
                arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) var_4);
                arr_16 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) arr_1 [i_1] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
            {
                arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1])) : (var_13)))));
                var_22 = ((/* implicit */unsigned short) arr_0 [i_1]);
            }
            arr_21 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((min(((unsigned char)91), (((/* implicit */unsigned char) (_Bool)1)))), (min(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)1))))))), (3962080752U)));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            arr_33 [i_1] [i_1] [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) var_14)));
                            var_24 = ((/* implicit */_Bool) min((((long long int) (unsigned char)229)), (((/* implicit */long long int) var_7))));
                        }
                    } 
                } 
                arr_34 [i_1] [i_1] [i_5] [i_1] = (+(((/* implicit */int) var_10)));
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_26 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 + 1])))) << ((((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_12)))))) + (139)))));
                            arr_43 [i_1] [i_5] [i_5] [i_10] [i_10] [i_5] [i_5] = ((unsigned short) var_11);
                            var_26 = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_1])) / (((/* implicit */int) arr_23 [i_1]))))) ^ (min(((-(var_2))), (((/* implicit */unsigned long long int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_6))));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) 18446744073709551600ULL)))) || (((((/* implicit */_Bool) -1927734930)) || (((/* implicit */_Bool) arr_6 [11ULL]))))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (12239255884408153135ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)1839)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((arr_38 [i_13 + 1] [i_14] [i_13 + 1] [i_13 + 1] [i_14]) ^ (((/* implicit */int) var_1))));
                        var_32 = ((/* implicit */short) (((~(((/* implicit */int) arr_26 [i_5] [i_12] [i_13 - 3] [i_14])))) | (((/* implicit */int) var_12))));
                        arr_50 [i_13] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_5]))))) ? (arr_11 [i_1] [i_5] [i_12]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37917)))))));
                        arr_51 [i_1] [i_5] [i_1] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)96))))) > (arr_44 [i_5] [i_13 - 3] [i_13 + 4])));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (signed char)22);
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_5] [12] [i_5] [i_12] [(signed char)6] [i_13] [i_13 + 3]))) >= ((+(3962080729U))))))));
                    }
                    for (short i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (arr_47 [i_16 + 1] [i_16] [i_16 - 1] [i_13] [(signed char)2] [i_13 - 2]) : (arr_47 [i_16 - 1] [i_16] [i_16 + 1] [i_13] [7LL] [i_13 - 3])));
                        var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [(_Bool)1] [i_13 + 3] [i_13] [i_13] [i_13 - 2] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [0ULL] [i_13] [i_13] [i_13 + 2] [i_13] [i_13 + 4] [(short)8]))) : (var_15)));
                        arr_57 [i_5] [i_12] [i_12] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_46 [i_1] [i_5] [i_1] [(_Bool)1])) ? (arr_56 [i_16] [i_13] [i_5] [i_16] [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        arr_61 [i_5] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_4))));
                    }
                    var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_5] [i_13 - 2] [i_13 - 2] [i_13 + 2] [i_13 + 2]))));
                }
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    var_39 += ((/* implicit */int) var_9);
                    var_40 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (-6784618685933571340LL) : (((((/* implicit */_Bool) -644377219)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5404819595244736436LL)))));
                    var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (unsigned char)168)))));
                    var_43 = ((/* implicit */int) var_9);
                    var_44 = ((/* implicit */unsigned short) ((((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_1] [(_Bool)1] [i_1] [i_1]))))) < (min((arr_56 [i_1] [i_1] [i_5] [i_12] [i_5] [i_1]), (((/* implicit */unsigned long long int) arr_49 [i_19] [i_5] [i_1] [i_12] [i_5] [i_5] [i_1]))))));
                }
            }
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                arr_69 [i_1] [i_1] [0LL] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((-(17397750970324157284ULL)))))) ? (((((((/* implicit */_Bool) -137049348)) ? (-9198200893715746650LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))))) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))));
                var_45 *= ((/* implicit */unsigned short) max((max((min((-4366185404497837923LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (~(137049348)))))), (((/* implicit */long long int) ((arr_40 [1LL] [i_5] [i_1]) << (((arr_40 [i_20] [i_5] [i_20]) - (1733183343))))))));
                var_46 *= ((/* implicit */short) (((-(((((/* implicit */_Bool) (signed char)-83)) ? (1742714139) : (((/* implicit */int) arr_55 [i_20] [i_20] [i_5] [i_5] [i_1] [i_1] [i_1])))))) == ((+(((/* implicit */int) arr_30 [i_20] [i_5] [i_1] [i_1]))))));
                arr_70 [i_1] [i_5] [i_20] [i_5] = min((((/* implicit */unsigned long long int) 137049347)), (((max((11090023988437810689ULL), (((/* implicit */unsigned long long int) var_11)))) & (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_3))))))));
            }
            for (unsigned int i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                arr_73 [13ULL] [i_5] [i_1] = ((/* implicit */long long int) (~((~(4109594291U)))));
                /* LoopSeq 2 */
                for (short i_22 = 0; i_22 < 14; i_22 += 4) 
                {
                    var_47 = ((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_1] [i_5] [i_5] [i_22]));
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((-82749986) ^ (arr_60 [i_22] [i_21])))) ? (((/* implicit */int) arr_22 [i_21] [i_21] [i_21])) : (((/* implicit */int) (unsigned short)58811))))));
                }
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
                {
                    var_49 = ((/* implicit */_Bool) ((6787639552599891912ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2257)))));
                    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_1] [i_23] [i_5] [i_5] [i_1] [i_1])) ? ((-(((/* implicit */int) arr_32 [i_23] [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */int) var_5)))))));
                }
                var_51 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_59 [i_1] [i_1] [(signed char)1] [i_5] [1ULL])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_1] [i_1] [i_1] [i_21] [i_21]))))));
            }
            for (long long int i_24 = 1; i_24 < 13; i_24 += 1) 
            {
                var_52 = ((/* implicit */int) (signed char)-104);
                var_53 = ((/* implicit */_Bool) (unsigned char)6);
            }
            var_54 ^= ((/* implicit */signed char) var_10);
            arr_82 [i_5] = ((/* implicit */unsigned char) arr_35 [i_1] [i_1] [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_25 = 0; i_25 < 14; i_25 += 1) 
        {
            var_55 = ((/* implicit */unsigned short) arr_75 [i_25]);
            var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) (+(137049348))))));
            /* LoopSeq 1 */
            for (unsigned short i_26 = 2; i_26 < 13; i_26 += 2) 
            {
                var_57 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_26 - 1]))));
                arr_87 [i_26] [i_25] [i_1] = ((/* implicit */_Bool) var_14);
                arr_88 [i_25] [i_26] = ((/* implicit */unsigned short) ((arr_72 [i_26 - 2] [11LL]) & (arr_72 [i_26 - 1] [i_26])));
                arr_89 [i_1] [i_25] [i_1] = ((/* implicit */short) ((unsigned short) (+(arr_67 [i_25] [i_25] [i_25] [i_25]))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_27 = 1; i_27 < 13; i_27 += 4) 
        {
            for (int i_28 = 0; i_28 < 14; i_28 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 1; i_29 < 13; i_29 += 3) 
                    {
                        for (unsigned long long int i_30 = 1; i_30 < 12; i_30 += 4) 
                        {
                            {
                                var_58 = ((/* implicit */unsigned int) ((((arr_11 [i_27 + 1] [i_29 + 1] [i_30 + 1]) / (arr_11 [i_27 + 1] [i_29 + 1] [i_30 + 1]))) * ((+(arr_11 [i_27 + 1] [i_29 - 1] [i_30 + 1])))));
                                arr_99 [i_1] [i_27] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52728)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) ^ (894248037U))))))) : (((/* implicit */int) (unsigned char)47))));
                            }
                        } 
                    } 
                    var_59 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)52728)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) : ((~(-82749968)))))), (max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) (signed char)-95))))), (8337403545887968943ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 0; i_31 < 14; i_31 += 2) 
                    {
                        var_60 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((3400719245U) - (((/* implicit */unsigned int) var_14))))) ? (((((/* implicit */_Bool) 15644254013573754587ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_31]))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_27] [i_27 + 1] [i_28] [i_28] [i_31] [i_28] [i_27])))))));
                        arr_103 [i_31] [i_27] [i_27] [i_1] = ((((/* implicit */_Bool) (unsigned char)52)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)40))))) ? (11659104521109659703ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_93 [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_27 - 1])), (((((/* implicit */_Bool) arr_65 [8LL] [i_27])) ? (1962735545) : (((/* implicit */int) (unsigned char)252))))))));
                        var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_4) > (((/* implicit */int) (unsigned short)12822)))) ? (((/* implicit */long long int) ((2884482691U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) | (-7759671459815800166LL)))))) ? (((/* implicit */int) var_1)) : (arr_67 [4U] [i_27] [i_27] [i_31])));
                    }
                    arr_104 [i_1] [i_27] [i_27] [i_27] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 7984036)) ? (6173382752234031125ULL) : (((/* implicit */unsigned long long int) 239058495U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_28])))))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_32 = 0; i_32 < 21; i_32 += 1) 
    {
        for (unsigned int i_33 = 0; i_33 < 21; i_33 += 3) 
        {
            for (unsigned long long int i_34 = 0; i_34 < 21; i_34 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_35 = 0; i_35 < 21; i_35 += 2) 
                    {
                        for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                        {
                            {
                                var_62 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2048)) ? (((/* implicit */int) arr_118 [i_36 - 1] [i_36 - 1] [i_36 - 1] [i_36 - 1] [i_36 - 1] [i_36 - 1])) : (var_14)))), (min((((unsigned int) var_9)), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_106 [i_33] [i_34])))))))));
                                var_63 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9975))));
                                arr_119 [i_32] [(unsigned short)9] [i_34] [i_34] [i_32] [i_36 - 1] = ((/* implicit */short) (unsigned short)44130);
                                var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max(((~(((/* implicit */int) (unsigned short)9958)))), (((/* implicit */int) (unsigned char)30)))) : ((~(((/* implicit */int) (unsigned short)9951))))));
                                arr_120 [i_32] [i_33] [i_32] [i_32] [i_35] [i_36] [i_36] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_112 [i_35]))) ? (4127161386005882645LL) : (((/* implicit */long long int) arr_116 [i_32] [i_32] [i_34] [i_35] [i_36] [i_34] [i_32]))));
                            }
                        } 
                    } 
                    arr_121 [i_32] [i_32] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_1 [i_32] [i_34])), (((((/* implicit */_Bool) 9223372036854775780LL)) ? (arr_115 [i_32] [i_32] [i_34]) : (((/* implicit */unsigned long long int) -9223372036854775790LL)))))) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [14U] [(unsigned char)14])) : (((/* implicit */int) (_Bool)0))))), (arr_116 [i_32] [(unsigned short)9] [i_32] [i_32] [i_32] [i_32] [i_32]))))));
                    var_65 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (((arr_112 [i_32]) ? (((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_15))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_37 = 0; i_37 < 24; i_37 += 2) 
    {
        var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)127), ((signed char)124))))) : (((((var_2) >> (((-4127161386005882632LL) + (4127161386005882644LL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)60270)) : (((/* implicit */int) var_0))))))))))));
        var_67 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)9993)) : (((/* implicit */int) var_7))));
        arr_124 [i_37] = ((/* implicit */long long int) (signed char)13);
        var_68 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_9))));
        var_69 ^= ((/* implicit */long long int) (((~((+(((/* implicit */int) arr_0 [i_37])))))) | (((int) arr_1 [i_37] [i_37]))));
    }
    for (int i_38 = 0; i_38 < 20; i_38 += 4) 
    {
        var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 82749967)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60270))) : (1410484612U)))))))));
        /* LoopNest 2 */
        for (short i_39 = 1; i_39 < 17; i_39 += 3) 
        {
            for (unsigned int i_40 = 0; i_40 < 20; i_40 += 1) 
            {
                {
                    arr_133 [i_39] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_3 [i_39 + 3] [(signed char)23])))) | (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-19838)) : (-82749967))), (((((/* implicit */_Bool) 327249735)) ? (((/* implicit */int) (unsigned char)255)) : (-82749960)))))));
                    arr_134 [i_39] [(unsigned char)8] [i_39] = max((arr_129 [i_38] [i_39]), (((((/* implicit */int) arr_112 [i_39 + 2])) | ((-(((/* implicit */int) (signed char)-100)))))));
                    arr_135 [i_39] = ((/* implicit */short) min((((/* implicit */long long int) (signed char)-28)), (181095204301569866LL)));
                }
            } 
        } 
    }
}
