/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190648
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((9223372036854775807LL) | (((/* implicit */long long int) 4071215082U))))) ? (((1056964608U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> ((((~(((((/* implicit */int) var_11)) & (((/* implicit */int) (_Bool)0)))))) + (14)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(var_16)))))) ? ((-(((((/* implicit */int) var_4)) / (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */int) (short)-14893)) ^ (((/* implicit */int) (signed char)-1)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1056964600U)));
    }
}
