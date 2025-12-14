/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4551
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
    var_16 = ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) var_0)), (((var_10) >> (((((/* implicit */int) (unsigned short)255)) - (254))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)163)), (min((((/* implicit */unsigned int) (unsigned char)242)), (95528254U)))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_11))));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)9092)) : (((/* implicit */int) (unsigned char)16)))))))));
    var_19 = ((/* implicit */long long int) (short)22975);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) != (max((var_11), (((/* implicit */long long int) (unsigned short)56441))))))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_1] [i_1])), ((short)-22982))))));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((max((4167811504U), (((/* implicit */unsigned int) (signed char)-121)))) | (((4294967292U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))))) - (4294967231U)))));
                var_22 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)90));
            }
        } 
    } 
}
