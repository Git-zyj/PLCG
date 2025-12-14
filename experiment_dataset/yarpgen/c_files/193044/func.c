/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193044
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0])) : (arr_3 [i_0] [18LL] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2])) : (arr_3 [i_1] [i_0] [14LL]))) : (((/* implicit */int) arr_4 [i_0 + 1]))))) ? (((((((/* implicit */_Bool) arr_4 [16LL])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (arr_0 [i_1]))))) : (max(((-(((/* implicit */int) (signed char)-101)))), (((/* implicit */int) arr_2 [i_0 + 1])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7940638908944604297ULL)) ? (4294967292U) : (((/* implicit */unsigned int) -177966868))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) <= (10506105164764947305ULL))))))) : (max((((/* implicit */long long int) arr_4 [20LL])), (max((arr_1 [i_1]), (((/* implicit */long long int) arr_3 [7ULL] [i_1] [i_1]))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_5 [(unsigned short)16] [i_0 + 1])) : (((/* implicit */int) arr_5 [(unsigned char)2] [i_0 + 2])))), ((-(((/* implicit */int) arr_4 [i_0])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (max((arr_7 [i_0] [i_0] [(short)6] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])))) : (((((/* implicit */_Bool) arr_7 [(short)3] [i_1] [i_1] [(short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_7 [i_0] [i_1] [i_1] [i_2])))))));
                    arr_9 [1ULL] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(max((arr_7 [i_0 + 2] [i_1] [i_0 + 2] [i_1]), (arr_7 [i_0 + 2] [i_0] [(unsigned char)2] [i_0])))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 + 2]))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 2]))) : (arr_7 [i_0 + 1] [i_0 + 1] [i_3] [i_3])))) ? (arr_3 [i_0] [i_0 + 2] [i_0 + 1]) : ((+(((/* implicit */int) arr_4 [i_0]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_2);
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_7))));
}
