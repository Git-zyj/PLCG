/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217532
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2] [i_2 + 1])) ? (arr_7 [i_2] [i_2 + 1] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_2 [i_1]))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_2 [i_1]))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [15U]))) % (arr_10 [(unsigned char)14] [i_0] [i_0] [i_2])))) ? (max((((/* implicit */long long int) arr_2 [i_3])), (((arr_7 [i_0] [i_1] [i_2 - 1] [(signed char)2]) / (arr_7 [i_0] [i_1] [(unsigned char)1] [16U]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)70)))))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [13U] [(signed char)21]))) : (arr_0 [i_0])))) & ((~(var_2)))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])) ? (arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]) : (arr_7 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((1656294193U), (arr_2 [(short)9]))))))));
                    }
                    var_21 -= ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_9 [(unsigned char)10]))))))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1]))) ^ ((+(arr_7 [i_2 + 1] [22LL] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_3))));
}
