/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54455
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = min(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 - 1]))))));
                var_14 = ((/* implicit */short) ((signed char) (signed char)63));
                var_15 ^= ((/* implicit */short) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_10);
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
}
