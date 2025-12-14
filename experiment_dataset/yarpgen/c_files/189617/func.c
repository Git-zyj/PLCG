/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189617
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)28689)), (min((((/* implicit */int) arr_0 [i_0])), (25165824)))));
        var_16 |= ((/* implicit */signed char) arr_1 [i_0 - 1]);
        var_17 = ((/* implicit */long long int) max((min(((_Bool)1), (((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8)))))), (((((/* implicit */int) arr_0 [i_0 + 2])) >= (((/* implicit */int) ((_Bool) var_11)))))));
    }
    var_18 -= ((/* implicit */long long int) ((var_2) && (((/* implicit */_Bool) var_12))));
}
