/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222292
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_2))))), (var_9)))), (max((var_10), (((/* implicit */unsigned long long int) var_2)))))))));
                var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_0)), (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((7218653823223200201LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-30681)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_7);
}
