/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20503
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
    var_10 &= (+((~(((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [(_Bool)1]);
        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */_Bool) arr_5 [0] [i_1 - 1]);
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    }
}
