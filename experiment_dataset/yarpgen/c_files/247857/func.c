/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247857
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) min((min(((short)0), ((short)0))), (((/* implicit */short) var_7))))), (var_2)));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_1 [i_0]))))));
        var_21 ^= ((/* implicit */_Bool) (short)-8585);
        var_22 &= ((/* implicit */unsigned int) arr_1 [6LL]);
    }
}
