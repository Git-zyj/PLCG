/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53455
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8386560U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (11591667427565499557ULL)))))) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0 + 1]))))));
                var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) 69805794224242688ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (var_9)));
                var_19 = ((/* implicit */unsigned int) arr_5 [7U]);
            }
        } 
    } 
    var_20 = ((((((/* implicit */int) (signed char)-109)) >= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (short)-7539)));
}
