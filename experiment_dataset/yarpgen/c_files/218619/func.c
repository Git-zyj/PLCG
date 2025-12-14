/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218619
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
    var_10 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [(signed char)6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)5888))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_4);
        var_11 -= var_6;
        var_12 = ((/* implicit */short) 3207461091U);
    }
}
