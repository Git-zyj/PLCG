/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22784
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) var_6);
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_0 [17]))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)));
        }
        var_15 = (!(((/* implicit */_Bool) ((int) 5583871953898207843LL))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 1433412170U))));
    }
    var_16 += (unsigned short)35817;
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_1)) : (((unsigned int) var_12))));
}
