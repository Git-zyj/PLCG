/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19054
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
    var_19 = ((/* implicit */unsigned short) var_7);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))))) || (((((/* implicit */int) var_7)) >= ((+(((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]);
                arr_6 [i_1] = ((/* implicit */signed char) ((((9223372036854775803LL) << (((((min((((/* implicit */long long int) arr_0 [i_0])), (-9223372036854775798LL))) + (9223372036854775800LL))) - (2LL))))) ^ (((-9223372036854775791LL) & (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) - (60375))))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) var_12);
}
