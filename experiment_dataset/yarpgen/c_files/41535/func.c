/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41535
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
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1458197525)))) >= (max((((/* implicit */unsigned int) var_9)), (var_13)))))) + (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (var_11)))) <= (((3454485430U) + (((/* implicit */unsigned int) -2111434952)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) var_5);
                var_17 += ((/* implicit */unsigned int) (-(var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((((/* implicit */int) var_5)) >= (var_9))))))));
    var_19 = ((/* implicit */unsigned short) var_0);
}
