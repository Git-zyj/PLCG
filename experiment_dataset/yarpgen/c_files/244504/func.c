/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244504
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
    var_18 = ((/* implicit */unsigned long long int) var_7);
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_12);
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_6 [i_1 - 3] [i_1 + 2] [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */short) arr_1 [i_1 + 2]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (short)30652);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 5696439062283498937ULL))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((arr_11 [i_0] [i_1 - 1] [i_2] [i_4 - 1]), (((((/* implicit */_Bool) arr_12 [i_0] [9U] [i_2] [i_4 + 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)25)))))));
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((12750305011426052659ULL), (5696439062283498937ULL)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) 26568991U)) ? (((/* implicit */int) arr_7 [2U] [i_4] [i_2] [i_1] [2U] [(unsigned char)10])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2]))))))) ? ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 2] [(unsigned char)15] [i_2] [i_1 - 2] [16U] [(_Bool)1]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) arr_0 [(unsigned char)19])) : (((/* implicit */int) var_11))))), (((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_14 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1604477633U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-9991))))) : (((/* implicit */int) (_Bool)0))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_4 + 1] [i_1 - 1] [i_1]) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_9 [i_0])))) - (73)))))) ? (((((/* implicit */_Bool) (short)7921)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (arr_10 [i_0] [(short)14] [i_2] [i_4] [(_Bool)1] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8050)))))));
                        arr_15 [i_2] [i_1] [i_2] [i_4] [i_2] [i_2] |= ((((((/* implicit */long long int) min((148776438U), (var_9)))) & ((-(var_13))))) >> (((((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) - (((arr_5 [i_0] [i_1] [i_2]) & (arr_5 [i_0] [i_1 - 3] [i_2]))))) - (1683642406))));
                    }
                }
            } 
        } 
    } 
}
