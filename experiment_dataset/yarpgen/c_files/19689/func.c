/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19689
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) min((min((2365707605883420677LL), (((/* implicit */long long int) (_Bool)0)))), (min((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5688))) : (var_9))), (max((var_9), (((/* implicit */long long int) var_2))))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 1])) + (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)57))));
}
