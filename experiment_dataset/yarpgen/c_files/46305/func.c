/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46305
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
    var_19 = ((/* implicit */unsigned short) (signed char)-1);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1340604274U)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))));
    var_21 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = arr_0 [i_1];
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) var_15);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_3);
}
