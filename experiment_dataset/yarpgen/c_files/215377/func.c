/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215377
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) var_16)), (var_12))))) && (((max((((/* implicit */int) var_16)), (1306416483))) == (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */long long int) var_4);
                var_20 = ((/* implicit */int) arr_5 [i_0] [i_0] [(short)10]);
                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 1])) : (var_12))), (((/* implicit */unsigned int) (unsigned char)35))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) -1431116205)) ? (var_7) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) >= (((/* implicit */int) (unsigned short)8647))))))), (((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (1639286472773248054ULL))))));
    var_23 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) var_13))))), ((-(1761604537))))));
}
