/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229133
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
    var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) (signed char)82))))) & (var_14)))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned long long int) 71510958)) : (4965579137555448634ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (!(var_19)))))));
    var_22 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-16))))) / (arr_2 [i_0])));
        arr_4 [(short)16] &= (((-(((/* implicit */int) var_15)))) % (((/* implicit */int) arr_1 [16])));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(13481164936154102982ULL)))) || (((/* implicit */_Bool) var_0))));
    }
}
