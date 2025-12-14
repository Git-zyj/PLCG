/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20138
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_2))))) ? (var_7) : (((/* implicit */int) var_2))))), (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11))))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), ((-(var_11))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)47)) ? (6806410943677788857ULL) : (15040510082657609127ULL)));
                var_15 = ((/* implicit */int) var_9);
            }
        } 
    } 
}
