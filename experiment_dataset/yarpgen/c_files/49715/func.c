/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49715
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((var_5) <= (((arr_4 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_16)), (var_3)))))) ? (var_11) : (((/* implicit */int) ((var_8) != (min((((/* implicit */long long int) var_12)), (var_8))))))));
                arr_6 [i_0] [i_1] [(signed char)7] &= ((/* implicit */unsigned long long int) ((unsigned char) (~(((var_5) | (var_5))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_14);
    var_20 = ((/* implicit */signed char) var_13);
    var_21 = ((/* implicit */unsigned int) var_15);
}
