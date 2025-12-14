/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215292
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
    var_20 = ((/* implicit */unsigned short) (unsigned char)6);
    var_21 = ((/* implicit */unsigned int) var_19);
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (unsigned short)63313);
                    arr_8 [i_0] = ((/* implicit */unsigned short) 3716659037U);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_9);
}
