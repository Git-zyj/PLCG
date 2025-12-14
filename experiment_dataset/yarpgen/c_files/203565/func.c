/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203565
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(_Bool)1] = min(((-(min((var_11), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_1 - 1] [i_1 - 1]))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] = arr_8 [i_3 + 3] [i_1 - 1] [i_1] [i_1 - 1];
                                arr_15 [(_Bool)1] [i_1] [i_1] [i_2] [(signed char)14] [i_3] [15ULL] = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (var_9)))));
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [9U] [i_0] [1U] [(short)14])) ? (max((arr_12 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) : (((((/* implicit */_Bool) arr_13 [i_1 - 1] [(_Bool)1])) ? (min((var_10), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (~(2250202715U))))))));
                    arr_18 [(signed char)14] [4U] [6ULL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (2044764580U) : (arr_1 [i_0])))))) ? (((((/* implicit */int) ((short) arr_4 [i_1] [i_1]))) / (((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        arr_23 [i_0] [3ULL] [i_0] = ((arr_1 [i_1 - 1]) >= (arr_1 [6ULL]));
                        arr_24 [i_0] [i_1 - 1] [(unsigned char)7] [14ULL] [i_5] [(unsigned char)13] = ((/* implicit */signed char) ((unsigned short) (-(var_3))));
                        arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(unsigned char)9] [i_1])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) arr_5 [i_5])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [i_1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_6])))) : (max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) 2250202715U)) : (arr_12 [i_0]))), (((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_1] [i_2] [i_6]) ? (((/* implicit */long long int) var_9)) : (arr_28 [i_6] [15ULL] [15ULL] [8]))))))));
                        arr_30 [(unsigned char)14] [i_0] [9U] [i_2] [i_2] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((9466160403023600069ULL) ^ (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_6])))))))) ? ((((!(arr_8 [(unsigned short)6] [i_1] [i_1] [i_0]))) ? (max((((/* implicit */long long int) 2044764574U)), (arr_9 [i_0] [12U] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9] [9] [i_2] [i_6]))) : (var_16)))))) : (((/* implicit */long long int) arr_13 [i_0] [i_0]))));
                    }
                    arr_31 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [2LL] [6ULL] [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2]))) : ((~(var_15)))))) ? (((((/* implicit */_Bool) arr_28 [5U] [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_16)) : (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_0]))))))));
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_35 [(unsigned char)11] = 2250202704U;
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_40 [i_0] [(signed char)6] [i_7] [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (16433033507195742389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534)))))) ? (((((/* implicit */unsigned long long int) arr_37 [i_1 - 1] [i_1] [i_1 - 1] [i_0])) + (var_10))) : (((/* implicit */unsigned long long int) (~(arr_37 [i_1 - 1] [(signed char)1] [i_1 - 1] [13ULL]))))));
                                arr_41 [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1])) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)14394)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(_Bool)1]))) : (var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [6] [i_8] [i_9]))))))))));
                                arr_42 [i_0] [i_1] [i_7] [i_8] [i_0] [i_9] = ((/* implicit */signed char) (!(((((/* implicit */int) (signed char)38)) >= (((/* implicit */int) min((((/* implicit */signed char) arr_20 [i_0] [i_1] [12ULL] [i_9])), (var_6))))))));
                                arr_43 [i_9] [i_8] [i_7] [i_1] [i_0] [i_9] = ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_7])) ? (arr_28 [i_0] [i_1 - 1] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) & (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_7])), (min((var_11), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_7] [i_8] [i_9])))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    arr_48 [i_0] [i_10] [i_1 - 1] [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_27 [(_Bool)1] [(_Bool)1] [i_10] [(unsigned char)11] [i_1])))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_10] [(_Bool)1] [i_0] [i_0]))))), (arr_39 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10] [i_10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_0] [i_1 - 1] [i_1] [i_10 + 1]))))))));
                    arr_49 [i_10] [i_1] = arr_12 [i_0];
                    arr_50 [i_10] = ((/* implicit */short) (~((~(((/* implicit */int) var_14))))));
                }
                arr_51 [i_0] [i_1] = ((/* implicit */unsigned short) arr_28 [i_0] [(_Bool)1] [i_0] [0]);
                arr_52 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */_Bool) ((arr_46 [i_1 - 1] [(short)2] [(_Bool)1]) ? (max((arr_21 [i_0] [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1]), (((((/* implicit */_Bool) arr_4 [(unsigned char)14] [8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_0]))) : (arr_9 [i_0] [i_1] [5U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16433033507195742398ULL)) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_14)) ? (max((var_3), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_8))))))));
}
