/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227170
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) * (((/* implicit */int) arr_1 [2LL] [i_1 - 1]))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)7])) ? (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) ((signed char) var_3))) : ((~(0))))) : (((((/* implicit */_Bool) ((var_12) * (var_15)))) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) var_10)))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1)), (0U)))) ? (((unsigned int) 0U)) : (var_15))))));
    var_20 = min((((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_14)))))), (min((((1688439140U) * (var_12))), (min((var_13), (((/* implicit */unsigned int) var_3)))))));
}
