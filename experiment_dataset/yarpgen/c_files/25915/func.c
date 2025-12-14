/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25915
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
        var_17 = (short)-28309;
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) && (((2194343242074798268LL) >= (arr_2 [i_0]))))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) var_1)))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_18 = ((/* implicit */_Bool) var_11);
}
