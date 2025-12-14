/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25218
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? ((~(((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) var_8)))))) : (((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))) ? ((~(var_4))) : (((long long int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
    }
    var_21 = ((/* implicit */unsigned char) var_1);
}
