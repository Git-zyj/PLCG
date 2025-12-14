/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43081
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (var_14))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */int) (_Bool)1);
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) 1544934400U);
                }
            } 
        } 
    } 
}
