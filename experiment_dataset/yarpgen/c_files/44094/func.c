/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44094
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_15 = ((/* implicit */int) ((short) var_4));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((int) min((var_3), (((/* implicit */unsigned int) var_2))))), (((int) 722434562)))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
}
