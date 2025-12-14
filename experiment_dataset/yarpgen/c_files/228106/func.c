/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228106
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
    var_17 += ((/* implicit */unsigned short) ((var_2) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)20))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_10)) + (4027))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
    var_18 *= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1)))) | (max((min((var_14), (((/* implicit */int) var_11)))), (var_16)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) var_11)), (8388608)))), (((long long int) var_15))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1] [i_0])))) : (((/* implicit */int) ((signed char) (unsigned char)255)))));
                arr_6 [(short)16] = ((/* implicit */unsigned char) max((min((min((var_16), (((/* implicit */int) var_11)))), (var_16))), (((/* implicit */int) max((max(((unsigned short)65520), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_9)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) var_6))));
}
