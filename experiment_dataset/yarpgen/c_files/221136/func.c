/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221136
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
    var_15 = ((/* implicit */long long int) (-(var_11)));
    var_16 = ((/* implicit */unsigned char) (~(min((min((((/* implicit */long long int) var_9)), (-4241373085271096447LL))), (((/* implicit */long long int) var_11))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) min((min((arr_0 [i_1 + 2]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0)))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [1ULL])) ? (max((((/* implicit */unsigned int) arr_2 [i_1])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-1)))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max(((signed char)0), (((/* implicit */signed char) var_5))))))) >= (((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) >> (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    }
}
