/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30855
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
    var_19 *= (~(((int) (unsigned char)3)));
    var_20 = ((/* implicit */int) (unsigned short)56054);
    var_21 |= ((/* implicit */unsigned char) var_3);
    var_22 &= min((var_17), ((!(((/* implicit */_Bool) ((int) 1784304127))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
                arr_5 [11] [i_0] [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) ((-1) / (1784304125)))), (((((/* implicit */_Bool) -980569074)) ? (((/* implicit */unsigned int) -1784304096)) : (1605636063U)))))));
                var_24 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
            }
        } 
    } 
}
