/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218000
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
    var_14 = ((/* implicit */int) ((13085688022863558745ULL) - (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1776499812)) ? (var_5) : (-1525896676))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) min((arr_8 [i_0] [(short)15] [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0] [i_2] [i_2 - 4])) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 4])))), (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_4 [i_0] [(unsigned short)9] [i_2 - 1]))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_10 [12] [i_0] [i_0])), (2662810262U)))) > (((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_1] [i_1] [12U] [i_1]))))) / ((-(-1901946159816639102LL)))))));
        }
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-121), (arr_7 [(_Bool)1] [i_0])))) ? (((arr_10 [i_0] [i_0] [i_0]) ? (var_10) : (1628285555))) : ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 4; i_4 < 24; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_4])))) < (((((/* implicit */_Bool) var_4)) ? (1901946159816639102LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_15 [(unsigned char)19])) || (((/* implicit */_Bool) var_1))))));
        arr_16 [i_4] = ((/* implicit */short) (-(((arr_15 [i_4 + 1]) / (((/* implicit */unsigned long long int) 846748743))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_4] [i_5] [i_5] [i_6 - 1] [19U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_4]))))) ? (((/* implicit */int) (unsigned short)32279)) : (-1628285556)));
                        arr_25 [i_4] [i_5] [i_4] [i_7 - 2] [12] [12] = ((/* implicit */unsigned char) (short)-19150);
                        /* LoopSeq 1 */
                        for (int i_8 = 1; i_8 < 22; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -966511385)) ? (arr_22 [i_4 - 1] [i_7] [i_6] [(signed char)2] [(signed char)2]) : (((/* implicit */unsigned long long int) 1776499812))))));
                            arr_29 [i_7 - 2] [(unsigned short)3] [i_4] [i_6] [i_4] [7ULL] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_5] [i_5 - 1] [i_5 - 1] [i_5]))));
                            var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_28 [i_5] [i_6] [(unsigned short)19] [i_5]) : (arr_19 [22] [i_7] [i_5]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_8 + 1])) ? (arr_15 [i_8 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))));
                            arr_30 [i_4] [i_5] [i_4] [i_5] [i_4] [i_8] [12U] = ((/* implicit */unsigned short) 4294967295U);
                        }
                    }
                    for (unsigned char i_9 = 2; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)5680)) ? (((/* implicit */int) arr_23 [15] [i_5] [i_6 + 3] [20LL])) : (((/* implicit */int) arr_32 [i_4] [i_4])))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (_Bool)1))))));
                        var_24 = ((/* implicit */long long int) arr_15 [i_6]);
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_13 [6]) : (arr_17 [24]))) << (((arr_20 [i_4] [i_4 - 3] [i_4] [i_4]) + (1573109028))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 23; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    arr_40 [i_4] [i_4] [i_4] = (-((-(((/* implicit */int) (unsigned char)199)))));
                    arr_41 [i_4 - 4] [i_4 - 2] [i_4] [i_11] = ((((/* implicit */int) arr_18 [i_4 - 2])) * (((/* implicit */int) arr_18 [i_4 - 2])));
                }
            } 
        } 
    }
    for (int i_12 = 2; i_12 < 12; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) var_6);
            arr_46 [i_12] [i_12] = ((/* implicit */unsigned short) (unsigned char)248);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                arr_51 [i_12] [(short)0] [i_12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_12] [i_12 - 1])) > (((/* implicit */int) arr_26 [i_12 - 1]))));
                arr_52 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_13] [i_14] [i_13]))) - (1901946159816639095LL))) + (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_23 [i_12] [i_13] [i_14] [i_13])))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_31 [i_12] [i_15] [i_15]))));
            /* LoopSeq 1 */
            for (int i_16 = 3; i_16 < 13; i_16 += 1) 
            {
                arr_58 [12U] [i_12] [i_16 - 1] [12U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_12] [i_12 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_12] [i_12 - 2]))));
                var_28 = (~((-(arr_28 [i_12] [i_12] [i_16 - 1] [i_15]))));
            }
            arr_59 [(unsigned short)12] [i_12] = arr_45 [i_15] [i_15];
            arr_60 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_12 - 1]))) + (2662810262U)));
        }
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) arr_55 [i_12] [i_18]);
                    arr_68 [i_12] [i_17] [i_18] [i_17] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) (unsigned char)1)) ? (arr_66 [i_12 + 1] [i_12] [i_12] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((short) ((arr_54 [i_12] [7ULL] [7ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) (+(-1628285555)))) : (((((/* implicit */_Bool) arr_15 [i_12 + 2])) ? (arr_66 [i_12 - 2] [(signed char)4] [(signed char)4] [i_12 - 1]) : (140735340871680ULL))))))));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        for (short i_20 = 2; i_20 < 11; i_20 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) >= (arr_9 [i_19 - 1] [i_19 - 1])))) > (((((/* implicit */int) var_13)) - (var_12)))))), (((((((/* implicit */_Bool) arr_43 [i_19] [i_19])) ? (12) : (((/* implicit */int) arr_42 [i_18] [(unsigned short)2])))) << (((((/* implicit */_Bool) (unsigned short)42110)) ? (0ULL) : (((/* implicit */unsigned long long int) 203481878U)))))))))));
                                var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1901946159816639095LL)) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-190)), (var_2)))) ? ((-(140735340871680ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14148)) | (((/* implicit */int) arr_69 [i_12] [i_18] [i_19] [i_12])))))))));
                                var_33 = ((/* implicit */long long int) arr_66 [9U] [i_19 - 1] [i_12] [(unsigned short)3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                {
                    arr_82 [i_21] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 397696025)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 32767ULL)) ? (18446744073709518852ULL) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)12]))))) ? (4026531840U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11836)))))));
                    arr_83 [i_22] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11836)) || (((/* implicit */_Bool) arr_6 [i_22] [i_22])))))))) ? ((((!(arr_10 [i_21] [i_22] [i_23]))) ? ((+(-1901946159816639107LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)32767), (arr_3 [i_21] [i_23]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((int) (_Bool)1)) <= (min((arr_38 [i_21] [i_22] [i_23]), (((/* implicit */int) arr_78 [i_23]))))))))));
                    var_34 = ((/* implicit */_Bool) -1731857233);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_75 [i_21]) : (((/* implicit */unsigned int) 586366955)))))))) * (((/* implicit */int) (short)0))));
                }
            } 
        } 
        var_36 = ((/* implicit */short) min((((((((/* implicit */int) (_Bool)1)) < (var_5))) ? (arr_2 [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709518848ULL)) ? (arr_0 [i_21]) : (((/* implicit */unsigned int) arr_38 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))), (((/* implicit */unsigned long long int) arr_35 [i_21]))));
        arr_84 [16LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1731857232)) : (((((((/* implicit */_Bool) arr_4 [i_21] [i_21] [i_21])) && (((/* implicit */_Bool) (short)-32760)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)0)))) : ((+(arr_5 [i_21] [i_21] [i_21])))))));
        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_81 [(unsigned short)5] [(unsigned short)5] [i_21]))))) : (min((((/* implicit */int) var_6)), (var_10))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_21] [i_21] [i_21] [15U]))) : (7342427686392466334ULL))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_2 [i_21] [i_21]))))))));
    }
}
