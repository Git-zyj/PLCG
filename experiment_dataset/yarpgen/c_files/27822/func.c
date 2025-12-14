/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27822
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) min((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65519)))))));
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((_Bool) ((_Bool) 3566492264U)));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_1);
}
