/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213887
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) max((((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) / (var_11))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-108)) - (((/* implicit */int) (signed char)108))))), (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)108)))) : (var_13)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) ? (var_2) : (((/* implicit */long long int) var_12))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (min((var_11), (((/* implicit */long long int) var_1))))))) && (((/* implicit */_Bool) ((var_13) ^ (((unsigned int) var_9)))))));
}
