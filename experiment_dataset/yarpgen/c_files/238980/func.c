/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238980
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_12))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max(((signed char)-68), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_12))))));
}
