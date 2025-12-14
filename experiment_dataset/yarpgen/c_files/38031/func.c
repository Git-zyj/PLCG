/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38031
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
    var_12 = 7781093294518042833LL;
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2089115202)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))), (((/* implicit */long long int) (unsigned short)13399))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_9), (var_10)))) : (((/* implicit */int) var_10))))) : (((var_0) ^ (1052120168142232891LL)))));
    var_14 = ((/* implicit */signed char) -1943927198);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [9] |= ((/* implicit */long long int) arr_1 [i_0 - 2]);
        arr_3 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? ((+(((/* implicit */int) (unsigned short)52136)))) : (((/* implicit */int) ((signed char) var_0))))));
    }
}
