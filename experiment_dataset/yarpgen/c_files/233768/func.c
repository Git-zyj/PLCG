/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233768
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
    var_18 = (signed char)-127;
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) -578686384);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (+(arr_0 [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (var_11))))));
            }
        } 
    } 
}
