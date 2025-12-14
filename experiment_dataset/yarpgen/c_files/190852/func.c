/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190852
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
    var_20 = max((((/* implicit */unsigned int) 2054943581)), (387252188U));
    var_21 = ((/* implicit */_Bool) ((signed char) (short)-774));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 2054943579)) ? (4294967295U) : (4294967276U))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((max((var_16), (((/* implicit */long long int) max((1305811989U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))) - (((/* implicit */long long int) 1879048192))));
    }
}
