/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32850
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_16)))) ? (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -652856254))))) : (((/* implicit */int) ((unsigned short) var_15))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                var_21 = ((/* implicit */short) (~(((max((((/* implicit */long long int) (_Bool)0)), (7LL))) ^ (((/* implicit */long long int) arr_6 [i_0]))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) min(((+(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)72)))))));
}
