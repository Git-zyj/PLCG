/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227681
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
    var_13 = ((/* implicit */short) -2687539596961910227LL);
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (var_2)));
        var_16 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_8))));
    }
}
