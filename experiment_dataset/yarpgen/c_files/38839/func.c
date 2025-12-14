/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38839
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
    var_12 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (5309554652721527786LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-5309554652721527780LL) : (((/* implicit */long long int) var_10))))) ? (var_2) : (((((/* implicit */int) var_11)) ^ (var_5))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) arr_1 [i_0])), (var_6)))), (((unsigned short) var_0)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) var_9);
                arr_7 [i_0] [i_1] [0U] = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
