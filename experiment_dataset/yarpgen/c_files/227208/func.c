/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227208
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */signed char) (~(max((arr_5 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((arr_2 [i_0]) - (3647760736U))))))))))) : (((/* implicit */signed char) (~(max((arr_5 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((arr_2 [i_0]) - (3647760736U))) - (1270977375U)))))))))));
                var_18 += ((/* implicit */unsigned short) 15762598695796736ULL);
            }
        } 
    } 
    var_19 = var_15;
    var_20 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) var_16))));
}
