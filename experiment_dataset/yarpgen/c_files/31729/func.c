/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31729
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_8))), (var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [(short)11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (signed char)103)))))), (13358834991763499246ULL)));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_10))));
            }
        } 
    } 
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (_Bool)1))))) && (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) <= (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20059)))))))));
    var_19 = ((/* implicit */long long int) ((unsigned int) ((var_0) == (((/* implicit */unsigned int) ((var_8) + (((/* implicit */int) var_14))))))));
}
