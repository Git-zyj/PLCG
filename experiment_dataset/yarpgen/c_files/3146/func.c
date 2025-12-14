/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3146
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
    var_12 += ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((-7343181992078122184LL), (((/* implicit */long long int) (signed char)30))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))) > (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)13)))) % (((/* implicit */int) (signed char)40))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
        var_16 = ((short) var_2);
        var_17 ^= arr_0 [i_0];
    }
}
