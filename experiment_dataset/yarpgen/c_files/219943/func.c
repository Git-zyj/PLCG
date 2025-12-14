/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219943
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
    var_11 -= ((/* implicit */unsigned short) (-(var_9)));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (var_10))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) 4294967295U)), (7040804336888749431LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */short) arr_5 [(short)7] [(short)7]);
                var_14 ^= ((/* implicit */unsigned short) (~(((unsigned int) ((unsigned short) var_0)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_6 [i_0] [i_1])))), ((+(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_15 = var_1;
}
