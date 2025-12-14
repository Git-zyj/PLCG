/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40634
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)11] [i_0 - 1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)56786))));
                arr_5 [i_0] [(unsigned short)11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_3 [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
                var_13 = arr_2 [i_0] [i_1] [i_0 + 1];
                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((unsigned short) (unsigned short)29033))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44852))))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_12), (var_3))))));
    var_16 = var_4;
}
