/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218688
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
    var_17 = ((/* implicit */long long int) (-(min((var_11), (((/* implicit */unsigned int) var_10))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) 3704464570314847671LL)))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (-(min((((-1LL) - (((/* implicit */long long int) var_15)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-1LL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), ((short)29835)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)99))))) : (339758268U)))))))));
}
