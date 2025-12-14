/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41442
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
    var_11 |= ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_0)))));
    var_13 = ((/* implicit */unsigned char) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (short)0)) | (((/* implicit */int) arr_1 [i_0])))))))));
                arr_5 [i_0] [18U] [i_1] |= ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1])), (var_3)))), (var_6)));
                var_15 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
