/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47684
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned short) (~(18172384875682052896ULL)));
        var_14 ^= ((/* implicit */short) ((arr_1 [i_0 + 1]) <= (arr_2 [i_0 - 3])));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18172384875682052881ULL)) && ((!(((/* implicit */_Bool) ((unsigned int) var_8))))))))));
}
