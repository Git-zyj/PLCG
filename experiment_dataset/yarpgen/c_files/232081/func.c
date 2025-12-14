/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232081
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)0]);
                var_18 ^= ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)0)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_9))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_14)))))))));
}
