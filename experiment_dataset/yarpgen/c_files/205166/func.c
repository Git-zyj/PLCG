/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205166
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) arr_0 [i_0 + 2] [(signed char)9]);
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((/* implicit */int) (short)-13481)), (((int) (short)13481)))))));
    }
    var_13 = ((((((((/* implicit */int) var_6)) ^ ((~(var_3))))) + (2147483647))) << (((((/* implicit */int) var_1)) - (15))));
}
