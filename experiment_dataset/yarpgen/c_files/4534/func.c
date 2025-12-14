/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4534
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
    var_14 = ((/* implicit */_Bool) max((2655828329U), (((unsigned int) var_5))));
    var_15 |= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 - 1] [11U]))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                    var_16 = (~(((/* implicit */int) (unsigned char)161)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (min((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)50609)) : (((/* implicit */int) (unsigned char)240)))))) : (((/* implicit */int) arr_11 [i_1 - 1]))));
                            var_18 ^= ((/* implicit */int) (+(0U)));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)206)) ? (((((/* implicit */_Bool) (unsigned short)64098)) ? (4294967295U) : (7U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))), (((/* implicit */unsigned int) ((((8493524996752737585ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24049))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19402)) ? (2655828328U) : (0U)))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) max((arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_15 [i_2] [i_2] [i_2 - 2] [(signed char)10]))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) <= (max((arr_13 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2]), (arr_13 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1])))));
                            var_20 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) arr_11 [i_0 - 1])), (4294967295U))));
                        }
                        for (int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max(((-(-1187046555910738492LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) : (((/* implicit */int) arr_14 [i_0 - 1] [i_1] [4LL] [i_3] [i_3])))))));
                            var_22 = min((arr_8 [i_6] [i_3] [i_2] [(short)3]), (((/* implicit */int) min((arr_9 [i_0 - 1]), (arr_9 [i_0 - 1])))));
                            arr_19 [i_0] [i_0] [(unsigned short)4] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-82)), (2655828329U)))) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) 381932759527721674ULL)) ? (((/* implicit */int) (unsigned char)206)) : (-33554432))) : ((+(((/* implicit */int) arr_7 [i_6] [i_1 - 1] [i_1 - 1])))))) : ((-(((/* implicit */int) arr_17 [i_0] [i_0] [i_2 + 1] [i_0] [i_6 + 2] [i_6]))))));
                            var_23 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (15817768175912016017ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 1]))) : (4071418867U))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0] [i_0 - 1] [i_1] [i_3] [i_1 + 1] [i_2 + 1])), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_0 - 1] [i_0 - 1] [i_7] [i_1 + 1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_1 + 1] [i_2 + 1]))))) : (arr_1 [i_0])));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0])), ((unsigned char)181)))) ^ ((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_1]), (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [(_Bool)1]))))) : ((+(arr_22 [i_1])))));
                            var_25 ^= ((/* implicit */unsigned short) ((max((arr_1 [4]), (((/* implicit */long long int) 2327244687U)))) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)8)))))));
                        }
                        var_26 = ((/* implicit */unsigned char) 2327244687U);
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 + 1] [i_0 - 1] [4U] [i_3]))) : (4294967295U)))) ? (((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_0 - 1] [i_2 + 1] [3U])) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_0 - 1] [i_2 - 2] [i_3])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_0 - 1] [i_2] [i_2])))) : (((/* implicit */int) arr_15 [i_1 - 1] [i_0 - 1] [i_1 - 1] [i_0]))));
                        var_28 = ((/* implicit */_Bool) arr_8 [i_3] [i_2 + 1] [i_0 - 1] [i_0 - 1]);
                        var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1])) || (((/* implicit */_Bool) (unsigned short)19402))))) : ((~(1056964608)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        arr_26 [i_0] [0U] [0U] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [(signed char)5]);
                        var_30 &= ((/* implicit */_Bool) (+(2891761528U)));
                        arr_27 [i_0] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */long long int) 1639138968U);
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */int) min((min((((/* implicit */unsigned int) arr_7 [i_9] [i_0 - 1] [(unsigned short)6])), (arr_20 [i_0] [i_0 - 1] [i_1 + 1]))), (((/* implicit */unsigned int) arr_7 [i_9] [i_0 - 1] [i_0 - 1]))));
                            arr_30 [i_0 - 1] [i_0 - 1] [(unsigned short)8] [i_2] [i_8] [i_9] [i_9] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_2 - 2] [i_9] [i_2]))));
                            var_32 = ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_8] [i_0])) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) arr_11 [i_8])))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_8] [i_2 - 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_2] [i_1] [i_0] [i_0])))) != ((~(((/* implicit */int) (unsigned short)63902))))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 4) 
                    {
                        var_34 = (~(((((((/* implicit */int) arr_17 [i_0 - 1] [i_1 - 1] [i_2] [i_0 - 1] [i_1] [i_1 - 1])) / (((/* implicit */int) arr_4 [2] [(unsigned short)5] [(unsigned short)5])))) ^ ((+(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_35 = ((/* implicit */unsigned int) (+(9223372036854775807LL)));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2094)) > (((((/* implicit */int) arr_9 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))));
                        arr_34 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                    }
                    var_36 = arr_4 [i_0] [i_1 + 1] [i_2 + 1];
                }
            } 
        } 
    } 
}
