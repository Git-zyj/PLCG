/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208356
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
    var_17 = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-18010)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_18 = (-(min((((var_4) | (var_6))), ((+(((/* implicit */int) (short)29315)))))));
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((var_10) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((var_3) - ((+(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) ^ (((var_11) | (((/* implicit */int) (unsigned char)20))))));
            var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
            var_23 += ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)20))));
        }
        var_24 = ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)1)))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_25 += ((/* implicit */unsigned short) var_16);
        var_26 += ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (max((var_9), (((/* implicit */unsigned short) (short)29307)))))));
        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_15)))))) / (((/* implicit */int) ((short) max((4), (((/* implicit */int) var_2))))))));
    }
}
