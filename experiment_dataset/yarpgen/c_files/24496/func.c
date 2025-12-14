/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24496
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_1 [i_1]))));
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 5852463056027501833LL)), (15139059206729901680ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((((/* implicit */unsigned long long int) var_7)), (max((5480290419859187949ULL), (12966453653850363665ULL)))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */signed char) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (var_7))))));
    var_23 *= ((/* implicit */short) (~(max((var_3), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))));
}
