/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209298
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
    var_11 = ((/* implicit */long long int) (unsigned short)30539);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8)))))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_7), ((unsigned short)16497))))));
                var_12 = ((max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)18)))), (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2]))) != (((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))));
            }
        } 
    } 
}
