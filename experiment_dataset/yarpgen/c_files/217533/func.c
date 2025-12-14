/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217533
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */unsigned long long int) arr_1 [i_0])) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))))) - (4256795624ULL)))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (2594615588U)))) ? (((/* implicit */long long int) (-(arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-7414099824872483442LL) : (var_10)))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned char i_4 = 4; i_4 < 12; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_18 [i_5] [i_4 - 2] [i_3] [1LL] [3LL] = ((/* implicit */unsigned int) var_7);
                            var_15 = ((/* implicit */unsigned char) 1700351708U);
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26289)))));
                            arr_19 [(unsigned char)2] [i_2 - 1] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) / (9223372036854775807LL)))) ? (((4797339154908509559LL) & (((/* implicit */long long int) 1700351707U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (1700351702U))))));
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_11 [i_2 + 1] [i_2 - 2] [i_4 - 4] [(short)9] [i_4 - 4] [i_4 - 4]) : (((/* implicit */long long int) ((/* implicit */int) (short)8857)))));
                        }
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) (+((+(4294967295U)))));
                            var_18 = ((/* implicit */unsigned char) (signed char)127);
                            arr_23 [4LL] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((min((arr_3 [i_2 - 1] [4U]), (-6338072890469138006LL))) <= (((((var_1) + (9223372036854775807LL))) << (((arr_3 [i_2 - 1] [i_2 + 1]) - (3073901350512423410LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_26 [i_7] [i_7] = ((/* implicit */signed char) (-(var_9)));
                            arr_27 [9LL] [i_3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) 2594615583U))));
                        }
                        arr_28 [(unsigned char)0] [i_2 - 1] [(unsigned char)0] [i_2 - 1] = (~(((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
                        arr_29 [i_1] [i_1] [(short)11] [i_1] [11LL] [i_1] = ((/* implicit */unsigned char) max(((~(min((var_8), (((/* implicit */unsigned int) (short)-13293)))))), ((~(var_11)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_1])) ? (1700351708U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))) - (((unsigned long long int) arr_21 [(unsigned char)11] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 2]))));
                    }
                } 
            } 
        } 
        arr_30 [6LL] = ((((((/* implicit */_Bool) arr_22 [9LL] [i_1] [i_1] [i_1] [(short)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_22 [i_1] [1U] [(signed char)11] [i_1] [1LL]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
        arr_31 [i_1] [i_1] = ((/* implicit */long long int) (-((~(2594615587U)))));
        var_20 = ((/* implicit */unsigned char) max((min((((var_1) | (-4039475797381987592LL))), (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1] [i_1])))), (min((((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32767)) - (32767))))), (((/* implicit */long long int) arr_8 [i_1]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned char)0);
        arr_36 [(unsigned char)2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
        var_21 = (~(((((/* implicit */_Bool) (unsigned char)74)) ? (var_13) : (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    var_22 = ((/* implicit */signed char) min((max((var_9), (max((((/* implicit */long long int) var_8)), (var_6))))), ((-(min((var_1), (var_9)))))));
    var_23 = ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */long long int) ((unsigned char) (short)-32668))), ((+(var_3))))) : (((((/* implicit */_Bool) min((var_8), (948844257U)))) ? (((9102491867847876351LL) % (((/* implicit */long long int) 67108864U)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)-20)))))))));
}
