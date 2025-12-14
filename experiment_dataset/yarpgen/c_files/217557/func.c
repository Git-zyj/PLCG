/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217557
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_16 = max((((/* implicit */int) ((unsigned char) max((var_12), (var_12))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_7)))));
}
