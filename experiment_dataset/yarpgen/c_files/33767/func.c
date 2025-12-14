/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33767
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
    var_16 = min((var_15), (((/* implicit */long long int) (+(var_7)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (~(3861476110U)));
                var_18 = ((/* implicit */unsigned long long int) max((min((max((var_8), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))) <= (((((/* implicit */unsigned long long int) var_12)) & (var_3))))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((min((min((var_9), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_1)))) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_13);
}
