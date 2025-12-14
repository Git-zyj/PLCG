/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214107
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
    var_20 ^= var_18;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) ((short) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        var_22 *= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
    }
    var_23 = ((/* implicit */int) (unsigned short)8992);
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_10))));
}
