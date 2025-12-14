/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222981
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3492635116U))))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))))));
                arr_7 [i_0] [i_1 - 1] [i_1 + 2] = ((/* implicit */unsigned long long int) var_2);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 2668710409959993151LL)) ? (511LL) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6840))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)22))))) : (((arr_2 [i_1 + 1] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_18))))))))))));
            }
        } 
    } 
}
