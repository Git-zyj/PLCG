/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40559
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
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (signed char)17)))) : (((((/* implicit */int) (signed char)111)) + (((/* implicit */int) var_8)))))) << (((1090954815U) - (1090954790U)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((16383), (min((max((-16384), (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) (signed char)111))))));
                arr_5 [i_1] [i_1] [i_1 + 1] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-112)))) - (((/* implicit */int) (unsigned char)22))));
            }
        } 
    } 
}
