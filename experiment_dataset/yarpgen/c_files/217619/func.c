/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217619
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
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)130)) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)68))))) : ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)46))))) ? (((-1472756031057082924LL) / (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((((/* implicit */unsigned long long int) (signed char)-68)), (18124671292150411139ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
            }
        } 
    } 
}
