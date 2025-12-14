/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47177
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_9);
    }
    var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-12479)) + (2147483647))) << (((((((/* implicit */int) (short)12478)) << (((((-818289954) + (818289979))) - (13))))) - (51109888)))))) / (var_5)));
}
