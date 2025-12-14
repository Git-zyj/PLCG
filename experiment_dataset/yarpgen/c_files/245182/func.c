/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245182
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
    var_10 |= ((/* implicit */unsigned int) ((var_4) + (((/* implicit */long long int) min(((-(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))));
    var_11 = ((/* implicit */_Bool) var_1);
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) min((var_9), (((/* implicit */unsigned int) var_1)))))) ? (var_6) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 135291469824LL))) && (var_5))))));
        var_14 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) (!(((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
}
