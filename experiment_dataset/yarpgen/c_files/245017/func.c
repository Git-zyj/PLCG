/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245017
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
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 ^= ((/* implicit */unsigned char) ((5544151505772346502ULL) | (12902592567937205114ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [7U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (var_7)));
                var_16 += ((/* implicit */int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
