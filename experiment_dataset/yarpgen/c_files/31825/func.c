/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31825
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
    var_10 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_7))))));
    var_11 = (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == ((-(var_3)))))) : ((+(((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) var_0);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) arr_2 [i_0]))))));
    }
    var_14 = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned long long int) var_8))));
}
