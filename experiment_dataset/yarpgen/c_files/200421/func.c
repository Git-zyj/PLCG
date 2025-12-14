/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200421
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6))))) : (((/* implicit */unsigned long long int) min((4303749U), (((var_13) ? (4290663547U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_15) | (var_15)))), (var_5)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_10 [i_0] |= ((/* implicit */long long int) (unsigned short)13565);
                    arr_11 [i_0 - 1] [i_1] [(_Bool)1] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-4048915288217428248LL)))) ? (((((/* implicit */_Bool) var_2)) ? (-4048915288217428263LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 3]))))) : (max((((/* implicit */long long int) var_4)), (4048915288217428255LL)))));
                }
            } 
        } 
    } 
}
