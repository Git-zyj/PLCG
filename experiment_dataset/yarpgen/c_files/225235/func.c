/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225235
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)37))))) ? (((/* implicit */int) (_Bool)1)) : (max((((((/* implicit */int) (signed char)91)) + (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)233))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [(short)11] [i_0] [(short)11] = arr_3 [7LL] [i_2];
                                var_16 = arr_6 [i_0] [i_0];
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(min((arr_2 [i_0]), (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_9 [i_3] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                                var_17 = ((/* implicit */unsigned char) (((+(13543785209200362909ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) var_7)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                {
                    var_18 = (unsigned char)4;
                    var_19 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)65535));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_14 [i_0] [i_0] [6ULL] [i_0]) ^ (var_12))), (((/* implicit */unsigned long long int) ((var_7) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_5] [i_5])))))))) || (((/* implicit */_Bool) (-(min((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_7)))))))));
                }
                arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)64959)), (8559184839597528745ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-17728))))) : (((((arr_14 [3LL] [5ULL] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1])))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (short)-5452))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-92)), ((short)0))))) : (((min((arr_15 [i_1] [i_0] [i_0] [i_0]), (var_8))) * (((((/* implicit */_Bool) var_1)) ? (arr_11 [(short)4] [i_1] [(short)4] [i_0] [i_1] [9LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_6 = 3; i_6 < 13; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_19 [i_6 + 1])), (18ULL))) < ((-(6ULL)))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)106)), ((short)-32746)));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)128)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned short)0)))))) | (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) arr_19 [i_6 - 3])))))));
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_6] [(unsigned char)9]))) >= ((-(var_9))))))) | (max((arr_19 [i_6 - 3]), (arr_18 [i_6])))));
            var_22 = ((/* implicit */unsigned short) ((5268349691952734059LL) | (min((-9095707959716020583LL), (((long long int) (unsigned char)150))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) arr_31 [i_6] [i_7] [i_6 + 2]);
                        arr_34 [(short)12] [i_6] [i_8] = (i_6 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2129356978468567171LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5459))))) ? (((max((var_9), (((/* implicit */unsigned long long int) -6995128665440449128LL)))) << (((((/* implicit */int) arr_33 [i_9] [i_6] [i_8] [i_6] [i_6])) - (5502))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-23929))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2129356978468567171LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5459))))) ? (((max((var_9), (((/* implicit */unsigned long long int) -6995128665440449128LL)))) << (((((((/* implicit */int) arr_33 [i_9] [i_6] [i_8] [i_6] [i_6])) - (5502))) + (8760))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-23929)))))));
                        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) var_15)) << (((arr_30 [i_6 - 2] [i_6 + 2] [i_6 - 3]) - (1315294381222592556ULL)))))));
                        var_25 = ((/* implicit */unsigned long long int) (~(((((-6596612412484003481LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)70))) < (-6596612412484003481LL)))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        arr_37 [i_10] = ((/* implicit */signed char) max((((_Bool) ((((/* implicit */unsigned long long int) arr_20 [i_10])) <= (var_12)))), (((_Bool) ((((/* implicit */int) (short)30406)) | (((/* implicit */int) (signed char)30)))))));
        var_26 = (-(min((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (5319495463645682820ULL))));
        arr_38 [i_10] = ((/* implicit */_Bool) (-(max((max((arr_32 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_23 [i_10])))), (arr_24 [i_10])))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */unsigned short) (((~(((arr_39 [i_11] [(unsigned char)2]) >> (((arr_24 [i_11]) - (9580349803556909467ULL))))))) <= (min((((/* implicit */unsigned long long int) arr_20 [i_11])), (arr_32 [i_11] [i_11] [i_11] [i_11])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            arr_46 [i_11] [i_11] [i_12] = ((/* implicit */long long int) var_10);
            arr_47 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (13379370358842908584ULL)));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_55 [i_11] [i_11] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (signed char)106)))))) < ((~(791513721625478874LL)))));
                            var_27 = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_14]))))) ? (((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_11] [(_Bool)1] [i_13] [13ULL] [i_14] [i_15])))));
                            arr_56 [i_12] [i_12] [i_11] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (18446744073709551615ULL)));
                        }
                    } 
                } 
            } 
            arr_57 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-17728)) >= (((((/* implicit */int) (short)14796)) & (((/* implicit */int) (unsigned char)124))))));
        }
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            arr_61 [i_11] [i_16] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11]))) + (-8696664339737908228LL))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)246)))) >> (((((/* implicit */int) var_10)) - (34))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_17 = 4; i_17 < 11; i_17 += 2) 
            {
                arr_65 [i_17 + 2] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_17 + 2] [i_11] [i_11]))) ^ (arr_18 [i_11])));
                /* LoopSeq 3 */
                for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    arr_69 [i_11] [i_11] [(unsigned char)3] [i_18] = ((/* implicit */_Bool) (-(((arr_63 [i_16] [i_17 + 1] [i_11]) ? (arr_32 [i_11] [i_17] [i_11] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                    arr_70 [i_11] [i_16] [i_11] = ((/* implicit */unsigned long long int) ((((var_7) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (short)-14776)))) | (((/* implicit */int) arr_23 [i_17 + 3]))));
                    arr_71 [i_11] [i_16] [i_11] [i_11] [i_18] = ((/* implicit */short) ((long long int) ((_Bool) (_Bool)1)));
                    arr_72 [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)233))));
                }
                for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                {
                    arr_76 [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_11] [i_16] [i_17 - 1]))));
                    arr_77 [i_11] [i_11] [7ULL] [i_17] [i_11] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_44 [i_16]))))));
                    arr_78 [i_11] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                }
                for (unsigned char i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
                {
                    arr_82 [i_11] [i_16] [i_17] [i_20] [i_20] = ((/* implicit */short) (unsigned short)65519);
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_20] [1ULL] [i_16] [1ULL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_11]))))))) == (var_2)));
                }
                arr_83 [(unsigned short)0] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (~(791513721625478884LL)));
                arr_84 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47309))) + (7973340387835356440LL)))) : ((+(9223372036854771712ULL)))));
                arr_85 [i_11] = ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_66 [i_11] [i_16] [i_17] [i_16])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_17] [i_11] [i_11]))) : (arr_39 [i_11] [(unsigned char)1]))));
            }
            arr_86 [i_11] [i_16] = ((/* implicit */long long int) arr_74 [i_11] [i_11] [i_16]);
            /* LoopNest 2 */
            for (unsigned char i_21 = 2; i_21 < 11; i_21 += 4) 
            {
                for (short i_22 = 1; i_22 < 13; i_22 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 4) /* same iter space */
                        {
                            arr_95 [i_11] [i_11] [2LL] [i_22] [0ULL] [i_23] = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)10)), (var_4)));
                            arr_96 [i_11] = ((/* implicit */unsigned char) arr_67 [i_11] [i_16]);
                            var_30 = ((/* implicit */unsigned long long int) 4774336477818949868LL);
                        }
                        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) < (((/* implicit */int) arr_90 [i_21 + 3] [i_21 + 3] [i_21] [i_11]))))) & (((/* implicit */int) min((arr_90 [i_21 + 3] [i_21] [i_21 + 3] [i_11]), (arr_90 [i_21 - 1] [i_21] [i_21] [i_11]))))));
                            var_32 = ((/* implicit */signed char) ((-4774336477818949868LL) ^ (((max((var_5), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)243)))))))));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 4) 
                        {
                            var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_11] [i_11]))));
                            arr_103 [i_11] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_67 [i_11] [i_16]), (((/* implicit */short) var_15))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-17)) + (2147483647))) << (((((/* implicit */int) arr_28 [(short)4] [(short)4] [(_Bool)0])) - (56183)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_11] [i_21 + 3] [i_25]))) : (9223372036854775807LL)))));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_106 [i_11] = ((/* implicit */unsigned short) arr_91 [i_11] [i_11] [i_21] [i_22] [i_26]);
                            arr_107 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))))))) + (((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-11156)) : (((/* implicit */int) (unsigned char)150)))) + (2147483647))) << (((((((/* implicit */int) (short)-2048)) + (2057))) - (9)))))));
                            arr_108 [i_11] [i_16] [(unsigned char)0] [i_22] [i_11] = (~(((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_101 [i_16] [i_11] [i_16]))) : (arr_40 [(unsigned char)0] [i_11]))) | (max((((/* implicit */unsigned long long int) var_14)), (var_9))))));
                        }
                        arr_109 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((signed char) ((_Bool) arr_20 [i_11])));
                    }
                } 
            } 
            arr_110 [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_53 [i_11] [i_16] [8ULL] [i_11] [(signed char)10] [i_11])), ((-(((arr_60 [i_11]) << (((((/* implicit */int) arr_43 [i_16])) + (4212)))))))));
        }
        for (long long int i_27 = 0; i_27 < 14; i_27 += 2) 
        {
            arr_113 [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) var_8));
            arr_114 [i_11] [i_27] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) arr_25 [8ULL] [i_11] [i_27]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_45 [i_11]), (((/* implicit */short) var_7)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_8)))))));
            arr_115 [i_11] = ((/* implicit */unsigned long long int) ((var_8) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (var_8)))));
        }
        /* vectorizable */
        for (unsigned char i_28 = 0; i_28 < 14; i_28 += 4) 
        {
            arr_119 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_104 [(short)12] [i_11] [i_11] [i_28])) ^ (((/* implicit */int) (unsigned short)17)))));
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_11))))));
            /* LoopSeq 1 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                arr_123 [i_11] [i_28] [i_28] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)7)) >= (((/* implicit */int) (short)24924))));
                arr_124 [i_11] [i_11] [i_29] = ((/* implicit */short) var_3);
                /* LoopSeq 1 */
                for (unsigned long long int i_30 = 2; i_30 < 11; i_30 += 4) 
                {
                    arr_127 [i_29] [(unsigned char)0] [i_11] [(_Bool)1] [i_29] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 9187343239835811840LL)))) : (((((/* implicit */_Bool) 9195768519265444457LL)) ? (var_11) : (791513721625478876LL)))));
                    var_35 = ((/* implicit */_Bool) arr_97 [i_11] [(_Bool)1] [(unsigned short)2] [i_29] [i_29] [(unsigned short)2]);
                }
                arr_128 [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_30 [i_11] [i_11] [i_11]) == (var_12))))));
            }
            var_36 = ((/* implicit */_Bool) 31525197391593472ULL);
        }
        var_37 = ((/* implicit */_Bool) min((max((-1LL), (((/* implicit */long long int) (unsigned short)39435)))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)17)) != (((/* implicit */int) (unsigned char)10))))))))));
        var_38 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_93 [i_11] [i_11] [i_11] [i_11] [i_11]) < (((var_0) | (((/* implicit */unsigned long long int) var_3))))))), (max((((/* implicit */long long int) (signed char)24)), (-6483275313536680500LL)))));
    }
    var_39 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)124)))) >> (((((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16182), (((/* implicit */unsigned short) (_Bool)1))))))))));
    var_40 = ((/* implicit */_Bool) (~(var_8)));
}
