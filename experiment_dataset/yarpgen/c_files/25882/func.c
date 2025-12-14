/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25882
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
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-45))))))) / (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 2047U))));
                var_21 = arr_5 [i_1 + 2] [i_0] [i_0 + 3];
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_16);
    var_23 = ((/* implicit */unsigned char) var_4);
}
