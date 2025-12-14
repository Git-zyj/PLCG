/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221883
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [2] [i_1] [i_3] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)73)), (1102919016)));
                                arr_14 [i_2] [i_2] [i_2] [i_1] [8LL] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_3] [i_4 - 1])), (min((1152921504606846944ULL), (((/* implicit */unsigned long long int) 307491527))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [18ULL] [i_3] [i_1 - 1] = ((/* implicit */int) (-((((!(((/* implicit */_Bool) arr_7 [i_0] [(signed char)7] [i_1 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_9 [i_1] [i_2] [i_2] [(_Bool)1]))) : ((+(arr_9 [i_1] [i_1] [i_1 - 1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                    {
                        arr_19 [17ULL] [(signed char)12] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((arr_12 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1]) ? (((/* implicit */unsigned long long int) 133169152)) : ((+(((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 + 1] [i_2] [8ULL] [i_1 - 1])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) 3385924869966336445LL))))))));
                        var_21 = ((/* implicit */long long int) (signed char)0);
                        arr_20 [i_0] [(signed char)11] [2ULL] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [15U] [i_1 - 1])))) ? (min((arr_18 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_1] [i_1 + 1] [i_1 + 1] [i_6] [i_6] = ((/* implicit */int) (~(arr_11 [i_0] [i_6] [i_2] [16ULL] [i_0] [i_0])));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_28 [i_0] [9U] [i_1] [i_6] [22U] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_1 - 1] [19] [i_1 - 1]))));
                            arr_29 [i_0] [i_6] [20ULL] [i_6] [20U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */_Bool) -7873571668209899617LL)) ? (((/* implicit */int) arr_22 [i_7] [(signed char)2] [16] [14LL])) : (((/* implicit */int) (unsigned short)7499)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1865922185)))))));
                            arr_30 [i_0] [19] [i_0] [19] [19] [i_0] [i_1] = 133169151;
                            var_22 -= 1366814537846313506ULL;
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 133169152)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58011))) : (-2302409899903298374LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [9] [(short)9] [i_2] [i_7] [i_7])) ? (arr_2 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24764)))))) : (arr_21 [i_2] [(signed char)18] [(signed char)12] [(_Bool)1] [i_1 + 1] [i_2]))))));
                        }
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 3) 
                        {
                            arr_34 [i_8 + 1] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6679))));
                            arr_35 [i_1] [i_1 - 1] [i_1 - 1] [8] [8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_1] [i_2] [(signed char)13] [9LL])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_6] [i_8])) : (((/* implicit */int) arr_16 [i_8] [i_6] [i_1] [i_1] [i_1] [i_0]))));
                            arr_36 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [23LL] [(_Bool)0] [i_6] [i_8 - 1])) ? (1865922185) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [4] [i_8 - 2]))));
                            var_24 += (((!(((/* implicit */_Bool) arr_8 [i_6])))) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_8 - 3] [i_1 - 1] [i_1 - 1])) : ((+(((/* implicit */int) (signed char)-113)))));
                        }
                        for (short i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_25 = (~(arr_18 [i_1 + 1] [i_9 + 2] [i_9 - 1]));
                            arr_40 [13LL] [i_1 + 1] [i_2] [i_9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_10 [i_1 + 1]))));
                            arr_41 [7ULL] [i_1] [(unsigned char)15] [i_6] [i_6] = ((/* implicit */long long int) arr_10 [(unsigned char)7]);
                            arr_42 [i_0] [i_1] [i_2] [i_2] [(unsigned short)17] [(short)18] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_38 [i_9] [i_9 + 2] [i_6] [i_2] [i_1 + 1]))));
                        }
                        arr_43 [i_1] [0LL] [i_1] [i_1] = (+(arr_4 [i_1] [i_1]));
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [(signed char)10] [i_1 - 1] [i_1 - 1])) ? (arr_9 [i_6] [i_6] [i_1 - 1] [i_1 + 1]) : (arr_9 [i_2] [i_0] [i_1 - 1] [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (arr_31 [i_1] [i_1 - 1] [i_1 - 1] [(signed char)2] [i_1])));
                            arr_47 [i_0] [i_1] [i_1] [20ULL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 281474439839744LL))));
                            var_28 = ((((/* implicit */_Bool) arr_25 [(unsigned char)18] [i_6] [i_1 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_1 - 1] [(signed char)8] [i_1] [i_1]))) : ((-9223372036854775807LL - 1LL)));
                            var_29 = ((/* implicit */signed char) ((arr_12 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_10] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_50 [i_0] [i_0] [(unsigned char)1] [i_0] [i_1] = ((/* implicit */long long int) ((arr_12 [(_Bool)1] [(short)6] [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_25 [i_6] [i_2] [i_1] [i_1 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))));
                            arr_51 [i_1] = ((/* implicit */int) (+(arr_4 [i_1 + 1] [i_1])));
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_56 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? ((+(arr_55 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_12])) ? (arr_9 [i_1] [i_2] [15] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))))))));
                        arr_57 [(unsigned char)7] [(unsigned char)7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967288U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [0ULL] [i_2] [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_52 [i_0] [i_1 + 1] [i_2] [i_12] [i_12])) : (((/* implicit */int) arr_8 [i_12]))))) ? (arr_31 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) arr_49 [i_1])) : (arr_21 [i_1] [i_1] [i_2] [i_2] [i_2] [i_12])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17982128515724416467ULL)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (_Bool)1)))))))))));
                        var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1135820570434459911LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (1649267441664LL)))) ? (((((/* implicit */_Bool) 9477334818400441002ULL)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_2] [i_12])))) : (((((/* implicit */_Bool) 150009664825257739LL)) ? (1865922174) : (((/* implicit */int) arr_25 [i_12] [(unsigned char)18] [8ULL] [i_2] [i_1] [i_0])))))), (arr_24 [i_1] [i_2] [i_1] [i_0])));
                    }
                    arr_58 [i_1] [i_1] = ((/* implicit */unsigned int) max(((~(arr_1 [i_1 + 1]))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 576394560)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (arr_9 [i_1] [(unsigned short)7] [(unsigned short)7] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_3);
}
