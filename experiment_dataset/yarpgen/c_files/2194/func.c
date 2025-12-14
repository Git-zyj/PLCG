/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2194
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((3585391834U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = (+(arr_1 [i_0] [i_0]));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) 1483785140)) : (3166674195U)))) ? (((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) 1128293080U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2857697729U))))));
    }
    var_16 = ((/* implicit */short) var_8);
}
