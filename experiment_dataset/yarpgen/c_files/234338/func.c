/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234338
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
    var_11 = var_3;
    var_12 = var_5;
    var_13 = ((/* implicit */unsigned int) ((signed char) var_0));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) 10071561851247653235ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
        var_15 = ((/* implicit */int) (signed char)87);
    }
}
