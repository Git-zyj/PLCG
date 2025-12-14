/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41457
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
    var_11 = ((/* implicit */_Bool) max((var_11), (min(((_Bool)1), ((_Bool)1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_9), ((-2147483647 - 1))))), (((unsigned long long int) (_Bool)1)))))));
                arr_6 [22LL] [i_1] [22LL] = ((/* implicit */int) (_Bool)1);
                var_13 |= ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) (_Bool)1)), (1828226499881605697LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_1);
}
