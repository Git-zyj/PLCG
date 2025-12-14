/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52053
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
    var_16 += ((/* implicit */short) (-2147483647 - 1));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) var_0))), (max((var_4), (((/* implicit */unsigned int) 1699683313))))));
                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-122)))), (((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) var_7)) + (12865))) - (12))))))));
            }
        } 
    } 
}
