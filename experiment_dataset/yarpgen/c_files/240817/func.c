/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240817
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
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_3 [(_Bool)1] [i_0] = (_Bool)1;
        arr_4 [i_0] = ((((/* implicit */unsigned int) (+(((/* implicit */int) ((var_1) < (2457143739U))))))) != (max((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (var_0))));
    }
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
