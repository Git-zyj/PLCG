/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37056
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && ((!(((/* implicit */_Bool) -578558439))))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_19)), (var_0))), (var_0))))) & (max((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) var_14))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
}
