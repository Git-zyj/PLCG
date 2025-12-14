/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226147
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
    var_12 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) -3546054830900156866LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((3546054830900156865LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) * (((max((var_7), (((/* implicit */long long int) var_0)))) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */signed char) ((short) arr_1 [i_0]));
    }
    var_15 = ((/* implicit */unsigned short) ((unsigned int) (-(var_5))));
}
