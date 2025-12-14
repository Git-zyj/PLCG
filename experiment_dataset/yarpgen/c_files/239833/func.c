/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239833
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
    var_20 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])))));
                var_22 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_14)))))) <= ((~(2237433496U))))), (((_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_9)) : (arr_5 [i_0] [i_0]))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned short)34118))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_4);
}
