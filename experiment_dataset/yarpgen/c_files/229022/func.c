/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229022
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
    var_14 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) (signed char)7))), (4294967294U))))));
        arr_3 [20] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_16 = ((/* implicit */long long int) ((((_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)));
}
