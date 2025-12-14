/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210139
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) % (min((var_1), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 1])))))) / (((9533493906156558095ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) -911871923)) : (arr_4 [9] [9]))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 2])))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (arr_3 [i_1]))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_4 [i_3] [i_4]);
                                var_11 = ((/* implicit */int) min(((signed char)113), (((/* implicit */signed char) arr_10 [i_0 + 1] [i_1] [i_3 + 1] [i_3 - 1] [i_0 + 1]))));
                                var_12 = ((/* implicit */_Bool) max((((((/* implicit */int) max((((/* implicit */signed char) arr_10 [i_0] [i_1] [(unsigned short)3] [i_3] [i_0])), ((signed char)126)))) ^ (((var_4) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_1 [i_4] [i_4])))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
                                var_13 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) (signed char)-127);
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [i_1] [6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_10 [(unsigned char)1] [(unsigned char)1] [i_5] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) && (((/* implicit */_Bool) arr_12 [10] [i_0 + 1])))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) -7773651804375596347LL)) : (var_1)))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) arr_11 [i_0 + 1]);
                        arr_20 [i_0] [i_1] [i_0] = arr_11 [i_6];
                        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) | ((~(arr_7 [i_0] [i_0])))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_7 = 1; i_7 < 8; i_7 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-118))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned short) (~(arr_4 [i_0] [i_0])));
                        arr_27 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0 - 1] [i_0 + 1] [6ULL])) % (((/* implicit */int) arr_3 [i_0]))));
                    }
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_30 [i_1] = ((/* implicit */int) arr_1 [i_7] [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 2] [(unsigned char)4] [i_0 + 2] [i_0 + 2] [i_7 - 1])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) : (arr_18 [i_0] [i_0] [i_0 + 2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))))));
                            arr_33 [0ULL] [i_1] [i_1] [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) ((arr_26 [i_0 - 1] [i_1] [i_7 + 2] [i_7 + 1] [i_7] [i_7 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0 - 1] [i_1] [i_7 + 1] [i_7 + 3] [i_7] [i_7 + 1]))) : (var_6)));
                        }
                        var_19 = ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_1] [i_0] [i_0 + 1] [(_Bool)0])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_0] [i_0 + 2] [i_0])));
                    }
                }
                for (long long int i_11 = 2; i_11 < 9; i_11 += 2) 
                {
                    arr_36 [i_0] [i_0] [i_0 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */int) min((arr_25 [i_11 + 1] [i_11 - 2] [i_11 - 1]), (arr_25 [i_11 + 2] [i_11 - 1] [i_11])))) != (((/* implicit */int) min((arr_25 [i_11 + 2] [i_11 - 2] [i_11]), (arr_25 [i_11 + 1] [i_11 - 1] [i_11]))))));
                    var_20 = (_Bool)1;
                    var_21 = ((/* implicit */unsigned int) arr_18 [i_11] [i_11] [i_11] [4U]);
                }
            }
        } 
    } 
    var_22 |= (-(((((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))) >> (((var_2) - (7293856628182601729LL))))));
    var_23 = ((/* implicit */unsigned int) (-(min(((~(((/* implicit */int) (signed char)126)))), (((/* implicit */int) var_9))))));
    var_24 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        for (long long int i_13 = 1; i_13 < 11; i_13 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_14 = 2; i_14 < 10; i_14 += 1) 
                {
                    arr_47 [i_12] [i_12] [i_14] = ((/* implicit */unsigned char) min((arr_45 [i_12] [i_13] [i_12]), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-116)), (arr_43 [i_13 - 1] [i_13 + 2] [i_13]))))));
                    arr_48 [i_12] [4U] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_37 [i_14 + 1] [i_13 + 2]) / (((/* implicit */unsigned long long int) arr_42 [i_14] [i_14 - 2] [i_13 + 1]))))) ? (((((/* implicit */_Bool) arr_37 [i_12] [i_13 - 1])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (signed char)127)))) : (min((((((/* implicit */int) (short)1)) - (arr_44 [i_13]))), (((arr_42 [7] [7] [i_12]) | (((/* implicit */int) arr_38 [i_12]))))))));
                }
                for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (int i_17 = 2; i_17 < 12; i_17 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_49 [i_13] [i_13] [i_15])), (((((/* implicit */_Bool) max((arr_40 [i_12]), (arr_50 [i_12] [i_15])))) ? (arr_37 [i_12] [i_13]) : (arr_40 [i_12])))));
                                arr_55 [(_Bool)1] [i_13 + 1] [i_15] [12LL] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17] [i_17 - 2] [i_17] [i_17 - 2] [i_17])) ? (arr_53 [i_16] [i_17 + 1] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (arr_53 [i_12] [i_17 - 1] [i_12] [i_12] [i_12]) : (max((arr_53 [i_15] [i_17 - 1] [i_17] [i_17] [i_17 + 1]), (arr_53 [i_17] [i_17 - 2] [5LL] [(_Bool)1] [i_17])))));
                                var_26 = (-(((var_7) / ((-(((/* implicit */int) arr_46 [i_17])))))));
                                arr_56 [i_12] [0LL] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_37 [i_13 + 1] [i_17 + 1]) & (arr_37 [i_13 - 1] [i_17 - 2])))) ? (min((arr_37 [i_13 - 1] [i_17 + 1]), (arr_37 [i_13 - 1] [i_17 + 1]))) : (arr_37 [i_13 + 2] [i_17 - 1])));
                            }
                        } 
                    } 
                    arr_57 [i_12] [(unsigned char)11] [i_15] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_13 + 2] [(short)9])) ? (((/* implicit */long long int) arr_39 [i_13 + 2] [i_13 - 1])) : (arr_49 [i_13] [i_13 - 1] [i_13 + 1]))), (((/* implicit */long long int) ((var_7) & (arr_39 [i_13 - 1] [0]))))));
                    arr_58 [8] [i_13] = ((/* implicit */long long int) min((((((arr_54 [i_12] [(unsigned char)12] [i_12] [(unsigned char)12] [11LL] [i_12] [i_12]) ^ (((/* implicit */unsigned long long int) 3609612961U)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13 + 2] [i_13 + 2] [i_13 - 1]))))), (((/* implicit */unsigned long long int) var_7))));
                    var_27 = ((/* implicit */unsigned short) arr_49 [i_13 - 1] [i_13 - 1] [i_15]);
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            {
                                var_28 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_41 [i_12] [i_12] [i_12]) >> (((((/* implicit */int) (unsigned char)255)) - (224)))))) ? (((((/* implicit */_Bool) arr_50 [i_12] [i_13 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [2ULL]))) | (arr_54 [(signed char)8] [i_13] [(short)3] [i_13 + 2] [(short)3] [(short)3] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(signed char)5] [i_13 + 2] [i_13 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_12] [3U] [i_15] [i_15])))));
                                arr_65 [i_13 + 2] [i_15] [11ULL] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_43 [(unsigned short)9] [i_13 + 2] [i_15]), (arr_43 [i_13] [i_13 + 2] [i_13])))) ? (((((/* implicit */int) arr_43 [i_12] [i_13 + 1] [i_15])) & (((/* implicit */int) arr_43 [(signed char)4] [i_13 + 1] [(unsigned char)9])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_43 [i_12] [i_13 - 1] [(signed char)5]))))));
                            }
                        } 
                    } 
                }
                arr_66 [i_12] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_43 [(signed char)9] [i_12] [i_13 - 1]), (arr_43 [(unsigned short)6] [i_12] [i_13 + 1]))))) : (max((arr_40 [i_13 - 1]), (((/* implicit */unsigned long long int) (unsigned short)65535)))));
                var_29 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_13 - 1] [i_13 - 1])) || (((/* implicit */_Bool) arr_63 [i_12] [i_12] [i_13 + 2] [i_12] [i_13])))))) == (max((arr_50 [i_13 + 1] [i_13 + 2]), (arr_63 [(unsigned short)9] [(unsigned short)9] [i_13 + 2] [(short)8] [i_12]))));
            }
        } 
    } 
}
