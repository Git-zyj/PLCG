/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34660
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
    var_20 = ((/* implicit */_Bool) (+(var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [3U]))));
        var_22 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_4))));
    var_24 = ((/* implicit */long long int) (+(((unsigned int) (!(((/* implicit */_Bool) 17592186044415LL)))))));
}
