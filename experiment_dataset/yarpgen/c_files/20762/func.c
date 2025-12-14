/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20762
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_20 &= ((/* implicit */short) var_6);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 2] [(signed char)2]))))) ? (((long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))));
    }
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_10)))))))));
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_17)), (((((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_18))))))));
    var_24 = ((/* implicit */unsigned short) (+(4729428879430003123ULL)));
}
