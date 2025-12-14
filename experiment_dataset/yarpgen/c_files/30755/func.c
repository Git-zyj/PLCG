/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30755
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
    var_19 *= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                var_20 = ((/* implicit */int) arr_2 [i_1 - 2]);
                var_21 *= ((/* implicit */unsigned int) var_5);
                var_22 = var_7;
            }
            var_23 = ((/* implicit */short) var_4);
        }
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
        arr_8 [21U] = ((/* implicit */_Bool) var_9);
    }
}
