/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212631
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_5)), (var_10)))))))))));
    var_16 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_5)) + (((/* implicit */int) var_6)))) - ((+(((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)16776), (((/* implicit */unsigned short) (signed char)119))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)48780)), (0ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (var_9))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (unsigned short)5281))));
    }
}
