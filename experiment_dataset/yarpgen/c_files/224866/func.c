/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224866
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (short)-26956)));
                var_20 = ((/* implicit */_Bool) max((-1), ((+(((/* implicit */int) var_14))))));
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_1 [i_0]))), (((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
                var_21 &= ((/* implicit */long long int) var_5);
            }
        } 
    } 
    var_22 = var_9;
}
