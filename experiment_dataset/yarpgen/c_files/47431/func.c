/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47431
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((var_9) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (max((var_10), (((/* implicit */unsigned long long int) arr_1 [i_1 + 2] [i_0 - 3]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
}
