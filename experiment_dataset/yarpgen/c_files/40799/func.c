/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40799
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
    var_16 = ((/* implicit */long long int) (-(max((var_0), (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((((min((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))), ((~(arr_1 [i_0]))))) + (9223372036854775807LL))) >> (((var_6) - (1570058938)))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775807LL)))))))));
    }
}
