/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214413
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */short) max((min((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) arr_2 [i_1] [(signed char)11])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-126)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)108)))) : (((/* implicit */int) (_Bool)1)))) + (max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-118))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_16);
    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_13)) + (((/* implicit */int) (signed char)33))))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((3898700613U) < (var_12)))))))))));
    var_23 = ((/* implicit */signed char) var_10);
}
