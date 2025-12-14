/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224976
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
    var_11 = ((/* implicit */unsigned int) (!(var_8)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_12 += min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (0ULL))), (((/* implicit */unsigned long long int) -2081444817)));
        arr_2 [i_0] = ((/* implicit */short) (~(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [11])))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((((/* implicit */_Bool) min((11394025662620275146ULL), (((/* implicit */unsigned long long int) 29360128U))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_0 [i_1] [i_1]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_1] [i_1] [11LL])), (arr_1 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [7U])) ? (16777215) : (((/* implicit */int) (short)(-32767 - 1))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_5 [i_1] [5ULL] [i_1])))), ((+(((/* implicit */int) arr_5 [i_2] [9ULL] [(unsigned short)2]))))));
            var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) min((4265607168U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))) ? (((unsigned int) max((arr_3 [i_1]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */unsigned int) ((min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)202)))) / (min((arr_1 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_12 [i_1] = ((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_2]);
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_3 [i_1])))))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), ((((!(((/* implicit */_Bool) (short)-22608)))) || (((/* implicit */_Bool) (~(var_3))))))));
                    arr_18 [i_1] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((16555504363181010146ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_4]))))))));
                }
                arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (-4074058790005671069LL)));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                arr_23 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~((+(arr_15 [i_1] [i_1] [i_6]))))))));
                            arr_28 [i_7] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_25 [i_7 + 1] [i_8] [(unsigned char)10]));
                            arr_29 [i_1] [i_2] [i_7] [i_7 + 1] [i_8] = ((/* implicit */signed char) arr_26 [3ULL] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_30 [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_6]);
            }
            /* vectorizable */
            for (unsigned int i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    arr_36 [i_10] [i_10] [i_10] [i_10] = ((((/* implicit */int) arr_3 [i_9 + 2])) == (((/* implicit */int) arr_3 [i_9 - 1])));
                    arr_37 [i_2] [13] = ((/* implicit */_Bool) arr_1 [i_9 + 2]);
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_18 -= ((/* implicit */unsigned char) (~(var_10)));
                    arr_41 [i_1] [i_2] [i_2] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [(short)3] [(short)3] [i_9]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))) ? (arr_20 [i_9 + 2] [i_2] [5U]) : (arr_15 [i_11] [i_2] [i_1])));
                    var_19 = ((/* implicit */int) var_5);
                }
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)256))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17944))) : (((((/* implicit */unsigned long long int) arr_15 [i_2] [9] [i_9])) - (var_2)))));
                arr_42 [i_2] [i_2] = ((/* implicit */unsigned char) arr_14 [i_2] [i_9 + 2] [i_9]);
                arr_43 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_3);
            }
        }
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
        {
            arr_47 [i_1] = ((/* implicit */_Bool) min(((~(max((arr_45 [i_1] [i_12]), (((/* implicit */unsigned int) 255)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) | (((/* implicit */int) ((((/* implicit */int) arr_11 [i_12])) > (-468727529)))))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (int i_14 = 1; i_14 < 13; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_15 = 1; i_15 < 11; i_15 += 4) 
                        {
                            var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_15 + 3] [i_1]))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1518589095778534961LL)) ? ((~(arr_25 [i_1] [i_1] [(unsigned char)9]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_6)))))))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_12] [i_13] [i_14]))))), (((arr_46 [i_1] [i_1]) ? (((/* implicit */int) arr_56 [i_12])) : (((/* implicit */int) arr_3 [i_14]))))))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_54 [i_1] [(signed char)1] [i_13] [i_14])), (arr_34 [i_1] [i_1] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1])) / (((/* implicit */int) (short)17944))))) : (min((var_2), (((/* implicit */unsigned long long int) -284973233))))))));
                    }
                } 
            } 
            arr_58 [i_12] [i_12] [i_1] = ((/* implicit */unsigned int) (short)-17928);
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (int i_17 = 1; i_17 < 13; i_17 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1]))))), (((unsigned long long int) arr_14 [12U] [i_1] [i_16])))) > (max((((((/* implicit */unsigned long long int) var_10)) / (var_2))), (((/* implicit */unsigned long long int) 3681328010U))))));
                        arr_64 [i_1] [i_1] [(signed char)7] |= ((/* implicit */unsigned short) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12]))) ^ (arr_60 [i_16]))))), (arr_17 [(_Bool)1] [i_12] [(signed char)7] [i_17] [i_17 + 1] [i_17 + 1])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) /* same iter space */
        {
            arr_67 [(signed char)11] [i_18] [i_1] = ((/* implicit */unsigned long long int) (signed char)-8);
            arr_68 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-17945)) ? (arr_44 [i_1]) : (arr_44 [i_1])));
        }
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (short)-32758)))));
        arr_73 [i_19] = ((/* implicit */unsigned long long int) var_3);
        arr_74 [i_19] = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) & (((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))));
        arr_75 [i_19] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_7 [i_19] [i_19] [i_19]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        for (short i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            {
                                arr_86 [i_23] [i_21] [(signed char)2] [i_21] [i_19] = (~((~(((/* implicit */int) arr_31 [i_19] [i_19] [i_21] [i_22])))));
                                arr_87 [(unsigned char)2] [(unsigned char)2] [i_22] [10LL] [i_21] = ((/* implicit */int) ((unsigned char) arr_80 [i_19] [i_19] [i_21]));
                                arr_88 [i_19] [i_20] [i_21] [i_21] [i_21] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_77 [i_19] [i_19] [i_19])) - (((/* implicit */int) var_0))));
                                arr_89 [i_23] [12U] [i_21] [i_21] [i_23] [i_19] = ((/* implicit */unsigned long long int) arr_31 [i_19] [i_19] [i_22] [i_23]);
                            }
                        } 
                    } 
                    arr_90 [i_20] [i_20] [i_21] [(unsigned short)8] = ((/* implicit */int) ((29360128U) * (var_10)));
                }
            } 
        } 
    }
}
