/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227875
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(-1360967705)))))) % (var_15)));
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_5), (var_17)))) ? (((((/* implicit */int) (unsigned short)65532)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) != (var_16)))))) << (((((var_8) + (5517617773161516195LL))) - (18LL)))));
    var_20 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_6)))))) : (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15))))));
                var_22 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4966)) ^ (((/* implicit */int) (short)13315))));
            }
        } 
    } 
}
