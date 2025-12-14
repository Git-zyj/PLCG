/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208591
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [(short)0]))))));
                var_22 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)63488));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-223979083) : (((/* implicit */int) (unsigned short)2047))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) >= (var_6)))), (((signed char) (unsigned short)65535)))))));
    var_24 = ((/* implicit */unsigned long long int) var_17);
}
