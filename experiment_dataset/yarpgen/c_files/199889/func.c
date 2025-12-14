/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199889
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_6)))) ? (((unsigned long long int) (!((_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
    var_21 = ((/* implicit */unsigned long long int) 2989522913U);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 2989522910U))));
                var_23 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_2)) >> (((((((/* implicit */int) (signed char)-30)) + (2147483647))) >> (((arr_1 [i_0]) - (5321640152041069480LL))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(var_8))) + (((/* implicit */long long int) (-(1305444396U)))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-23))))) : (((var_1) + (((/* implicit */unsigned long long int) var_16))))))));
}
