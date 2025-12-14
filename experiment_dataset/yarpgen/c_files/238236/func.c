/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238236
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-6559)), (max((((unsigned int) var_8)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_5);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) >= (arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : ((~(1791257742U))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 16571590977103704119ULL))))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((signed char) (!((_Bool)1)))))));
    }
    var_15 = ((/* implicit */unsigned int) var_10);
}
