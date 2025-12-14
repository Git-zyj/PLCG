/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193178
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), ((+(min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_0))))))))));
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (2149364423U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(1962236087U))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-84))))))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (var_7))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (18361687064608813822ULL)))))));
    }
}
