/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236408
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned short) arr_4 [i_0 + 3])), ((unsigned short)59276))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) min((4294967292U), (((/* implicit */unsigned int) 0))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_0)), (var_6))))))));
    var_14 = ((/* implicit */short) (~(min((var_12), (((/* implicit */long long int) var_2))))));
}
