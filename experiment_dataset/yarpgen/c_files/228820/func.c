/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228820
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
    var_20 = ((/* implicit */long long int) min((min((((((/* implicit */int) var_4)) % (((/* implicit */int) var_18)))), (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) max((var_19), (var_13)))) ? (((/* implicit */int) ((var_9) > (((/* implicit */int) var_15))))) : (((/* implicit */int) (signed char)2))))));
    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((((var_6) + (9223372036854775807LL))) << (((/* implicit */int) (signed char)2))))) : (var_17)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((arr_0 [i_0 + 1]) + (2147483647))) << (((((var_6) + (9215906765313547803LL))) - (27LL)))));
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)2))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (signed char)104)))))))));
    }
}
