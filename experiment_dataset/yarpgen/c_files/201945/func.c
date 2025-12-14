/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201945
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))), (((((/* implicit */int) (unsigned char)255)) >> (((4294967295U) - (4294967264U)))))));
                arr_5 [i_0] [(unsigned char)13] [i_0] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))));
}
