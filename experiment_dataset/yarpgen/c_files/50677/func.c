/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50677
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
    var_19 -= ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) arr_0 [(signed char)7]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_0 [i_0]))));
    }
    var_21 = ((/* implicit */unsigned short) var_14);
    var_22 = ((/* implicit */long long int) var_18);
}
