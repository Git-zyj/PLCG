/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221871
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) -2112300971))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (var_9)))), (min((var_2), (((/* implicit */long long int) var_8))))))));
    var_11 += ((/* implicit */unsigned int) ((((unsigned long long int) min((((/* implicit */unsigned long long int) var_7)), (var_1)))) >> (((var_2) - (5139827332322218607LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_3 [(unsigned char)8] [i_1] [i_1]))));
                var_13 = ((/* implicit */unsigned int) 2112300953);
                var_14 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)28)) : (-2112300971)))) ? (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((var_1) - (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned char)25)), (-1542966004))))))));
}
