/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192075
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((var_7), (((9223372036854775807LL) | (var_4)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))), (var_11)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_1 [i_0]), (var_1))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [5ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && ((_Bool)1))))) != (arr_1 [i_0]))))) + (((unsigned long long int) ((((/* implicit */_Bool) 1114015730646668127LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10))))));
        var_16 ^= min(((((~(0LL))) - (arr_0 [i_0]))), ((+((-(var_7))))));
    }
}
