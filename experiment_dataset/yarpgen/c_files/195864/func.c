/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195864
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) var_7))))))));
    var_12 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)-2)))), (((/* implicit */int) var_10)))), (((/* implicit */int) var_3))));
    var_13 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 255461089U)) ? (268435455ULL) : (268435459ULL))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~((-(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])))))))));
            }
        } 
    } 
}
