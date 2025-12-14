/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196750
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned char) max(((short)19), (((/* implicit */short) arr_1 [i_0]))));
        var_17 += var_12;
    }
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_11), (((/* implicit */short) (unsigned char)3))))) : (min((((/* implicit */int) (short)-2)), (var_0)))))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
}
