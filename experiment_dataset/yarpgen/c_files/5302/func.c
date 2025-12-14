/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5302
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
    var_20 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) var_16);
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) var_17)), (112349298U))) <= (((112349304U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? ((-((+(((/* implicit */int) var_18)))))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
}
