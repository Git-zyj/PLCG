/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219287
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
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_7) <= (((/* implicit */int) var_13))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) var_1)))));
    }
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_4)) <= ((~(var_7))))))));
}
