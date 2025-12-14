/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238594
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
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) -2147483637))));
        var_18 = ((/* implicit */unsigned short) (signed char)28);
    }
    var_19 = ((/* implicit */unsigned int) max((((short) min((((/* implicit */unsigned long long int) var_13)), (var_3)))), ((short)-3734)));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) max((var_13), (var_2))))));
}
