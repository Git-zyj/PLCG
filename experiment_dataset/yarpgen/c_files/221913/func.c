/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221913
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((var_9) + (3017820514907756817LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [0LL] [i_2] = ((/* implicit */unsigned short) ((max((max((var_5), (((/* implicit */unsigned int) (unsigned short)11)))), (((/* implicit */unsigned int) var_8)))) >= (277701298U)));
                    arr_9 [i_0] [i_1] [2] [i_2] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_6 [i_1 + 2] [i_2] [i_1 + 1])))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_1 - 2]))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((arr_5 [i_0] [(unsigned char)8]) ? (9223371899415822336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)2] [i_2] [i_2]))) != (arr_4 [i_2] [(unsigned short)5] [(unsigned short)5]))))) != (((((/* implicit */_Bool) arr_1 [(signed char)5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))))) * (4017265998U)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 0ULL))));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((var_3) >> (((70368744161280ULL) - (70368744161251ULL)))))) : (max((((/* implicit */unsigned int) var_13)), (var_0)))))), (max((min((var_9), (((/* implicit */long long int) var_0)))), (max((var_9), (((/* implicit */long long int) var_3))))))));
}
