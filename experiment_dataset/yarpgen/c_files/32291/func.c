/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32291
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
    var_20 = ((/* implicit */_Bool) ((var_17) - (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (-3492398987173058930LL))));
        arr_3 [(short)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (((unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) var_15)) : (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (max((3492398987173058930LL), (-3492398987173058930LL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((((-(((/* implicit */int) var_13)))) * ((-(((/* implicit */int) arr_0 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) -4278786720153460127LL)) ? (1377589809U) : (3347113945U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) - (((unsigned int) arr_1 [i_0 + 1] [i_0]))));
    }
}
