/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220832
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
    var_17 = var_6;
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_2);
                var_20 *= ((/* implicit */unsigned long long int) (~(((var_9) | (((/* implicit */int) var_1))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 21U)))))))));
            }
        } 
    } 
}
