/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191162
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
    var_18 *= ((/* implicit */short) ((var_5) ^ (((/* implicit */unsigned long long int) var_12))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_15))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (max((((/* implicit */unsigned int) (unsigned short)0)), (59002044U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_15)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (59002044U)))), (((var_11) ? (var_17) : (((/* implicit */long long int) var_2))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2 - 1])) ? (arr_1 [i_0 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
                    var_21 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (short)18893)), (((((/* implicit */unsigned int) arr_10 [i_0] [(unsigned short)2] [(short)5] [i_2])) - (59002044U))))), (((/* implicit */unsigned int) (unsigned char)117))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 7246955452783739955ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_3 [4LL] [i_0]))))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((min(((((_Bool)1) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 + 1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_16)))), (((/* implicit */int) arr_9 [i_0] [(short)12] [i_1] [i_2 - 1])))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_0] [i_3]) ? (arr_5 [i_0]) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])) < (((/* implicit */int) (short)-32748))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)126))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_13 [(short)0] [i_1]), (arr_13 [i_0 + 1] [i_1])))), (((arr_12 [i_3] [i_1] [i_3] [i_3]) & (arr_12 [0] [i_1] [i_2] [i_3])))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))))), (((/* implicit */unsigned int) ((_Bool) min(((short)-18893), (((/* implicit */short) arr_2 [i_4] [(unsigned short)17]))))))));
                        var_25 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */int) var_9)) % (arr_10 [i_0] [i_2] [i_1] [i_0])))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (_Bool)0))))) > (((((/* implicit */_Bool) (unsigned char)132)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_4 - 1]))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_5 + 1]))));
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) 59002044U));
                        arr_23 [i_2] [i_2] [i_5 + 1] [i_2] |= ((/* implicit */unsigned int) ((((unsigned long long int) (_Bool)1)) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2])))));
                        arr_24 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
                        arr_25 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 22; i_6 += 1) 
                    {
                        arr_30 [i_0] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_28 [(unsigned char)15] [i_1] [i_2 + 1] [i_6 - 1]));
                        var_26 = ((/* implicit */unsigned char) ((((arr_1 [(_Bool)1] [i_1]) <= (((/* implicit */unsigned long long int) var_2)))) ? (((/* implicit */int) arr_11 [i_6 - 3] [i_2 - 2] [i_0 - 1] [i_0 - 1])) : (-1)));
                        arr_31 [i_0] [i_0 - 2] [i_1] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0]));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_7);
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_8))));
}
