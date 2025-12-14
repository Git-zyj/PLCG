/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51680
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59841))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)4)), (var_2)));
                var_14 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)2])) >> (((((((/* implicit */_Bool) var_12)) ? (9063798025889336505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (9063798025889336492ULL)))))));
                arr_6 [(short)4] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)31936))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)8)) % (268435424)));
}
