/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234131
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
    var_12 = ((/* implicit */short) ((_Bool) 3520830046U));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((_Bool) 939524096));
                arr_4 [i_0] [i_0] = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) max((939524096), (((/* implicit */int) (unsigned short)8)))));
    var_15 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned short)22)) + (var_9))));
}
