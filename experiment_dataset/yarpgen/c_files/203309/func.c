/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203309
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
    var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_18))))));
    var_22 = (((+(((/* implicit */int) max((var_12), (var_13)))))) % ((+((+(((/* implicit */int) (unsigned short)65512)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 ^= ((/* implicit */unsigned int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
    }
    var_24 &= ((/* implicit */_Bool) ((signed char) ((var_1) ? (max((var_0), (((/* implicit */long long int) (signed char)64)))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
}
