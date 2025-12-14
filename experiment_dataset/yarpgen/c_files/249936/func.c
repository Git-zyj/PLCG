/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249936
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) 0U);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((short) arr_0 [i_0]));
        var_21 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)14]))) <= (((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (3720325796U)))));
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [(_Bool)1])) + (((/* implicit */int) arr_0 [(short)6]))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_8))));
    }
    var_24 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) 3720325786U)) ? (574641505U) : (0U))))), (((/* implicit */unsigned int) var_16))));
    var_25 ^= var_12;
}
