/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32575
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
    var_18 += (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((+(arr_5 [i_0] [i_1]))), (((/* implicit */unsigned int) (unsigned char)0)))))));
                var_19 = ((/* implicit */int) ((max((arr_0 [i_1 - 3] [i_1 + 1]), (arr_0 [i_1 - 1] [i_1 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))))))));
            }
        } 
    } 
}
