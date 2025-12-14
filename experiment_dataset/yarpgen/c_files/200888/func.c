/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200888
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
    var_19 = ((/* implicit */unsigned char) (short)7680);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) (+(var_8)))))))));
                var_21 = ((/* implicit */unsigned long long int) (signed char)29);
                var_22 = ((/* implicit */signed char) max((var_22), ((signed char)11)));
                arr_5 [i_0] [i_0] = ((/* implicit */int) 4294967282U);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (256105141760533240ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (14)))) : (var_11)))));
    var_24 = ((/* implicit */long long int) var_1);
    var_25 = ((/* implicit */unsigned long long int) var_18);
}
