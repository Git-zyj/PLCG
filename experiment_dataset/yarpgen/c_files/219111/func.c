/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219111
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6036697948490191569LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [23LL])))))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) >= (arr_4 [i_1] [i_0] [i_1]))))))) : (((((-6036697948490191570LL) / (((/* implicit */long long int) var_1)))) & (((/* implicit */long long int) ((/* implicit */int) ((6036697948490191562LL) > (((/* implicit */long long int) -1))))))))));
                        arr_12 [i_1] [(_Bool)1] [i_3 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)2] [i_3] [i_3 - 1] [(unsigned char)24])))))) * (max((((/* implicit */unsigned int) (_Bool)1)), (2536481550U)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (6036697948490191572LL)));
                        var_21 = (+(((/* implicit */int) ((_Bool) arr_1 [i_2] [i_4 + 1]))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(arr_16 [i_1 - 1] [i_1] [(unsigned char)23] [i_2] [i_2] [i_1]))))));
                        var_23 = ((/* implicit */int) min(((~(((unsigned long long int) arr_9 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned short)17]))))) && ((!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_0])))))))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_6] [i_6] = (~(((/* implicit */int) ((_Bool) ((arr_6 [i_2] [(signed char)5]) ? (arr_5 [i_0] [i_2] [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */unsigned char) (-(((arr_8 [i_1 - 2] [i_5 - 1]) - (arr_8 [i_1 + 1] [i_5 - 1])))));
                        }
                        for (long long int i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            arr_23 [23U] [i_0] [i_2] [i_5] [i_7] = ((/* implicit */unsigned int) (((~(((unsigned long long int) 357685832)))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))), ((+(((/* implicit */int) arr_0 [i_0])))))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_1] [i_2] [(unsigned short)5] [i_7 + 1])) ? (((/* implicit */int) arr_18 [i_7 + 1] [i_1 - 2] [(_Bool)1] [i_5] [i_5])) : (((/* implicit */int) arr_13 [i_5 - 2] [i_1 - 3] [i_1 - 3] [i_7 + 1])))), ((-(((/* implicit */int) (short)16256)))))))));
                            arr_24 [i_0] [i_1 - 2] [18U] [4U] [(signed char)12] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1])), (arr_9 [i_7 - 1])))), (arr_8 [i_5 - 2] [i_7 - 1])))) + ((~(((unsigned long long int) arr_2 [i_0]))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)5]))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 += ((/* implicit */unsigned short) max((((((/* implicit */int) (!(((/* implicit */_Bool) 2684464532U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [7LL] [i_2] [7LL] [i_8]))))))), (((((/* implicit */int) arr_16 [i_8] [i_1] [i_2] [i_1 + 1] [i_0] [i_2])) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_1 + 2] [9U]))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(_Bool)0] [i_0] [i_1 + 1] [i_1 - 3] [i_1 - 1])) ? (arr_19 [i_1 - 4] [i_1 - 2] [i_2] [i_8] [14] [24U]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [10LL] [10LL] [i_1 - 1] [i_1 + 2] [i_1 - 1])))))) ? (arr_25 [i_0] [0] [i_2] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) (short)0))))))))));
                        arr_28 [i_0] [i_0] [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */long long int) 22)) : (var_8))), (((/* implicit */long long int) ((arr_14 [i_8] [i_0] [i_2] [(unsigned char)24] [i_0]) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)17])))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 363648362U)) && (((/* implicit */_Bool) arr_8 [i_0] [i_1])))) ? ((~(arr_8 [i_0] [i_0]))) : (((/* implicit */int) min((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned short) arr_22 [i_8] [i_1] [i_1] [i_0] [(unsigned char)3]))))))))));
                        var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((1243939987U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551604ULL)))) ? (((/* implicit */int) arr_27 [i_0] [7U] [i_2] [i_8])) : (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))))));
                        var_30 += ((/* implicit */int) arr_9 [(_Bool)1]);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)127)))));
                            arr_34 [i_0] [i_10] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_21 [i_1 - 4] [i_1 + 2] [i_10 + 1] [i_9] [i_9 - 3])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2])))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned char) ((_Bool) min((arr_35 [i_9] [i_9] [i_9] [i_0] [i_9 - 1]), (arr_35 [(unsigned char)20] [i_9 - 2] [i_9 - 2] [i_0] [i_9 + 1]))));
                            arr_38 [i_0] [i_1] [24U] [24U] [i_9] [i_11 + 3] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_17 [i_0] [i_11 + 3] [i_11] [i_11] [i_11]), (arr_17 [i_0] [i_11 - 1] [i_11] [i_11] [12U]))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_41 [7U] [i_0] [i_2] [(_Bool)1] [(_Bool)1] = (-(0ULL));
                            var_33 = ((/* implicit */_Bool) (~(2147483640U)));
                        }
                        var_34 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)16] [i_1] [i_0]))) + (((((/* implicit */_Bool) arr_22 [i_0] [(_Bool)1] [(unsigned char)8] [22U] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_2] [i_9] [i_2]))) : (62914560U))))));
                        var_35 = ((/* implicit */_Bool) arr_40 [13ULL] [13ULL] [i_1 + 2] [i_1 + 2] [12U] [i_9]);
                        /* LoopSeq 2 */
                        for (short i_13 = 4; i_13 < 23; i_13 += 3) 
                        {
                            arr_44 [i_0] [(signed char)6] [i_2] [i_9] |= ((/* implicit */short) ((_Bool) arr_0 [i_2]));
                            arr_45 [i_0] [i_0] [7U] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)20] [i_9 - 3] [i_0] [i_13] [i_0])))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_13])), (arr_31 [i_0] [i_0] [i_2] [i_9 + 1] [i_0] [i_0])))) % (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) - (((((/* implicit */int) arr_14 [(unsigned char)17] [(_Bool)1] [i_9 + 1] [i_9] [i_9])) | (((/* implicit */int) arr_18 [i_9] [(unsigned char)3] [i_9 + 1] [i_9] [1])))))))));
                        }
                        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 3) 
                        {
                            arr_50 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_14 - 1] [i_2] [i_1 - 2] [i_1])) ? (((/* implicit */unsigned long long int) arr_43 [i_9 + 1] [i_14] [(unsigned short)13] [(unsigned short)13] [i_14 - 3])) : (min((arr_36 [i_0] [i_1] [i_0] [24] [i_14] [i_14]), (((/* implicit */unsigned long long int) arr_8 [(short)1] [(_Bool)1])))))))));
                            var_37 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [20ULL] [i_1 - 4] [i_2] [i_9] [i_14] [i_0])))))) ? (((((/* implicit */_Bool) 4002546479U)) ? (((/* implicit */int) arr_37 [i_0] [i_14])) : (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [(_Bool)1])))) : (((/* implicit */int) arr_26 [i_14 - 1] [i_0] [i_2] [(unsigned short)21]))))));
                            var_38 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 6036697948490191562LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (4700028563560963825ULL)))));
                            var_39 = ((/* implicit */short) max((arr_37 [i_2] [i_1 + 1]), ((unsigned short)10253)));
                        }
                    }
                    var_40 = ((/* implicit */int) min((var_40), (((((/* implicit */_Bool) (~((+(549755813887LL)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [16U]))))))) : ((~(((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [16LL] [i_1] [i_2] [i_2])), (arr_22 [i_0] [i_0] [i_0] [(short)12] [i_0]))))))))));
                    var_41 += ((/* implicit */long long int) (+(((/* implicit */int) max((arr_11 [i_1 + 2] [(unsigned char)2] [i_1 - 1] [i_1 + 1] [(_Bool)1]), (((/* implicit */unsigned char) arr_6 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */unsigned int) var_9);
    var_43 = ((/* implicit */unsigned char) (short)2048);
}
