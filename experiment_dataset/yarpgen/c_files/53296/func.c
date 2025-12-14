/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53296
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_7))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (var_14)));
    var_22 &= var_9;
    var_23 = var_8;
}
