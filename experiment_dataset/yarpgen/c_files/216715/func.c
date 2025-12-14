/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216715
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
    var_17 = ((((/* implicit */_Bool) ((((-9001299) + (2147483647))) << (((((/* implicit */int) (unsigned short)27877)) - (27877)))))) ? (var_9) : (((/* implicit */int) var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3])) | (arr_7 [i_0] [i_1] [i_1])))) & (((arr_10 [(_Bool)1] [0] [(_Bool)1] [0] [i_3]) - (((/* implicit */long long int) arr_7 [i_1] [i_2] [i_1]))))))) ? (((arr_0 [i_1 + 1] [i_2 + 3]) & (((/* implicit */long long int) arr_7 [5] [5] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1 + 3] [i_2] [i_1]))))));
                            var_18 ^= var_14;
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((1887061983U) | (((/* implicit */unsigned int) var_9))))) : (((long long int) arr_0 [i_2] [(_Bool)1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (17137838758178872816ULL)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0] [1U] [i_1])), (200341393)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_6 [i_1] [i_1])) : (var_7))))) : (((/* implicit */unsigned int) (-(((arr_7 [i_0] [i_1 + 1] [i_1]) ^ (-1)))))));
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_10 [i_0] [5ULL] [i_0] [i_0] [i_0])))) ? (arr_6 [16ULL] [(short)2]) : (arr_7 [i_0 - 1] [i_0 - 1] [6])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(signed char)10] [i_1] [4U])) & (((/* implicit */int) var_10))))) ? (arr_0 [i_0] [(unsigned short)11]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16479079538045224813ULL))))))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1308905315530678786ULL)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 2])))) | (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_0 - 2] [2ULL])) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
