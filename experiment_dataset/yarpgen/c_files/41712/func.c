/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41712
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (min((var_6), (4294967295U))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_10))))) & (((unsigned long long int) var_1))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2U)))))) : ((~((~(-627896318996153454LL)))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_5)));
    var_22 |= ((/* implicit */short) max((1U), (((/* implicit */unsigned int) var_10))));
}
