/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200103
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
    var_16 -= ((/* implicit */_Bool) var_14);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))));
        var_18 = ((/* implicit */_Bool) ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))) / (arr_0 [i_0 - 2])));
        var_19 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((arr_0 [i_0]), (667536501U))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25541))) : (667536501U)))))), (var_4)));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_20 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_10)))), (((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 4; i_3 < 22; i_3 += 4) 
            {
                var_21 = ((/* implicit */_Bool) (signed char)114);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)42772))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42754)) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_7))))));
                    var_23 = ((/* implicit */unsigned short) (+((+(arr_12 [i_3] [i_4])))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [(short)23])) ? (((/* implicit */int) (short)24470)) : (((/* implicit */int) arr_14 [i_4] [i_3] [17] [i_1] [17])))))));
                    arr_16 [i_3] [i_2] [i_2] [(unsigned char)15] [i_4] [i_4] = ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_3 - 1])) : (((/* implicit */int) arr_7 [i_1])));
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((arr_11 [i_1] [i_2] [i_2 + 2] [i_3 - 1]) >= (((/* implicit */int) arr_6 [i_2])))) && (((/* implicit */_Bool) ((arr_6 [i_2]) ? (arr_11 [i_1] [i_2] [i_2 + 2] [i_3 - 2]) : (arr_11 [i_1] [i_2] [i_2 + 1] [i_3 + 1]))))));
                    var_26 = max((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)0))))), (min((max((var_6), (((/* implicit */int) arr_19 [i_5])))), ((~(((/* implicit */int) (signed char)25)))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-24471)) != (((/* implicit */int) (_Bool)1))));
                    var_28 ^= ((/* implicit */int) var_15);
                }
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 24; i_7 += 4) 
                    {
                        var_29 *= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (signed char)-35)), (8070686902996959984ULL)))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_14 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 3])), (var_7)))) ? (((((/* implicit */_Bool) arr_14 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_7 - 3] [i_7 - 3] [i_7 - 2] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) (signed char)-88)))) : (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)23))))));
                        var_31 = ((/* implicit */unsigned short) ((unsigned int) (signed char)-94));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(unsigned short)2] [i_2 + 2] [i_2 + 2] [i_3] [i_6] [i_8])) ? (((/* implicit */int) (!(arr_18 [i_2] [i_2] [i_6] [i_3 - 3])))) : (min((((/* implicit */int) (unsigned char)64)), (((((/* implicit */_Bool) (signed char)104)) ? (arr_8 [i_6] [i_3]) : (((/* implicit */int) (unsigned short)65529)))))))))));
                        var_33 *= ((/* implicit */unsigned char) max(((+(var_6))), (((/* implicit */int) max(((signed char)-23), ((signed char)9))))));
                    }
                    var_34 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)2047)), ((-(arr_15 [i_1] [i_2] [i_3] [i_6])))));
                    arr_28 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) 6115493798839584365LL);
                    var_35 -= ((/* implicit */signed char) (~(((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
                    arr_29 [i_1] [i_2] [i_2] [(unsigned char)19] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19804)) ? (((/* implicit */int) (unsigned short)2071)) : (((/* implicit */int) (_Bool)0))));
                }
            }
            var_36 = ((/* implicit */int) max((var_36), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_10)))), (min((arr_23 [i_1] [i_2 - 1]), (arr_23 [i_1] [i_2 + 1])))))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) ((((arr_9 [i_1] [i_9 + 1] [i_9] [i_9 + 1]) > (arr_9 [i_1] [i_9] [i_9] [i_9 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9])))))) : (var_12)));
                        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_34 [i_1] [i_1] [i_1] [(short)8] [i_11]), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_1] [i_9] [i_1] [(unsigned char)16] [(_Bool)1])) || ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) -8572478198687945304LL)))))))) ? (((((/* implicit */_Bool) 11803719638751177548ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2071))) : (418922741361288410ULL))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)5))))))))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+(((((/* implicit */int) min(((unsigned short)55195), (((/* implicit */unsigned short) var_3))))) ^ ((~(((/* implicit */int) var_9)))))))))));
                        var_40 += ((/* implicit */unsigned char) min(((-(max((((/* implicit */unsigned long long int) arr_27 [i_1] [i_1] [i_1] [i_9] [i_9] [i_10] [i_11])), (418922741361288398ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_10] [i_9 + 1] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_20 [(unsigned short)5] [i_9 + 1] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_20 [(unsigned char)16] [i_9 + 1] [i_9] [i_9] [i_9] [i_9])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)15872))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_1))));
                        }
                    }
                } 
            } 
            var_43 ^= ((unsigned short) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)72))))) ? (((/* implicit */int) ((short) (signed char)-16))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4503530907893760LL)))))));
            var_44 = ((/* implicit */long long int) min((((((/* implicit */int) arr_33 [i_1] [i_1] [i_9])) & (((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */short) arr_33 [i_1] [i_9 + 1] [i_9])), (var_7))))));
            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (_Bool)1))));
            var_46 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_1]))))) : ((~(((/* implicit */int) arr_22 [i_1]))))))));
        }
        for (short i_13 = 4; i_13 < 22; i_13 += 2) 
        {
            var_47 = ((/* implicit */_Bool) (-((-(0U)))));
            var_48 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_13 + 3] [i_13 + 3])) : (((/* implicit */int) arr_18 [i_1] [i_13 - 3] [i_1] [i_1]))))) || (((((((/* implicit */_Bool) 4294967278U)) ? (3527696027116739312LL) : (((/* implicit */long long int) ((/* implicit */int) (short)64))))) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        }
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 24; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    {
                        var_49 = var_3;
                        var_50 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_14])))))) & ((((_Bool)0) ? (((/* implicit */unsigned long long int) 6725012477036045274LL)) : (4611686018427387904ULL))));
                    }
                } 
            } 
            var_51 *= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        }
        arr_46 [i_1] [i_1] = ((/* implicit */short) var_5);
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            var_52 += ((/* implicit */unsigned char) arr_8 [(short)12] [i_1]);
            /* LoopNest 3 */
            for (unsigned char i_18 = 1; i_18 < 22; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_53 &= min((arr_9 [i_18 - 1] [i_1] [i_1] [i_18 + 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) : (arr_44 [i_1] [i_1] [i_19] [i_20])))) ? (((/* implicit */int) (unsigned short)17564)) : (max((((/* implicit */int) (short)-65)), (1073741696))))));
                            var_54 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)8)), (1535350973295464544ULL)));
                            var_55 *= ((/* implicit */signed char) min((min((arr_48 [i_18 + 1] [i_18 + 3]), (((/* implicit */int) var_9)))), ((+(arr_48 [i_18 + 2] [i_18 + 1])))));
                            var_56 = ((/* implicit */_Bool) (unsigned short)15);
                            var_57 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_37 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 2]), (arr_37 [i_18 - 1] [i_18 - 1] [i_18 + 3] [i_18] [i_18 + 1])))), (min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_21 = 0; i_21 < 18; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_22 = 2; i_22 < 16; i_22 += 3) 
        {
            var_58 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_24 [i_21] [i_21] [i_21] [i_21] [(signed char)9])), (4611686018427387904ULL)))))) ? ((+(((((/* implicit */_Bool) (short)7583)) ? (var_4) : (((/* implicit */unsigned long long int) 4503530907893760LL)))))) : (((/* implicit */unsigned long long int) var_5))));
            /* LoopNest 3 */
            for (long long int i_23 = 3; i_23 < 15; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        {
                            var_59 = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)7583)) ? (((/* implicit */int) arr_22 [i_24])) : (var_6))) < (((/* implicit */int) arr_22 [i_24])))))));
                            var_60 = ((/* implicit */short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned int) arr_4 [i_21])) : (364361872U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (-299992566))))))), (((((/* implicit */_Bool) max((13835058055282163712ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_21])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [5] [i_24] [i_22] [i_23] [i_24] [i_24] [i_25])) ? (arr_4 [i_21]) : (((/* implicit */int) arr_3 [i_21])))))))));
                            arr_70 [i_24] [(_Bool)1] [i_23] [i_23 - 2] [i_23] [i_23] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65527))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    {
                        arr_76 [i_21] [i_22 + 2] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) % (arr_68 [(unsigned char)2] [i_26] [i_26] [i_26] [i_21] [i_21])))));
                        var_61 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((+(arr_61 [i_21]))) : ((~(arr_61 [i_21])))));
                        var_62 = ((/* implicit */_Bool) (short)-11370);
                    }
                } 
            } 
            var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) var_6))));
        }
        var_64 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_63 [i_21]), (arr_63 [i_21]))))));
    }
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
    {
        arr_80 [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4503530907893761LL)) || ((_Bool)1)));
        /* LoopNest 3 */
        for (long long int i_29 = 0; i_29 < 18; i_29 += 1) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (short i_31 = 0; i_31 < 18; i_31 += 3) 
                {
                    {
                        var_65 = ((/* implicit */long long int) ((arr_19 [i_28]) || (((/* implicit */_Bool) var_3))));
                        arr_89 [(unsigned short)12] [i_28] [i_30] [i_29] [i_28] [i_28] = ((((/* implicit */_Bool) -666690442895295818LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)197)));
                        var_66 = ((/* implicit */unsigned short) 3254900248U);
                        var_67 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_86 [i_28] [i_29] [i_28] [i_28])) - (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
        /* LoopNest 2 */
        for (unsigned short i_32 = 2; i_32 < 17; i_32 += 3) 
        {
            for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
            {
                {
                    var_69 = (~((~(((/* implicit */int) var_14)))));
                    /* LoopNest 2 */
                    for (signed char i_34 = 2; i_34 < 15; i_34 += 1) 
                    {
                        for (short i_35 = 1; i_35 < 17; i_35 += 1) 
                        {
                            {
                                arr_101 [(signed char)12] [i_32] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28238)))))));
                                var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_34 - 2] [i_35 + 1])) ? (536869888) : (arr_11 [i_32 - 2] [(unsigned char)22] [i_33 - 1] [i_34 + 3]))))));
                            }
                        } 
                    } 
                    var_71 = ((/* implicit */signed char) ((((/* implicit */int) arr_71 [i_32] [i_32 - 1] [i_33 - 1])) & (((/* implicit */int) arr_71 [i_32] [i_32 - 2] [i_33 - 1]))));
                }
            } 
        } 
    }
    var_72 = ((/* implicit */long long int) ((signed char) (+(min((((/* implicit */int) var_15)), (var_6))))));
    var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_12))))))));
    var_74 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))))), (min((((/* implicit */long long int) (unsigned short)50762)), (((-3527696027116739294LL) / (-4503530907893759LL)))))));
}
