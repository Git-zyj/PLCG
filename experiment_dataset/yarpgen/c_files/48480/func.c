/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48480
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_11 ^= ((_Bool) var_0);
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_0 [i_0]))));
    }
    var_13 = ((/* implicit */unsigned short) max(((~(var_1))), (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
    var_14 = var_7;
    var_15 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((var_4), (((/* implicit */unsigned long long int) var_10))))))) ? ((~(var_3))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
}
