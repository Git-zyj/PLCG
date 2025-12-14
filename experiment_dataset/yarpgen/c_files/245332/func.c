/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245332
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
            arr_5 [i_0] = ((/* implicit */int) var_2);
        }
        var_13 |= ((/* implicit */unsigned char) ((signed char) 4294967295U));
    }
    var_14 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
}
