/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28333
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
    var_18 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) (-(var_14)))), (var_3)))));
    var_19 *= ((/* implicit */short) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -8848708074564776295LL)) ? (((/* implicit */int) var_12)) : ((~(var_2)))));
                var_21 ^= ((/* implicit */long long int) var_14);
                var_22 = ((/* implicit */signed char) (+(min(((-(2387048772U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
                var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(3995200919772032057LL)))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0]))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1])), (var_7))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
}
