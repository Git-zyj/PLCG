/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222427
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
    var_16 *= ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(max((var_5), (((/* implicit */unsigned int) 2147483647))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1080631975U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))), (min((((/* implicit */long long int) var_3)), (var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))) : (((unsigned int) (short)25319)))) - (4294967260U)))));
                var_19 = ((/* implicit */unsigned int) max((max((arr_3 [i_0] [i_0 - 2] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1] [i_0]))), (((arr_3 [i_1] [i_0 - 2] [i_0]) >> (((arr_3 [i_1] [i_0 - 3] [i_0]) - (1878072968)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)127))))) + (((/* implicit */int) min(((short)25299), (((/* implicit */short) var_13)))))))), (min((((/* implicit */long long int) max((((/* implicit */short) (signed char)-119)), (var_9)))), (var_15)))));
}
