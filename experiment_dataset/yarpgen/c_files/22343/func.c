/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22343
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
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) -2051727594857063816LL)))))))));
                var_13 &= ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) -5901962462691136320LL);
    var_15 ^= var_5;
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - ((-(-5901962462691136320LL)))));
}
