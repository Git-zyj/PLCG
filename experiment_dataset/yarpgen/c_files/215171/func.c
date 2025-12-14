/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215171
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21000)) >> (((72057559678189568ULL) - (72057559678189551ULL)))));
                        arr_14 [i_1] [i_1] = ((/* implicit */int) ((0ULL) + (((/* implicit */unsigned long long int) 10))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        arr_18 [i_1] = ((((/* implicit */int) arr_3 [i_4 - 1])) == (((/* implicit */int) (unsigned short)7)));
                        arr_19 [i_0] [(_Bool)1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) == (arr_11 [i_4 - 1] [i_1] [i_1] [i_1])));
                    }
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((min((0ULL), (((((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [(_Bool)1] [i_2])) + (72057559678189568ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_1)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -770046661)) && (((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [(signed char)0]))))) >> (((((/* implicit */int) (unsigned short)65522)) >> (((18446744073709551615ULL) - (18446744073709551590ULL))))))))));
                        arr_24 [i_0] [i_1] [4] [i_2] [i_5] [i_5] |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_1))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((-2156406373349149491LL) + (9223372036854775807LL))) >> (((18446744073709551615ULL) - (18446744073709551606ULL))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_0] [i_5] [i_2] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -397767617)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            arr_29 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (0ULL))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                            arr_30 [i_0] [i_6] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 72057559678189565ULL)) && (((/* implicit */_Bool) 397767616)))))));
                            var_21 -= min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65518)) - (arr_12 [i_6] [i_0] [i_0] [i_0] [i_0])))), ((-(16143166950528069070ULL))));
                            arr_31 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [i_6]))))), (arr_12 [(unsigned char)5] [i_1] [i_2] [i_5] [i_6]))) << (((min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_2])), (var_6))) - (45409ULL)))));
                        }
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) || (((((/* implicit */int) var_3)) == ((+(((/* implicit */int) var_9))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_11))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (arr_1 [i_7 - 1]))))));
                var_25 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65522)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_7] [i_0])))))));
                arr_37 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_7 - 1] [i_7])) && (((/* implicit */_Bool) var_10))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (arr_1 [i_0])))) == (((/* implicit */int) (unsigned char)0))));
                            arr_44 [i_9] [i_7] [i_9] [i_0] [i_7 - 1] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) >> (((18446744073709551615ULL) - (18446744073709551607ULL)))));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_0] [i_0] [4LL] [i_10 - 1] [i_10 + 1] [i_7])) == (((((/* implicit */int) arr_33 [i_0] [i_7])) >> (((var_5) + (743756739)))))));
                        }
                    } 
                } 
            }
            for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned char i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        {
                            arr_52 [i_0] [(unsigned char)2] [i_11] [i_12] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
                            arr_53 [i_0] [i_7] [i_7] [i_12] [i_13] = ((/* implicit */unsigned long long int) (+(arr_50 [i_0] [i_0] [i_0] [i_0] [i_7])));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((arr_15 [i_12]) < (arr_15 [i_0]))))));
                            arr_54 [7U] [i_12] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((72057559678189565ULL) << (((1474492894) - (1474492874)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_14 = 3; i_14 < 11; i_14 += 2) 
                {
                    var_29 &= ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) < (2156406373349149490LL)));
                        var_31 |= (+(((/* implicit */int) arr_33 [i_11] [i_15])));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_14 - 3] [(unsigned short)10] [i_7 - 1] [i_7] [(unsigned short)10] [i_7 - 1] [i_0])) && (((/* implicit */_Bool) arr_42 [i_14 - 3] [i_14 + 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [(signed char)10]))));
                        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */int) var_3)) >> (((/* implicit */int) arr_1 [i_7 - 1]))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_8))));
                    }
                }
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_35 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54977)) >> (((var_5) + (743756749)))));
                    arr_61 [i_0] [i_7] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_49 [i_7] [i_7] [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_7] [i_7] [i_7] [i_16]))))))));
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned short)24598)) - (24588))))))));
                    arr_65 [i_7] [4LL] = ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_26 [i_7] [i_7 - 1] [i_7])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                    {
                        arr_70 [i_0] [i_7 - 1] [i_7] [i_7 - 1] [i_17] [i_7 - 1] [i_18] = ((0ULL) < (18446744073709551615ULL));
                        arr_71 [i_0] [i_7] [i_11] [i_11] [i_18] = ((/* implicit */short) (~(397767597)));
                        arr_72 [i_0] [i_18] [i_17] [i_18] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_15))));
                    }
                    for (unsigned short i_19 = 2; i_19 < 11; i_19 += 4) 
                    {
                        arr_76 [i_0] [i_7] [(signed char)4] [i_17] [i_7] [(unsigned char)6] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_47 [i_7] [i_7])) + (0U)));
                        var_37 |= ((/* implicit */short) (-(((((/* implicit */int) var_11)) % (((/* implicit */int) var_9))))));
                        arr_77 [i_0] [i_7] [i_7] [2LL] [i_19 + 1] [2LL] = ((/* implicit */unsigned short) (~(2LL)));
                    }
                    for (long long int i_20 = 1; i_20 < 11; i_20 += 4) 
                    {
                        var_38 *= ((/* implicit */unsigned short) ((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24598))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_20 - 1] [i_7 - 1])) * (4719732749565115143ULL))))));
                        var_41 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_66 [i_7] [i_7 - 1] [i_11] [i_7 - 1] [i_7 - 1])) + (((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_7 - 1] [i_17]))));
                    }
                }
            }
            var_42 -= ((((/* implicit */_Bool) (-(13727011324144436471ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_0] [i_7 - 1] [i_7] [0] [i_0]))))));
            /* LoopSeq 3 */
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (arr_15 [i_7])));
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((72057559678189565ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39523))))))));
            }
            for (signed char i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                arr_87 [i_22] [i_7] [i_7] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_7 - 1]))) | (18374686514031362065ULL)));
                arr_88 [i_7] [2ULL] [10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_39 [i_7 - 1] [i_7 - 1])) - (var_12)));
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 397767597)) && (((/* implicit */_Bool) arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])))))));
            }
            for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    arr_95 [i_0] [11U] [(unsigned short)11] [i_7] = (!(((/* implicit */_Bool) arr_55 [i_0] [i_7 - 1] [i_7] [i_24] [i_24])));
                    /* LoopSeq 3 */
                    for (short i_25 = 0; i_25 < 12; i_25 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((13727011324144436471ULL) + (((/* implicit */unsigned long long int) 931148247U)))))));
                        var_47 += ((/* implicit */long long int) ((arr_86 [i_0] [i_7] [i_0] [i_25]) ^ (((/* implicit */int) var_1))));
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [(unsigned short)10]))) * (0ULL))))));
                        var_49 += ((/* implicit */unsigned char) ((((var_7) ^ (733005222893800720ULL))) + (18446744073709551615ULL)));
                        var_50 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65521))));
                    }
                    for (short i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
                    {
                        arr_102 [i_0] [i_7] [i_23] [i_24] [i_26] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_91 [i_7 - 1] [i_7]))));
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */int) (unsigned short)14)) >> ((((+(931148247U))) - (931148237U))))))));
                        arr_103 [i_7] = ((/* implicit */signed char) ((arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_26]) + (arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                    }
                    for (short i_27 = 0; i_27 < 12; i_27 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-45)))))) % (14110616405577543389ULL)));
                        arr_106 [i_7] = ((/* implicit */unsigned short) (+(arr_89 [i_0] [i_0] [i_0] [i_7 - 1])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        arr_109 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)34)) && (((/* implicit */_Bool) 4294967295U))));
                        arr_110 [i_0] [i_0] [i_28] [i_28] [i_23] [i_24] [i_0] &= ((/* implicit */unsigned short) (!((_Bool)1)));
                        var_53 = ((/* implicit */unsigned char) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_7 - 1])))));
                    }
                    for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) 
                    {
                        var_54 ^= ((/* implicit */int) ((16165469282882129077ULL) >> (((/* implicit */int) arr_84 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 4LL))));
                        arr_113 [i_0] [i_0] [i_7] [i_0] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) arr_40 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                        var_56 += ((/* implicit */unsigned short) (-(4719732749565115144ULL)));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_57 = ((/* implicit */_Bool) max((var_57), ((!(((/* implicit */_Bool) var_14))))));
                        var_58 = ((/* implicit */short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_15))));
                        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (14986401602445201586ULL))))));
                        arr_116 [i_0] [i_0] [i_0] [i_24] [i_7] = ((/* implicit */_Bool) ((17713738850815750896ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2542)))));
                    }
                }
                var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) (~(16165469282882129077ULL))))));
                var_61 = ((/* implicit */unsigned long long int) max((var_61), (((7191560983255475559ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_0] [i_7] [i_23] [i_23] [i_0])))))));
            }
            var_62 += ((/* implicit */short) ((((/* implicit */_Bool) arr_93 [i_7 - 1] [i_0] [i_7 - 1] [i_7 - 1])) && (((/* implicit */_Bool) 18446744073709551602ULL))));
        }
        var_63 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_91 [i_0] [i_0])), ((unsigned short)8184)))) + (((((/* implicit */int) arr_91 [i_0] [i_0])) % (((/* implicit */int) arr_91 [i_0] [i_0]))))));
        var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) min((min((2147483647), (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_11)))))))));
    }
    var_65 = ((/* implicit */unsigned short) var_7);
    var_66 = ((/* implicit */unsigned short) max((var_66), (((/* implicit */unsigned short) var_8))));
}
