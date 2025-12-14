/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201229
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned short)65535))));
    var_12 = ((-3467067011911937773LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)45020)), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_4))))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (879206546U)))));
                var_14 = ((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0 - 1])), (max((var_9), (((/* implicit */int) arr_2 [i_0]))))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) & (((((/* implicit */_Bool) 5785928043206579641ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-3467067011911937773LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))) * ((-(((/* implicit */int) var_5))))));
}
