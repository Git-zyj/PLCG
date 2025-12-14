/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27828
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
    var_17 = ((/* implicit */short) 1324511281717122001ULL);
    var_18 = ((/* implicit */long long int) (~(max((((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6048))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
    var_19 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59487)) ? (((((/* implicit */_Bool) (unsigned short)174)) ? (-8148636697838599725LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36318))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3280898950U)))) ? ((((_Bool)0) ? (8433550866184389611LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [2LL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
}
