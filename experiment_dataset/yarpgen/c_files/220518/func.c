/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220518
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
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_0 [i_0]))));
        var_16 += ((/* implicit */unsigned long long int) var_9);
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_4 [i_1]);
        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
