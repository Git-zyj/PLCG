/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209797
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [(unsigned char)6] &= ((/* implicit */unsigned short) max((max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)55824)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9712))) : (arr_1 [i_0])))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)22320)), (-1758097773)))))))))));
        var_12 = min((((/* implicit */unsigned int) ((arr_0 [i_0]) <= (max((((/* implicit */unsigned long long int) var_7)), (arr_0 [i_0])))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((3009786893U), (((/* implicit */unsigned int) (signed char)-98)))), (arr_3 [i_1 - 1])));
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (3009786893U)))), (((11785672293005447080ULL) >> (((((/* implicit */int) arr_5 [i_0] [i_1])) - (108))))))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)55823);
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
            {
                arr_19 [i_3] = ((/* implicit */signed char) -966160842);
                var_14 = ((/* implicit */signed char) var_6);
            }
            for (int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
            {
                arr_22 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(min(((~(0))), (((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 4]))))));
                var_15 = ((/* implicit */long long int) arr_4 [i_5] [i_3] [i_2]);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (((((/* implicit */_Bool) 10211353669502419511ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9712))) : (2403155197435386254LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            arr_23 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_15 [i_2])), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9705))))))), (((/* implicit */long long int) max(((signed char)-96), (((/* implicit */signed char) ((10211353669502419511ULL) <= (((/* implicit */unsigned long long int) 1758097773))))))))));
            var_17 = ((/* implicit */_Bool) 1285180402U);
            var_18 += ((/* implicit */unsigned short) (((-(min((arr_11 [i_2]), (((/* implicit */unsigned int) arr_6 [12ULL] [i_3])))))) < ((~(var_5)))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_19 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_17 [i_2] [(_Bool)1] [i_7])), (arr_10 [i_7] [10U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [(short)6]))) : (var_0)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned int) arr_28 [i_2] [i_3] [2] [i_7]);
                        var_21 = ((/* implicit */int) (!(arr_17 [(short)3] [i_3] [i_7])));
                        var_22 -= ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9712))))) : (4294967295U));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_23 = ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_18 [i_2] [i_3] [i_7])));
                        var_24 = ((/* implicit */signed char) var_6);
                        arr_35 [i_2] [i_3] [i_6] [i_3] [i_6] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_2] [i_3] [i_6] [i_2] [i_9]))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_3 [i_6]))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)37))))) ? (((((/* implicit */int) var_8)) - (arr_32 [i_2] [(unsigned short)5] [11U] [8U] [11U]))) : (((/* implicit */int) arr_13 [i_7])))))));
                    }
                    var_27 *= ((/* implicit */unsigned short) (+(arr_28 [9U] [i_3] [i_6] [i_7])));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_28 -= (!(((/* implicit */_Bool) 978118725U)));
                        var_29 = ((/* implicit */unsigned long long int) (unsigned short)9712);
                    }
                    arr_40 [i_10] [i_3] [i_6] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_0);
                    var_30 = ((/* implicit */unsigned short) ((1285180403U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))));
                }
                for (short i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), ((+(((((/* implicit */_Bool) arr_37 [(signed char)2] [2ULL] [(unsigned short)8] [i_12 + 2])) ? (((/* implicit */unsigned int) min((-465946265), (0)))) : (3009786892U)))))));
                    var_32 = ((/* implicit */_Bool) min((var_32), ((!((!(((/* implicit */_Bool) 3009786895U))))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (max(((-(742295652U))), (arr_43 [i_12 + 2] [i_12] [i_12 - 1] [(unsigned char)0])))));
                    var_34 = ((/* implicit */unsigned int) (~(max((471145785), (((/* implicit */int) arr_25 [i_3]))))));
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max(((-(arr_32 [i_3] [i_12 + 2] [i_13] [i_13 + 1] [i_13]))), (((/* implicit */int) (unsigned short)9970)))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (var_6)));
                        var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)54))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 9; i_14 += 2) 
                    {
                        var_38 |= ((/* implicit */int) arr_14 [8ULL]);
                        var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) max((401927146), (((/* implicit */int) arr_38 [i_14] [i_3] [i_14] [i_12] [i_14] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-113)) - (-1605891513)))) : (max((3316848570U), (((/* implicit */unsigned int) -1605891513))))));
                    }
                }
                arr_49 [i_2] [i_2] [i_3] [(unsigned short)8] = ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) var_9)), (arr_6 [i_3] [i_3]))) : (((((/* implicit */int) (short)17246)) - (((/* implicit */int) (signed char)45)))));
            }
            for (long long int i_15 = 2; i_15 < 12; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_40 = ((/* implicit */long long int) max((var_40), (max((((((((/* implicit */_Bool) var_7)) ? (arr_55 [i_2] [i_3] [i_15] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) min((arr_11 [i_15]), (((/* implicit */unsigned int) arr_16 [i_16] [i_3] [i_2]))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-21634)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (3009786893U))))))));
                    arr_56 [i_3] = ((/* implicit */unsigned int) arr_10 [(signed char)0] [(unsigned short)7]);
                    var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(16196009978705663464ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [(unsigned short)8] [i_15] [0ULL]))));
                }
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) -354518906))));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        var_43 -= ((/* implicit */int) max(((short)21633), (((/* implicit */short) (((~(978118726U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_15] [i_15]))))))))));
                        arr_63 [i_3] = ((/* implicit */unsigned long long int) max((min((arr_62 [i_18] [i_3] [i_18] [i_18 + 1] [i_18 + 1]), (((/* implicit */signed char) arr_33 [i_2] [i_3] [i_15] [i_17] [i_2])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_44 [i_18 + 1] [i_3] [i_17] [(unsigned short)10] [i_3] [i_3] [i_2])))))))));
                        arr_64 [(unsigned short)1] [i_3] [(unsigned short)11] [i_3] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((arr_37 [i_18 + 1] [i_3] [i_3] [i_15 - 1]), (var_7)))) / (var_1)));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (-((-(187020361))))))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (short)16667))));
                        var_46 = ((/* implicit */unsigned int) arr_30 [i_3] [i_17] [i_15] [i_3] [i_3]);
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 4) /* same iter space */
                    {
                        arr_70 [i_2] [i_2] [i_15] [(short)10] [i_2] [i_2] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) -2159135097743382158LL))));
                        var_47 = ((/* implicit */signed char) arr_53 [i_2] [i_3] [i_2] [i_2]);
                        var_48 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_15] [i_20] [i_20] [i_15 - 2] [i_15])))))));
                    }
                    arr_71 [i_3] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_18 [i_15 - 1] [i_3] [i_15])) ? (-2159135097743382158LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_15 - 1] [i_3] [i_15]))))), (((/* implicit */long long int) arr_18 [i_15 - 1] [i_3] [i_15]))));
                    arr_72 [(signed char)7] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (arr_58 [i_15 + 1] [i_15 + 1] [i_3])))) || (((/* implicit */_Bool) arr_28 [9LL] [i_15] [i_3] [i_2]))));
                }
                arr_73 [i_2] [9] [i_3] = (-((((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [8U] [i_2] [i_3])) ? (arr_28 [i_15] [i_15] [i_3] [i_2]) : (arr_50 [i_2] [i_3] [i_3])))) : (var_5))));
            }
            for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
            {
                var_49 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)106)) * (((/* implicit */int) (unsigned char)65))));
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_26 [i_2] [i_3] [i_21] [i_2])), (arr_37 [i_2] [8] [i_2] [i_2]))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_20 [11U]))))) ? (arr_31 [i_2] [i_2] [i_2]) : (arr_37 [i_2] [2LL] [i_21] [i_3]))))))));
            }
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [12U] [(signed char)12] [i_22] [i_23 + 1] [i_2])) ? (((/* implicit */int) arr_62 [i_2] [(unsigned char)2] [i_22] [i_23 + 1] [i_2])) : (((/* implicit */int) arr_62 [i_2] [(_Bool)1] [(_Bool)0] [i_23] [i_3]))))))))));
                    var_52 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)113)), (arr_43 [i_2] [(signed char)6] [i_22] [i_3]))), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_25 [i_3])))), (arr_44 [(_Bool)1] [i_3] [i_3] [i_22] [i_22] [i_23 - 1] [i_23 - 1]))))));
                }
                for (short i_24 = 3; i_24 < 9; i_24 += 4) 
                {
                    var_53 = ((/* implicit */unsigned char) arr_17 [i_3] [i_3] [i_24]);
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        var_54 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (19625904U)));
                        var_55 = ((/* implicit */long long int) ((max(((~(arr_59 [i_3] [i_22] [i_24] [i_22]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                    }
                    var_56 = (+(((/* implicit */int) arr_14 [i_2])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        var_57 = min((((/* implicit */int) arr_69 [i_2] [i_3] [7LL] [i_3] [i_26])), ((+(((/* implicit */int) arr_57 [i_24 - 3] [i_24 - 1] [i_24 + 4] [i_3] [(unsigned char)5] [i_24 + 4])))));
                        var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) max(((-(((/* implicit */int) max((arr_81 [i_26] [i_24] [12] [i_3] [i_2]), (var_9)))))), (((/* implicit */int) arr_12 [2] [i_26])))))));
                        arr_86 [(short)1] [(short)1] [i_3] = ((/* implicit */short) max((arr_80 [i_24 + 4] [(signed char)8] [i_24 + 2] [i_24 + 2] [i_24] [i_24 - 1]), (((/* implicit */long long int) var_8))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_27 = 3; i_27 < 12; i_27 += 4) 
                {
                    arr_89 [i_3] [i_3] [i_3] [i_3] [i_3] = (-(max((2303172546915668531ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    arr_90 [i_3] [i_27 - 2] [i_22] [i_22] [(unsigned char)4] [i_3] = ((/* implicit */unsigned int) 2307366606898656347LL);
                }
                var_59 = ((/* implicit */unsigned short) (((+(arr_28 [i_2] [i_3] [i_22] [i_2]))) << ((-(((/* implicit */int) (_Bool)0))))));
                var_60 = ((/* implicit */short) 3838733790U);
            }
        }
        arr_91 [i_2] [i_2] = ((/* implicit */int) var_4);
        var_61 = ((/* implicit */short) max(((-(3791683635U))), ((-(arr_43 [i_2] [i_2] [i_2] [(_Bool)0])))));
    }
    var_62 = ((/* implicit */int) 5108835139357148640LL);
}
