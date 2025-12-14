/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47817
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (signed char)3);
                var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1]))));
                arr_6 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(_Bool)1]))) ^ (arr_3 [i_0] [(unsigned short)0] [15]));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((var_11) == (((/* implicit */int) var_6)))))))));
    var_23 = (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_15))))))))));
}
