/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236402
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
    var_19 = max((var_1), (max(((-(((/* implicit */int) var_18)))), (((/* implicit */int) min((var_12), (var_6)))))));
    var_20 = ((/* implicit */int) max((((signed char) 712759207)), (((/* implicit */signed char) var_10))));
    var_21 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_0] [i_0]);
                arr_7 [i_1] = ((/* implicit */unsigned short) max((712759215), (((/* implicit */int) (_Bool)1))));
                var_22 |= ((/* implicit */unsigned short) ((int) arr_4 [i_1]));
            }
        } 
    } 
    var_23 = var_2;
}
