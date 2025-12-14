/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47462
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) arr_1 [i_0]);
                var_16 ^= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [(short)2]))));
            }
        } 
    } 
    var_17 = (~(((/* implicit */int) var_7)));
    var_18 = ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_20 = ((/* implicit */unsigned int) var_4);
}
