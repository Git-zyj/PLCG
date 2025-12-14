/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233681
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                var_17 ^= ((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0] [(short)10]));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (_Bool)0);
    var_19 = ((int) (+((-(var_7)))));
}
