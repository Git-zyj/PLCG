/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30729
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
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) * (14980305594861456640ULL))) << ((((-(var_8))) - (7937105126562120489ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) : (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_11))))) | (min((var_3), (((/* implicit */long long int) (unsigned short)9510))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) ((2147483647) << (((((/* implicit */int) (signed char)64)) - (64))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (1852972142)))) && ((_Bool)1));
    }
}
