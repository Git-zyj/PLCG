/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31117
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)37)))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_11 = ((unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)15571)))))));
}
