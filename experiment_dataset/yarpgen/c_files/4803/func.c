/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4803
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)2))))))) : (4294967295U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((unsigned int) var_3);
                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)31)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) ((unsigned short) var_18))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)127)))))));
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) var_1))))), (var_3)));
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
}
