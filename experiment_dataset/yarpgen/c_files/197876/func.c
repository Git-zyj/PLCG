/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197876
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) var_14);
        arr_3 [i_0] = min((((/* implicit */long long int) var_14)), (((((-1LL) + (((/* implicit */long long int) var_10)))) / (((/* implicit */long long int) ((/* implicit */int) var_9))))));
        arr_4 [8LL] = ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) == (-4830202093557518768LL)));
        var_15 -= min((((((/* implicit */long long int) ((/* implicit */int) (short)-18))) / (var_8))), (min((-4830202093557518768LL), (((/* implicit */long long int) var_12)))));
    }
    var_16 -= ((/* implicit */unsigned int) (signed char)48);
}
