/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214120
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_3)), (8197474221644456372ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_7))))) : ((-(36028792723996672LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(1021440575)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_1)))))))))));
    var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] |= ((((/* implicit */_Bool) 12692763718464471603ULL)) ? (((/* implicit */unsigned long long int) 3135121652U)) : (11229036764395276387ULL));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
