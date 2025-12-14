/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209357
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */_Bool) ((int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_22 = min((((/* implicit */int) min((var_8), (((/* implicit */short) var_9))))), ((+(((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_0])))));
                    var_23 = (signed char)14;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)0)))))));
}
