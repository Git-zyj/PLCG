/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204393
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (849578797) : (((/* implicit */int) arr_3 [i_1])))))))), ((-(((/* implicit */int) arr_2 [i_1] [i_0]))))));
                var_16 += ((/* implicit */int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [4U] [i_0]), (((/* implicit */unsigned char) var_12)))))) : (((((/* implicit */_Bool) -849578776)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)224)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((/* implicit */int) var_12)) - (1)))))), (max((((/* implicit */unsigned long long int) var_2)), (var_14))))) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_4)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) - (((/* implicit */int) var_0))))))) ? (3349232489155731257LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775807LL) / (-29LL))))))))));
}
