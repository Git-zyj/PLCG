/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206523
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
    var_19 = ((/* implicit */short) (signed char)-112);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) var_11))))))) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((unsigned short) (signed char)126))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_21 -= ((/* implicit */long long int) (signed char)-22);
    }
}
