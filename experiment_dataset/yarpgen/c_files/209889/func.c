/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209889
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
    var_17 = ((/* implicit */_Bool) min((((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_14))));
    var_18 = ((/* implicit */_Bool) var_15);
    var_19 = var_5;
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_10))), (var_15)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] = (_Bool)1;
            }
        } 
    } 
}
