/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215543
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [3ULL] [23LL] = (+(((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) ((3252013600U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
}
