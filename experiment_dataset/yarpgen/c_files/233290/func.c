/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233290
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
    var_20 |= ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [(unsigned char)12] = ((/* implicit */unsigned long long int) var_14);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37218)) ? ((+(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) arr_3 [i_0]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_3 [(signed char)20]))));
                        var_23 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2] [i_0] [i_0] [(short)14]);
                        var_24 = ((/* implicit */unsigned int) var_7);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((63), (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) : (var_4)))))) ? (((/* implicit */long long int) max((((536870911U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) var_17))))) : (arr_1 [i_0]))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_26 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)12] [(unsigned short)12] [i_5 + 1] [i_5 + 1] [(unsigned char)14])) || (((/* implicit */_Bool) arr_7 [i_0] [0LL] [i_0] [i_5 + 1] [i_5] [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_12 [0] [(unsigned char)22] [i_0] [i_0] [i_0])), (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                        var_27 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] = max((((unsigned int) arr_10 [i_2 + 3] [(signed char)18] [(unsigned char)7])), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_0)), (arr_0 [i_0] [17]))) != (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_19)) : (var_18)))))));
                    }
                    var_28 = ((/* implicit */short) max((var_28), (((short) max((((/* implicit */long long int) var_15)), (arr_7 [i_1] [4ULL] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 4]))))));
                }
                var_29 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) ((unsigned char) (unsigned short)19330))), ((-(arr_7 [i_0] [(unsigned char)12] [i_0] [i_0] [i_1] [i_1]))))));
                var_30 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (1019031084))));
            }
        } 
    } 
}
