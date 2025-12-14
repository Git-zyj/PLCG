/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238179
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
        var_14 |= ((/* implicit */short) max((((/* implicit */unsigned int) (short)5772)), (591218481U)));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_3))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
    var_16 *= min((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6))))), (((var_7) ? (max((var_13), (var_10))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_10))))));
}
