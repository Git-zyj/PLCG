/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4104
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
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = var_8;
                arr_7 [(signed char)12] [(signed char)12] |= ((/* implicit */unsigned int) ((((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) << (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_9)))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (var_11))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = ((/* implicit */signed char) var_8);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_14)))))))) | (((/* implicit */int) var_10))));
}
