/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193929
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
    var_19 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((_Bool) arr_1 [i_0]));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_21 = ((short) arr_2 [i_1 + 1] [i_1 + 1]);
            var_22 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) var_11)));
            arr_5 [i_1] [i_0] = (((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((var_8) - (2572343498U))));
            arr_6 [i_0] = ((unsigned short) arr_2 [i_1 + 1] [i_1]);
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_15)))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_0]))));
        }
        var_25 = arr_2 [i_0] [i_0];
    }
}
