/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44720
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) (signed char)127))), (min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (signed char)85))))))));
        var_16 = ((/* implicit */signed char) (unsigned char)18);
    }
    var_17 ^= ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))) - (((/* implicit */int) var_13)))), (((/* implicit */int) max(((_Bool)0), (((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))))));
}
