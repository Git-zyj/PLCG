/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233427
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
    var_14 = ((/* implicit */signed char) ((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (short)18)))))))) >> ((((((-(1389771291U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))))) - (68U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 += var_12;
                arr_5 [i_0] [(short)9] = var_12;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_6)))))) * (var_11)));
}
