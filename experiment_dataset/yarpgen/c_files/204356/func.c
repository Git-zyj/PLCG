/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204356
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)59)), (869915770)))) ? (var_5) : (var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) (+(((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
                arr_5 [(short)7] [i_1] [17U] = (unsigned char)196;
            }
        } 
    } 
}
