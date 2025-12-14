/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201389
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (!(arr_1 [i_0 - 1])))))))));
                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
                arr_5 [i_0] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */signed char) ((arr_1 [i_0 + 1]) ? (((arr_1 [i_0 + 1]) ? (((/* implicit */int) (unsigned short)59453)) : (((/* implicit */int) (short)4095)))) : (((((/* implicit */_Bool) 1659544932U)) ? (((/* implicit */int) (short)-23300)) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 *= ((/* implicit */short) min((((/* implicit */unsigned int) (short)32746)), (2249167716U)));
}
