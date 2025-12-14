/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4713
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (((/* implicit */int) (unsigned short)61958))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (856108754181259284ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13690))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(4294967295U)))) || (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)51844)), (856108754181259302ULL)))))));
    }
}
