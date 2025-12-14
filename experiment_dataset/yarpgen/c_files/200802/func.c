/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200802
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [(signed char)2] &= ((/* implicit */int) (~(arr_1 [5LL])));
        var_15 = ((/* implicit */int) ((var_10) * (((/* implicit */unsigned long long int) var_8))));
        var_16 = ((/* implicit */unsigned short) ((((arr_1 [i_0]) == (((/* implicit */long long int) -57900418)))) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0])));
    }
    var_17 = ((/* implicit */long long int) var_14);
    var_18 &= ((/* implicit */int) var_7);
}
