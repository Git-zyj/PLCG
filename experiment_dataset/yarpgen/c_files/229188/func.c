/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229188
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
    var_20 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48)) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) ((unsigned short) var_13)))))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_3 [(unsigned short)6] [i_0])), ((signed char)-64)))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((max((arr_3 [i_0] [i_0]), (arr_3 [(unsigned short)11] [i_0]))), (var_4))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */int) arr_1 [(_Bool)1])), ((+(((/* implicit */int) arr_0 [i_1 + 2]))))));
                arr_5 [i_0] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_12)))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((((unsigned int) ((((/* implicit */_Bool) -253272439)) ? (130048U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48)))))), (((/* implicit */unsigned int) ((_Bool) var_19)))));
    var_24 = ((/* implicit */_Bool) ((unsigned short) var_4));
    var_25 = ((/* implicit */short) ((signed char) (!(var_15))));
}
