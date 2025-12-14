/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200352
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) 1639847425U);
                var_13 = ((/* implicit */unsigned char) var_11);
                var_14 &= (+(4294967295U));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((long long int) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8250))) : (4294967295U)))) - (4294967265LL)))));
}
