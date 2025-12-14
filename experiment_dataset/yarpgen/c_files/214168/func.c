/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214168
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
    var_19 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_16))))) * (((/* implicit */int) var_9))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned char)72)), (var_11))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (((-(var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))))))))));
                var_21 = ((/* implicit */unsigned short) ((short) (+(((var_12) ? (arr_0 [(unsigned char)13]) : (arr_0 [i_1]))))));
                arr_4 [i_0] [(unsigned short)4] = (-((+(arr_2 [i_0] [i_1]))));
            }
        } 
    } 
}
