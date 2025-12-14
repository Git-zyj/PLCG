/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51653
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
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
    var_19 = ((/* implicit */unsigned long long int) ((var_9) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((int) var_5)))) - (1)))));
    var_20 -= var_15;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)50443)) > (((/* implicit */int) arr_4 [i_0] [i_1])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2])))));
                    var_22 = arr_0 [i_2 + 2];
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3209924796643726463ULL)) ? (arr_1 [i_1] [i_3]) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_1])) >> (((((/* implicit */int) arr_0 [i_0])) - (64)))))))))));
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8792))) : (arr_10 [i_3] [i_1] [i_1] [i_1] [i_1])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_3 [i_3])) : (arr_8 [i_1] [i_1] [i_2] [i_3]))) : ((+(arr_8 [i_0] [i_1] [i_2] [i_3])))));
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_26 &= ((/* implicit */unsigned char) 2054766820U);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5] [i_1] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_0] [i_3] [i_1])));
                            var_28 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2] [i_1]))));
                            var_29 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2] [i_3] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14300))) : (arr_17 [i_3] [i_1] [i_6] [i_3] [i_2 + 1])));
                            var_31 = ((/* implicit */unsigned char) arr_8 [i_0] [i_6] [i_0] [i_2 - 2]);
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]))));
                            var_33 = ((/* implicit */_Bool) (((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9358))))) << (((arr_13 [i_2 - 1] [i_1] [i_2]) - (725115871)))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3]))));
                            var_35 = ((/* implicit */_Bool) (short)-31560);
                        }
                        for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_36 = ((/* implicit */int) (unsigned char)99);
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)69)))))))));
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (4187080295704928927LL)))) ? (((((/* implicit */_Bool) var_13)) ? (15070409588770017948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_9])))));
                        var_39 *= ((/* implicit */unsigned long long int) ((arr_9 [i_9] [i_1] [i_0] [i_9]) <= (((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_1])) < (var_8))))));
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    var_41 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_11] [i_0] [i_11] [i_10 + 4])) || (var_3)));
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_12] [i_10 + 1]))) : (var_8)));
                        var_43 = ((/* implicit */_Bool) var_14);
                        var_44 -= ((((/* implicit */_Bool) arr_26 [i_12] [i_0])) ? ((+(((/* implicit */int) (signed char)86)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 336318892)) <= (arr_15 [i_0] [i_0] [i_11])))));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (short)-21800)) + (21817)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_10] [i_10] [i_10] [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (30ULL)))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_46 |= ((/* implicit */long long int) (~(arr_6 [i_0] [i_10 - 1] [i_10 - 1])));
                        var_47 = ((/* implicit */int) max((var_47), ((~(arr_3 [i_0])))));
                        var_48 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) var_11)));
                        var_49 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_13]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) arr_19 [i_0] [i_0] [i_11] [i_0] [i_10 - 1] [i_0] [i_0]))));
                        var_51 -= ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_11] [i_14]);
                    }
                    for (signed char i_15 = 3; i_15 < 8; i_15 += 1) 
                    {
                        var_52 |= ((/* implicit */unsigned char) (_Bool)1);
                        var_53 = (-(((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_15] [i_15 - 3])));
                        var_54 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_15 + 3] [i_11] [i_10] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((_Bool) arr_23 [i_0] [i_0] [i_11] [i_15])))));
                    }
                    var_55 = ((/* implicit */signed char) (-(arr_28 [i_11] [i_10] [i_0] [i_0])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                var_56 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_18])) >> (((/* implicit */int) arr_46 [i_18]))));
                var_57 &= ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_18])) <= (((/* implicit */int) arr_47 [i_18]))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_58 &= ((/* implicit */int) 3962013901U);
                var_59 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_16] [i_16] [i_16 + 1])) > (((/* implicit */int) var_3))));
                var_60 = ((/* implicit */short) (+(arr_45 [i_16 - 1])));
            }
            var_61 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            var_62 = ((((/* implicit */_Bool) ((short) (signed char)127))) ? (((/* implicit */int) var_2)) : (var_10));
        }
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 1) 
        {
            var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_45 [i_16])))) ? (((((/* implicit */_Bool) (short)-5811)) ? (var_10) : (var_10))) : (((/* implicit */int) var_17))));
            var_64 = ((/* implicit */unsigned int) arr_55 [i_16] [i_16 - 1]);
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                for (int i_22 = 1; i_22 < 12; i_22 += 1) 
                {
                    {
                        var_65 = ((/* implicit */unsigned long long int) arr_59 [i_16] [i_16 + 2] [i_22 - 1]);
                        var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) ((((/* implicit */_Bool) 332953414U)) ? (((int) var_9)) : (((/* implicit */int) arr_55 [i_22 + 1] [i_16 + 1])))))));
                    }
                } 
            } 
            var_67 = ((/* implicit */short) var_9);
        }
        /* LoopSeq 3 */
        for (int i_23 = 0; i_23 < 15; i_23 += 3) 
        {
            var_68 = (short)0;
            var_69 = ((/* implicit */long long int) (-(((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_23] [i_16] [i_23] [i_23]))) : (arr_49 [i_16] [i_16] [i_23])))));
            var_70 -= ((/* implicit */signed char) ((((1308145207) == (((/* implicit */int) arr_63 [i_23] [i_23] [i_16])))) ? (((/* implicit */int) arr_55 [i_16 + 2] [i_23])) : (((/* implicit */int) ((arr_51 [6LL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        }
        for (int i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_71 = (+(((/* implicit */int) arr_60 [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 - 1])));
                var_72 = ((/* implicit */int) ((((/* implicit */int) arr_58 [i_25] [i_16 + 2] [i_16 - 1] [i_16])) < (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_50 [i_16] [i_25] [i_16] [i_24]))))));
                /* LoopNest 2 */
                for (signed char i_26 = 4; i_26 < 14; i_26 += 4) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 4) 
                    {
                        {
                            var_73 = ((/* implicit */unsigned char) var_1);
                            var_74 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_63 [i_16 - 1] [i_16 - 1] [i_16 - 1]))));
                        }
                    } 
                } 
            }
            for (long long int i_28 = 0; i_28 < 15; i_28 += 2) 
            {
                var_75 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5532288734000520272ULL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_59 [i_28] [i_16 - 1] [i_16 - 1]))))) : ((+(var_10)))));
                var_76 -= ((/* implicit */unsigned long long int) (signed char)-47);
            }
            /* LoopSeq 1 */
            for (int i_29 = 0; i_29 < 15; i_29 += 2) 
            {
                var_77 = ((/* implicit */unsigned short) (~(((arr_69 [i_16] [i_24] [i_29]) >> (((var_8) - (397943457U)))))));
                var_78 = ((/* implicit */long long int) ((((/* implicit */int) arr_60 [i_16] [i_16 - 1] [i_16 - 1] [i_16 + 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_29] [i_29] [i_29])))))));
            }
            var_79 += ((/* implicit */int) ((((/* implicit */_Bool) ((int) 12914455339709031337ULL))) && (((/* implicit */_Bool) 402653184))));
            var_80 = ((/* implicit */int) max((var_80), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (((/* implicit */unsigned int) arr_65 [i_24] [i_24]))))))))));
            var_81 *= ((/* implicit */_Bool) ((signed char) arr_44 [i_16 - 1]));
        }
        for (signed char i_30 = 0; i_30 < 15; i_30 += 4) 
        {
            var_82 ^= ((((/* implicit */int) arr_59 [i_16 - 1] [i_16 - 1] [i_16 + 2])) - (((/* implicit */int) arr_53 [i_30] [i_30] [i_16])));
            var_83 = ((/* implicit */long long int) ((unsigned long long int) arr_67 [i_16] [i_16 + 1] [i_30]));
            /* LoopNest 2 */
            for (unsigned short i_31 = 0; i_31 < 15; i_31 += 3) 
            {
                for (int i_32 = 0; i_32 < 15; i_32 += 3) 
                {
                    {
                        var_84 &= ((/* implicit */long long int) arr_95 [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1]);
                        var_85 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)60))))) ? (((/* implicit */unsigned long long int) arr_73 [i_16 - 1] [i_30] [i_16 - 1] [i_16 - 1])) : (arr_76 [i_16] [i_16] [i_30] [i_30] [i_31] [i_16] [i_32])));
                        /* LoopSeq 3 */
                        for (int i_33 = 1; i_33 < 14; i_33 += 2) 
                        {
                            var_86 = ((/* implicit */short) max((var_86), (((/* implicit */short) (!(((/* implicit */_Bool) arr_79 [i_33 + 1] [i_32])))))));
                            var_87 = ((/* implicit */_Bool) arr_63 [i_16] [i_16] [i_31]);
                            var_88 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_95 [i_33 - 1] [i_30] [i_31] [i_32] [i_16 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_95 [i_33 + 1] [i_30] [i_16] [i_32] [i_16 - 1]))));
                            var_89 = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_33 + 1] [i_33 + 1] [i_16 + 2])) && (((/* implicit */_Bool) arr_48 [i_16] [i_33 - 1] [i_16 - 1]))));
                            var_90 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_82 [i_16])) ? (arr_80 [i_16]) : (((/* implicit */int) arr_91 [i_16 + 2] [i_30] [i_31]))))));
                        }
                        for (int i_34 = 1; i_34 < 13; i_34 += 1) 
                        {
                            var_91 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_97 [i_34] [i_32] [i_32] [i_31] [i_30] [i_16]) / (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_98 [i_31] [i_31])) : (((/* implicit */int) arr_83 [i_16 + 1])))))));
                            var_92 = ((/* implicit */unsigned long long int) (unsigned char)255);
                            var_93 = ((/* implicit */int) ((unsigned char) var_16));
                            var_94 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_16] [i_30] [i_34 - 1] [i_31] [i_34] [i_34 - 1])) ? (((((/* implicit */_Bool) arr_84 [i_16] [i_30] [i_30] [i_32])) ? (((/* implicit */int) arr_47 [i_31])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)199))));
                        }
                        for (int i_35 = 3; i_35 < 13; i_35 += 4) 
                        {
                            var_95 = ((/* implicit */unsigned char) ((((_Bool) var_8)) ? (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_30] [i_31] [i_30] [i_30])))))) : (arr_71 [i_35] [i_35] [i_35 + 2] [i_35] [i_31] [i_35])));
                            var_96 = ((/* implicit */long long int) ((_Bool) (-(arr_79 [i_30] [i_30]))));
                        }
                        var_97 = ((/* implicit */short) ((((/* implicit */int) arr_85 [i_16 + 2] [i_30])) * (((int) (_Bool)0))));
                    }
                } 
            } 
        }
        var_98 = ((/* implicit */unsigned long long int) arr_66 [i_16 + 2]);
        var_99 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_56 [i_16] [i_16] [i_16]) ^ (((/* implicit */long long int) arr_75 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_95 [i_16] [i_16] [i_16] [i_16 + 1] [i_16]))) : (arr_49 [i_16] [i_16] [i_16])));
    }
    for (unsigned long long int i_36 = 0; i_36 < 15; i_36 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_37 = 0; i_37 < 15; i_37 += 2) 
        {
            for (unsigned long long int i_38 = 1; i_38 < 13; i_38 += 1) 
            {
                {
                    var_100 = ((/* implicit */short) (_Bool)1);
                    var_101 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) (-(arr_57 [i_36])))) : (((((/* implicit */_Bool) 3018256854880363884ULL)) ? (var_1) : (((/* implicit */unsigned long long int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((-8013999354581267822LL) + (9223372036854775807LL))) << (((var_9) - (6754181215062334180LL))))) >= (((/* implicit */long long int) min((arr_96 [i_36] [i_37] [i_36]), (((/* implicit */int) var_7))))))))) : (var_11));
                }
            } 
        } 
        var_102 = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)17)) > (((/* implicit */int) arr_55 [i_36] [i_36])))), ((!(((/* implicit */_Bool) arr_55 [i_36] [i_36]))))));
        var_103 = max((((/* implicit */unsigned long long int) ((((arr_107 [i_36]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) / (var_4)))))), ((~(arr_110 [i_36] [i_36]))));
        var_104 &= ((/* implicit */unsigned short) var_16);
    }
    for (unsigned long long int i_39 = 0; i_39 < 15; i_39 += 1) /* same iter space */
    {
        var_105 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 14463997389581735515ULL)) && (((/* implicit */_Bool) 5532288734000520279ULL))))))))));
        var_106 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
    }
}
