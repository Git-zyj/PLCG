/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42557
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
    var_11 *= ((/* implicit */short) (~((~((~(var_1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((((/* implicit */_Bool) 1844078789U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), ((~(((unsigned long long int) -1534715850))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (var_7)))));
            }
        } 
    } 
}
