/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247136
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
    var_20 = ((/* implicit */unsigned short) var_7);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_8))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 ^= ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_13))))));
                var_23 = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))), (max((((/* implicit */int) var_14)), ((~(var_4))))));
                var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_18))));
                var_25 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
