/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230620
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))));
            var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
            var_22 = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
        }
        var_23 = ((/* implicit */signed char) (_Bool)1);
    }
    var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_2)))))), (((((/* implicit */unsigned int) var_7)) + (var_8)))));
    var_25 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))))))), (var_13)));
}
