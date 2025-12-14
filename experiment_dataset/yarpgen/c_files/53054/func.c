/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53054
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
    var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */_Bool) 2960222957246580377LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19666))) : (1165072446U)))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)19692)))), ((+(((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(unsigned char)0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((11ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)1] [11LL])))))))) == ((-(11227774430700848589ULL)))));
        var_14 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19666)) || (((/* implicit */_Bool) (short)-29113)))) ? (((/* implicit */int) ((((4201505542U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((((var_0) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (56))))))))) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19666)) || (((/* implicit */_Bool) (short)-29113)))) ? (((/* implicit */int) ((((4201505542U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((((var_0) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) - (56))) - (179))))))))) : (((/* implicit */int) (_Bool)1)))));
    }
}
