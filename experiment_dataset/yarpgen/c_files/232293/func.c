/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232293
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_11 *= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))));
        var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4)))))));
        var_13 = ((/* implicit */unsigned int) var_2);
        var_14 *= var_3;
    }
    var_15 = ((/* implicit */short) var_0);
}
