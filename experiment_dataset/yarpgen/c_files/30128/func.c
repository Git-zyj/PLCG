/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30128
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) (unsigned char)255);
        var_18 &= (unsigned char)0;
        var_19 = ((/* implicit */long long int) (_Bool)1);
        var_20 *= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_3))));
}
