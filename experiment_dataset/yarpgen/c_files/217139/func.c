/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217139
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_16)))))) ^ (((/* implicit */unsigned long long int) var_0)))))));
    var_19 |= ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23223))) % (var_1))))))));
                    var_20 = ((short) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) ^ (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
}
