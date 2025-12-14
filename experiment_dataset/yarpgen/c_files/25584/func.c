/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25584
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0 + 1]);
        var_17 = ((/* implicit */signed char) 851592825268133923LL);
        var_18 |= ((/* implicit */long long int) var_3);
    }
    var_19 = ((/* implicit */unsigned long long int) max((((var_14) <= (((/* implicit */int) (_Bool)1)))), ((_Bool)1)));
    var_20 = ((/* implicit */unsigned long long int) var_0);
}
