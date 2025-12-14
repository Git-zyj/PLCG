/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222273
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) (short)13405)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)42709)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) (short)13423)))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (unsigned short)50789)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_4);
    var_24 |= ((/* implicit */unsigned int) var_14);
}
