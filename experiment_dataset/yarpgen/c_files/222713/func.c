/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222713
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
    var_14 ^= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9110759584136486509LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9110759584136486509LL)))) ? (min((9110759584136486521LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((unsigned int) (~(201686112U)))), (((/* implicit */unsigned int) 797914132)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((4294967295U) & (((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (1240847184) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1]);
            }
        } 
    } 
}
