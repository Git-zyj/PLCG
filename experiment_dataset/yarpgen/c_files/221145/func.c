/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221145
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
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((short) (+(var_18))));
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1] [i_1] [13U]))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_0 + 2] [i_0 + 1])))))) : (((((_Bool) var_16)) ? (((((/* implicit */_Bool) var_4)) ? (355482056U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_0 [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((long long int) 64700297))))) ? (((/* implicit */int) var_9)) : (var_6))))));
}
