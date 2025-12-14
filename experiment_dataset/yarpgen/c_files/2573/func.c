/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2573
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(-4151921292337185163LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0 + 4]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (short)384);
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+((+(((((/* implicit */unsigned long long int) var_7)) / (var_4))))))))));
}
