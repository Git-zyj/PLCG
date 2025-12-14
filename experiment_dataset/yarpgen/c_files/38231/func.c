/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38231
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) + (((((/* implicit */_Bool) (short)-17717)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))))), (var_9)));
                    arr_9 [i_1] [i_0] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_3);
}
