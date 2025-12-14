/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198216
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
    var_21 = ((/* implicit */signed char) min((var_8), (var_8)));
    var_22 = ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_0))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
    }
}
