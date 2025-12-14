/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220152
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) : (1801031917480099311ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
            }
        } 
    } 
}
