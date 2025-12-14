/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239407
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
    var_15 = ((/* implicit */unsigned long long int) (!(((_Bool) var_12))));
    var_16 ^= ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) arr_1 [i_0]))))))));
        var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (((((/* implicit */_Bool) 5951744951687440749ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (4611686018427387903LL))))))) : ((+(((((/* implicit */_Bool) 6749352776537835968ULL)) ? (((/* implicit */unsigned long long int) -11)) : (11697391297171715647ULL)))))));
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(_Bool)0]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_5)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_8)))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) -2147483638)), (((((/* implicit */unsigned int) (-(-126426896)))) + (1073676288U)))));
                        arr_17 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1))))) % (arr_10 [i_1])))) || (((/* implicit */_Bool) (unsigned short)10544))));
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (arr_3 [i_3 + 1] [i_4 - 1])))), (((unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2])))))));
                        var_22 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2])), (arr_10 [i_1]))))), (min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_3])), (6749352776537835968ULL))));
                    }
                } 
            } 
            arr_18 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_10 [i_2]) == (var_3)))), ((+(((/* implicit */int) (unsigned short)25585))))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2305842940494217216ULL), (var_14)))) ? (((/* implicit */int) ((3225723359807571228ULL) > (((/* implicit */unsigned long long int) 1603367374))))) : ((-(((/* implicit */int) (signed char)121))))))) : (max((var_3), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)48)))))))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_30 [i_5] [i_6 + 1] [i_5] [i_6] = (-(1458968869U));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_33 [i_6] [i_6] = ((/* implicit */_Bool) ((843492946U) / (((/* implicit */unsigned int) var_11))));
                        var_23 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) arr_13 [i_5] [i_5])))))))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11697391297171715659ULL)) && (((/* implicit */_Bool) 6749352776537835978ULL))));
                    }
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) 16ULL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_40 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+(arr_38 [i_9 + 1] [i_9 + 1] [i_10] [i_10]))))));
                    arr_41 [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) arr_37 [i_5] [15])) ? (((/* implicit */int) ((unsigned short) arr_9 [i_9 - 2]))) : (((/* implicit */int) max(((short)32756), (((/* implicit */short) (signed char)-11))))));
                    arr_42 [i_5] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_5]))));
                    arr_43 [i_10] [i_9] [i_10] = ((((/* implicit */_Bool) arr_29 [i_5] [i_9] [i_10] [(unsigned short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) > (((arr_10 [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) : ((+((~(17ULL))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        for (short i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            {
                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551605ULL) + (524286ULL)))) || (((/* implicit */_Bool) 11697391297171715649ULL))))) / (var_11)));
                var_26 = ((/* implicit */unsigned long long int) arr_16 [i_11] [i_11]);
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            arr_56 [i_11] [i_12] [i_13] [i_14] = ((/* implicit */int) (+((~(11697391297171715645ULL)))));
                            /* LoopSeq 2 */
                            for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                            {
                                var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_12 [i_11] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19284))) : (((((/* implicit */_Bool) 15U)) ? (-4967312207856415039LL) : (((/* implicit */long long int) 1250423617))))))), (max((((18446744073709551604ULL) + (((/* implicit */unsigned long long int) var_13)))), (max((6749352776537835966ULL), (32ULL)))))));
                                var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_14] [i_12])) ? (((/* implicit */int) (unsigned short)22032)) : (((/* implicit */int) (unsigned char)106))))));
                            }
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                arr_63 [i_11] [i_12] [i_11] [i_12] [i_16] = ((/* implicit */unsigned short) var_13);
                                arr_64 [i_11] [i_11] [i_13] [i_13] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) arr_0 [i_14])) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 11ULL)) ? (arr_59 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (var_11)))))));
                                var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_11])) : (((/* implicit */int) arr_24 [i_11])))), (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_11]))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 3; i_17 < 7; i_17 += 4) 
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_11] [(unsigned short)6])) ? (((((/* implicit */_Bool) ((27ULL) % (((/* implicit */unsigned long long int) 859594112))))) ? (((long long int) var_11)) : (((/* implicit */long long int) (-(var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                    arr_67 [i_11] = (-(arr_44 [i_11]));
                }
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    var_31 = ((/* implicit */int) ((signed char) var_12));
                    var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)81)), (((((/* implicit */_Bool) (signed char)114)) ? (47ULL) : (((/* implicit */unsigned long long int) arr_11 [i_11] [i_11] [i_11]))))))) ? (((((/* implicit */unsigned long long int) -2147483646)) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (11ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (18446744073709551605ULL)))));
                    arr_70 [i_11] [i_11] [i_11] [i_18] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 859594143)) : ((-(((((/* implicit */_Bool) var_2)) ? (11697391297171715650ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        arr_76 [i_11] [i_20] = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_11)), (879867883163598144ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-1))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_11] [i_11])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))))));
                        var_33 |= ((/* implicit */_Bool) arr_71 [i_19]);
                    }
                    for (short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_82 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)1)) - (268435456))));
                            var_34 = ((/* implicit */signed char) ((unsigned long long int) 8840356374848990627ULL));
                        }
                        arr_83 [i_11] [i_12] [i_11] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_60 [i_11] [i_12] [i_11] [i_21] [i_19] [(signed char)8] [i_19])) ? (536838144U) : (((/* implicit */unsigned int) -332545650)))), (((/* implicit */unsigned int) min(((unsigned short)56124), (((/* implicit */unsigned short) (signed char)119))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 1; i_23 < 8; i_23 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((((!(((/* implicit */_Bool) 6749352776537835968ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12016763867526164934ULL))))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_55 [i_11] [i_12] [i_19] [i_23 + 1])) ? (3279915504972563829ULL) : (((/* implicit */unsigned long long int) 859594112)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_8))))))))));
                        arr_86 [i_11] [i_11] [i_19] [i_11] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11] [10ULL] [i_19] [i_19])) ? (11697391297171715672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11]))) : (0ULL))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                    {
                        arr_90 [i_11] = (+(9520368483921564727ULL));
                        arr_91 [i_11] [i_19] [i_19] [i_24] [i_19] [i_11] = max((((min((18446744073709551599ULL), (((/* implicit */unsigned long long int) (signed char)127)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) var_0)));
                        var_36 = ((/* implicit */_Bool) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_24]))) + (16622791510038365643ULL)))))));
                    }
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_25])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >= (arr_10 [i_11])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 859594112)) ? (((9520368483921564736ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32259))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-49))));
                        /* LoopSeq 3 */
                        for (long long int i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
                        {
                            var_39 += ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((short) 17682750781678282478ULL)))))));
                            var_40 = ((/* implicit */int) 11ULL);
                            arr_102 [i_25] [i_12] [i_25] [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_12)))) ? (1631659792U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_26] [i_11] [i_25] [i_26]))) > (var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned char)180)))))));
                        }
                        for (long long int i_28 = 0; i_28 < 10; i_28 += 1) /* same iter space */
                        {
                            arr_105 [i_26] [i_26] [i_11] [i_11] [i_26] = ((/* implicit */short) arr_44 [i_11]);
                            var_41 = ((/* implicit */_Bool) min((arr_101 [i_11] [i_11]), (((((/* implicit */int) (signed char)-44)) - (((/* implicit */int) (signed char)113))))));
                            var_42 = (-(((((/* implicit */_Bool) arr_52 [i_12] [i_25] [i_26] [i_28])) ? (((/* implicit */int) arr_52 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_52 [i_11] [i_12] [i_26] [i_28])))));
                        }
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))) & (((((/* implicit */_Bool) arr_71 [i_12])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) ((signed char) (signed char)-38)))))));
                            arr_109 [i_11] [i_25] [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15119)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8153921877752860409LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_9 [i_11]))))) : ((+(var_6))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_11])) ^ (((/* implicit */int) arr_57 [i_11] [i_12] [i_25] [i_11] [i_29])))) >= (((/* implicit */int) var_0)))))));
                            var_44 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : ((+(-5839154291129285641LL)))))) ? (((((((/* implicit */int) arr_5 [i_29])) % ((-2147483647 - 1)))) % ((-(((/* implicit */int) arr_98 [i_11] [(short)2])))))) : (((/* implicit */int) (signed char)74))));
                        }
                        arr_110 [i_11] [i_11] [i_25] [i_25] [i_26] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_11] [i_26]))))) ? ((+(((/* implicit */int) (unsigned short)48173)))) : (((/* implicit */int) var_5))))) ? ((+(((((/* implicit */int) arr_88 [i_11] [i_11])) % (var_13))))) : (((/* implicit */int) ((arr_103 [i_11] [i_12] [i_11] [i_26]) > (arr_103 [i_11] [i_12] [i_11] [i_26]))))));
                    }
                }
                for (int i_30 = 3; i_30 < 9; i_30 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                    {
                        for (unsigned long long int i_32 = 0; i_32 < 10; i_32 += 3) 
                        {
                            {
                                arr_121 [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((-(((/* implicit */int) arr_113 [i_11] [i_11] [i_32])))) - (((/* implicit */int) var_8))))), (max((((1225320059690055677LL) - (((/* implicit */long long int) 859594112)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_94 [i_11])) ? (((/* implicit */int) var_4)) : (var_11))))))));
                                arr_122 [i_11] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */_Bool) (+(max((arr_120 [i_30 - 2] [i_31 + 1] [i_31]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)58)) + (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                    var_45 ^= ((/* implicit */_Bool) arr_89 [i_11] [i_11] [i_30 - 1] [(_Bool)1]);
                    var_46 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(18446744073709551602ULL)))) ? (((/* implicit */unsigned long long int) 2901437098U)) : (((((/* implicit */_Bool) ((signed char) 1823952563671185973ULL))) ? (arr_48 [i_30 - 2] [i_12] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_11] [i_30 - 2])))))));
                    arr_123 [i_11] [i_11] [i_30] [i_11] = ((((((/* implicit */_Bool) min((arr_81 [i_11] [i_11] [i_11] [i_12] [(_Bool)1]), (arr_79 [i_11] [i_12] [i_30] [i_30] [i_11] [i_30 + 1])))) ? (((((/* implicit */int) arr_100 [i_30] [i_30] [i_30] [i_30 - 2] [i_30])) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_9 [i_30]), (((/* implicit */signed char) var_0))))))) * (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (var_11))) % (((/* implicit */int) max(((short)1), (((/* implicit */short) var_10))))))));
                }
            }
        } 
    } 
}
