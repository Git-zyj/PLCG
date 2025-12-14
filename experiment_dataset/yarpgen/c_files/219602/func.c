/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219602
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
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_2);
                arr_4 [i_0] [(_Bool)1] |= ((/* implicit */unsigned int) (+(arr_2 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_16);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_11))));
}
