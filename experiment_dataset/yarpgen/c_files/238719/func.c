/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238719
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
    var_12 = ((/* implicit */unsigned int) ((((int) var_3)) <= (var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned char) ((unsigned int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
                var_14 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) 21U)))));
                var_15 = ((/* implicit */_Bool) ((int) arr_4 [i_1]));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((unsigned short) ((((var_0) - (var_9))) / (((/* implicit */unsigned int) var_3)))));
}
