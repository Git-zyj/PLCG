/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248195
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
    var_18 &= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_16)) > (((((/* implicit */_Bool) (signed char)-124)) ? (var_17) : (((/* implicit */int) var_0))))))), (((int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = arr_3 [i_1];
                arr_6 [i_0 - 2] [i_0 - 2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */int) (signed char)36)) : (var_7));
            }
        } 
    } 
    var_19 = var_11;
    var_20 = ((/* implicit */unsigned char) ((signed char) var_17));
}
