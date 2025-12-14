/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209821
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((unsigned int) 4294967295U));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))));
        }
        var_16 = ((/* implicit */_Bool) ((short) var_4));
    }
    var_17 = ((/* implicit */int) var_11);
}
