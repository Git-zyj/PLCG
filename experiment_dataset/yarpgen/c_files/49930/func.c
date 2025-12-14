/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49930
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)8284))) + (1715927960690963043LL))), (max((-1715927960690963058LL), (((/* implicit */long long int) var_10))))))) ? (((max((-1715927960690963058LL), (1715927960690963043LL))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_12))))))) : (max((((((/* implicit */_Bool) 1715927960690963020LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))), (((((/* implicit */_Bool) 1715927960690963047LL)) ? (-1715927960690963051LL) : (-1715927960690963059LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (1715927960690963051LL)))) ? (((((/* implicit */_Bool) 1715927960690963047LL)) ? (-1715927960690963054LL) : (var_6))) : (((((/* implicit */_Bool) 1715927960690963043LL)) ? (1715927960690963051LL) : (1715927960690963035LL))))), (var_13)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((1715927960690963051LL), (-1715927960690963048LL)));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned short) ((1715927960690963031LL) > (1715927960690963055LL))))));
    }
}
