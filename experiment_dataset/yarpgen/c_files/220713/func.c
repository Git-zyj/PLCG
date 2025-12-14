/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220713
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
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_0))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_1 - 1] [i_0]))));
                    arr_8 [i_0] [i_1] [14U] [i_0] = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [18U] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-73))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))));
                }
            } 
        } 
    } 
}
