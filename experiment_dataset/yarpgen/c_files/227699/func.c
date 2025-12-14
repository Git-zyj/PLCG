/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227699
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) - (1940464997824398802LL)))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : ((-(arr_2 [i_0] [8ULL])))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_2 [i_0] [i_0]))));
    }
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) var_2))));
}
