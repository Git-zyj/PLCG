/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195756
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
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 |= ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 - 1])))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) ((int) arr_0 [i_0 - 1]))))));
            }
        } 
    } 
}
