/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49078
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
    var_11 |= ((/* implicit */short) var_5);
    var_12 = ((/* implicit */int) var_1);
    var_13 |= ((/* implicit */unsigned int) ((var_5) << (((var_8) - (1107804453)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = (~(((/* implicit */int) (signed char)3)));
        var_15 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_1 - 1])) <= (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1]))));
            var_17 |= ((/* implicit */unsigned short) var_6);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2] [i_1 - 1]))));
        }
    }
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_1)) % (var_5)));
}
