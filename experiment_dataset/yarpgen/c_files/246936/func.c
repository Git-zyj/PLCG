/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246936
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((518987734) / (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -518987757)) ? (((/* implicit */unsigned int) -1)) : (var_7)))) : ((~(var_5))))), ((~(arr_2 [i_0 + 2])))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1] [i_0])), (18446744073709551615ULL)))) ? (((unsigned int) (-(((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((min((max((16ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (min((((/* implicit */unsigned long long int) (signed char)125)), (13926002344484015802ULL))))) <= (min((var_2), (((/* implicit */unsigned long long int) -518987746))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_2))));
}
