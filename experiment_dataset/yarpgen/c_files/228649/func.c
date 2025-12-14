/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228649
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(339381487U)));
        var_14 = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_0 [i_0])), (((long long int) arr_1 [i_0]))))));
    }
    var_15 += ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */unsigned int) var_0);
}
