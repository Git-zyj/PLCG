/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47939
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
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) max((var_8), (var_9)))) + (min((((/* implicit */int) var_5)), (((((/* implicit */int) (short)0)) - (((/* implicit */int) var_5))))))));
    var_15 = ((/* implicit */_Bool) 442486259);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))) - (((/* implicit */int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) (signed char)25)))) : (((/* implicit */int) (signed char)118))));
        arr_2 [i_0] |= arr_1 [i_0];
    }
    var_17 = ((/* implicit */unsigned short) (-(var_2)));
}
