/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202766
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned int) var_8);
        var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_19 *= ((/* implicit */unsigned long long int) (unsigned short)63034);
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((var_11), (var_11)))), (((((/* implicit */_Bool) var_14)) ? (17628434813922861219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
}
