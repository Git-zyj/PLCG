/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230183
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
    var_19 = ((/* implicit */unsigned char) max((min((var_9), (max((9223372036854775806LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) 2147483647))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), (arr_5 [i_0] [i_1 - 1])))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 1])))))));
                var_21 *= ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (_Bool)1)), (var_9)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (15))))));
    var_23 *= ((/* implicit */signed char) var_15);
    var_24 += ((/* implicit */signed char) var_2);
}
