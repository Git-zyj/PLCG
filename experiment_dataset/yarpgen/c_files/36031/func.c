/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36031
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
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) (unsigned short)54103))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (-557208469948585635LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)47680)) && (((/* implicit */_Bool) -94544410127730111LL)))));
    }
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_4))));
}
