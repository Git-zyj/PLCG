/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249590
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
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_3)))) >> (((((/* implicit */int) (unsigned short)64117)) % (((/* implicit */int) var_0))))));
                arr_7 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_4 [i_0 - 1])) & (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
