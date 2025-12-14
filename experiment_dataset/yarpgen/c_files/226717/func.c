/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226717
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_16 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_4] [i_3]);
                            var_17 = ((/* implicit */unsigned char) 4U);
                            var_18 = ((/* implicit */signed char) ((unsigned int) 4294967291U));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_13 [i_5] [i_5] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (var_6)))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3208)) ? (4294967289U) : (1257844084U)));
                            var_21 = ((/* implicit */unsigned char) 4294967295U);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (3U) : (1U)))) / (((((/* implicit */_Bool) (short)8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-3222)))))));
                            var_23 = ((/* implicit */_Bool) 5U);
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) - (16U)));
                            var_24 = ((/* implicit */unsigned char) (short)6);
                        }
                        arr_21 [i_2] [8ULL] [i_2] [i_2 - 1] [i_2] [i_2] = ((unsigned int) arr_19 [i_0] [i_2 - 1] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned int i_8 = 2; i_8 < 8; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_9 = 3; i_9 < 9; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */short) 3U);
                            var_26 += ((/* implicit */short) ((((((/* implicit */_Bool) (short)3208)) || (((/* implicit */_Bool) 1356141165)))) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (1356141165) : (var_6))) : (((/* implicit */int) (signed char)50))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (((((/* implicit */_Bool) var_3)) ? (2238818592414939647ULL) : (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5)))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-27)), (6U))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))) / (var_13)));
                            arr_31 [i_0] [i_0] [i_1] [i_2] [i_8] [i_10] [i_10] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1004817655U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)215)))))))), (((((/* implicit */_Bool) ((36028796750528512ULL) / (3234251512774933848ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_15 [i_8] [i_10 - 2] [i_2 - 1] [i_2] [i_2] [i_8]))));
                            arr_32 [i_0] [i_1] [i_2] [i_8] [i_8] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(min((8361320396701513288ULL), (((/* implicit */unsigned long long int) (unsigned char)126)))))))));
                        }
                        for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) arr_23 [i_11] [i_0])) ? (((/* implicit */long long int) 1540346296)) : (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1998271077008762435ULL)) ? (arr_29 [i_0] [i_0] [i_1] [i_0] [i_2] [i_8] [i_11]) : (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3620281370190096909ULL)) ? (var_12) : (((/* implicit */unsigned int) var_6)))))))))));
                            arr_35 [i_1] [i_1] [i_2] [i_8] &= ((/* implicit */signed char) ((max(((+(2886122892U))), (((((/* implicit */_Bool) var_15)) ? (1627165435U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) / (((/* implicit */unsigned int) min((((/* implicit */int) (short)3180)), (((((/* implicit */int) (signed char)-21)) / (((/* implicit */int) (_Bool)1)))))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_15))));
                        }
                        var_32 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) var_14)))) ? (16776192) : (((/* implicit */int) (short)-25647))));
                        var_33 = ((/* implicit */_Bool) (+((~(var_0)))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned char) 2667801868U));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_2] [i_1] [i_2] [i_12] [i_12] [i_1])) || (((/* implicit */_Bool) ((unsigned int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (6133869957848550467LL)))) || ((_Bool)1)));
                        var_37 = ((/* implicit */signed char) 8201323627014349682ULL);
                    }
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (min((((/* implicit */unsigned long long int) max((((unsigned int) var_13)), ((+(1627165408U)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2] [i_13])) : (((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) 1627165457U)), (1367984496602777514ULL)))))))));
                        var_39 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_13]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 1) 
                    {
                        for (long long int i_15 = 2; i_15 < 11; i_15 += 2) 
                        {
                            {
                                arr_44 [i_14] [i_1] [i_14] = ((/* implicit */unsigned int) max((((1367984496602777526ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_26 [i_2] [i_2] [i_2 - 1] [i_1] [i_0]))));
                                arr_45 [i_0] [i_14] [i_0] = var_3;
                                var_40 = ((/* implicit */int) ((long long int) ((int) -16776192)));
                                var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54561)) ? (((/* implicit */long long int) 16776180)) : (0LL)));
                                arr_46 [i_14] [i_14] [i_2] [i_1] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)224), (((/* implicit */unsigned char) (signed char)-3))))) ? (((unsigned long long int) var_3)) : (((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) / (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 6133869957848550467LL)))))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))))));
    /* LoopNest 2 */
    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 2; i_18 < 10; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (short i_20 = 1; i_20 < 12; i_20 += 2) 
                            {
                                var_43 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_55 [i_20] [i_19] [i_17])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (var_5)))));
                                arr_61 [i_20 - 1] [i_19] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1903582082844243498LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23011))) : (var_11))) / (var_11)));
                            }
                            for (short i_21 = 3; i_21 < 12; i_21 += 3) 
                            {
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (signed char)-16))));
                                var_45 |= ((/* implicit */_Bool) ((short) (signed char)-15));
                                var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (1627165457U)))) ? (((((/* implicit */_Bool) -1LL)) ? (arr_58 [i_16 + 1] [i_19] [i_19] [i_19] [i_21] [i_19]) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) var_0)))))));
                            }
                            /* vectorizable */
                            for (short i_22 = 0; i_22 < 13; i_22 += 4) 
                            {
                                var_47 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))) / (arr_49 [i_16] [i_16])));
                                var_48 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_62 [i_22] [i_19] [i_18] [i_17] [i_16])) ? (1627165447U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            }
                            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) 
                            {
                                var_49 *= (unsigned short)16300;
                                var_50 = ((/* implicit */short) -188198084);
                            }
                            arr_69 [i_16] |= ((_Bool) (+(((var_13) / (((/* implicit */unsigned long long int) var_11))))));
                            arr_70 [i_16] [i_19] [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || (((((/* implicit */_Bool) 15LL)) || (((/* implicit */_Bool) (signed char)-50)))))) || (((/* implicit */_Bool) var_14))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_24 = 0; i_24 < 13; i_24 += 3) 
                            {
                                var_51 = ((/* implicit */signed char) arr_67 [i_24] [i_19] [i_18] [i_17] [i_17] [i_16 + 2]);
                                var_52 -= ((/* implicit */unsigned char) ((var_10) / (((/* implicit */long long int) arr_55 [i_16 - 1] [i_24] [i_18 - 1]))));
                            }
                            for (int i_25 = 3; i_25 < 10; i_25 += 4) 
                            {
                                var_53 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9462))) / (1367984496602777515ULL)))) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16300), (((/* implicit */unsigned short) (_Bool)1)))))) : (((var_10) >> (((arr_74 [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_18] [i_19] [i_18] [i_25]) + (57923092)))))))));
                                arr_76 [i_19] [i_17] [i_19] [i_17] [i_25] = ((((/* implicit */_Bool) max((482181527U), (((/* implicit */unsigned int) var_2))))) || (((/* implicit */_Bool) max((8136492960647534544LL), (min((((/* implicit */long long int) arr_52 [i_16] [i_16] [i_16])), (var_5)))))));
                                var_54 -= ((/* implicit */short) var_11);
                                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (1367984496602777499ULL)))) ? (((/* implicit */unsigned long long int) 350734428U)) : (((unsigned long long int) var_7)))))));
                            }
                        }
                    } 
                } 
                var_56 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_56 [i_16] [i_16] [i_17] [i_17])), (188198058)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) -16LL)), (15620663575526709862ULL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
                    {
                        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 3) 
                        {
                            {
                                var_57 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((0), (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) -188198084))))) * (min((188198099), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32250)))))))));
                                arr_86 [i_28] [i_28] [i_28] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_85 [i_16 + 2] [i_17] [i_26] [i_26] [i_27] [i_28] [i_28])) || (((/* implicit */_Bool) var_1)))) || (((((/* implicit */_Bool) (+(15620663575526709862ULL)))) || (((/* implicit */_Bool) -1))))));
                                var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_11)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)21)), (891428393395511806LL))))))) / (((/* implicit */int) (short)24616))));
                            }
                        } 
                    } 
                    arr_87 [i_16] [i_16] [i_17] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8321957524439265731LL)) ? (7LL) : (-8321957524439265731LL)))) || (((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)49219)))))))));
                    /* LoopNest 2 */
                    for (signed char i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        for (short i_30 = 0; i_30 < 13; i_30 += 2) 
                        {
                            {
                                arr_92 [i_16] [i_17] [i_26] [i_29] [i_30] [i_30] = ((/* implicit */unsigned long long int) var_9);
                                arr_93 [i_16] [i_17] [i_26] [i_29] [i_30] = ((/* implicit */long long int) arr_79 [i_16] [(short)11] [i_16]);
                                var_59 &= ((/* implicit */unsigned int) (signed char)32);
                                var_60 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_51 [i_16 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7052)))))))), (((((/* implicit */_Bool) (unsigned short)1)) || (((/* implicit */_Bool) (short)7682))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_61 = ((/* implicit */signed char) (+(min((((unsigned int) -891428393395511800LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24616)) || (((/* implicit */_Bool) arr_47 [i_16])))))))));
                    var_62 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3591346430U)) ? (((/* implicit */int) (unsigned short)49220)) : (var_0))))), (max((((/* implicit */unsigned long long int) ((signed char) arr_84 [i_16] [i_16] [i_16] [i_17] [i_31]))), (((unsigned long long int) var_3))))));
                    /* LoopNest 2 */
                    for (long long int i_32 = 1; i_32 < 12; i_32 += 4) 
                    {
                        for (long long int i_33 = 0; i_33 < 13; i_33 += 2) 
                        {
                            {
                                var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) max((-188198059), (((/* implicit */int) (unsigned short)16300)))))));
                                var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) ((((/* implicit */_Bool) 812710862)) ? (((((/* implicit */_Bool) arr_54 [i_16] [i_17] [i_17] [i_32])) ? (((var_4) / (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)6)), (var_7)))))) : (((/* implicit */unsigned long long int) (-(arr_58 [i_16] [i_16] [i_31] [i_32] [i_32] [i_33])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_34 = 0; i_34 < 13; i_34 += 2) 
                {
                    var_65 = ((/* implicit */unsigned short) ((short) var_5));
                    var_66 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)46)) ? (3529564111221622715LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23056))))))) || (((/* implicit */_Bool) var_3))));
                }
                var_67 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8187661411326787503LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5092))))))));
            }
        } 
    } 
    var_68 = ((/* implicit */_Bool) (unsigned short)37930);
}
