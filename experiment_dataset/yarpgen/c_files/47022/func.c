/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47022
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((~(((/* implicit */int) var_11))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)231)), (var_12)))) ? (min((10555365393961549035ULL), (var_10))) : (min((var_5), (((/* implicit */unsigned long long int) var_11))))));
                }
            } 
        } 
    } 
    var_18 = (unsigned char)233;
}
