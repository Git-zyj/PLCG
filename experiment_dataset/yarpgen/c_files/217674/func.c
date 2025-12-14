/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217674
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
    var_15 = ((/* implicit */long long int) min((min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))), (min((max((0ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_1))))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) (~(((/* implicit */int) var_12))))) + (min((max((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_1] [i_0]))), (((/* implicit */unsigned long long int) var_6))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~((~(((int) arr_2 [(_Bool)1] [22U])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min(((~((~(((/* implicit */int) var_12)))))), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)85)))), (var_1))))))));
}
