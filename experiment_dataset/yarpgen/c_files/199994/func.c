/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199994
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((min((((/* implicit */long long int) (-(var_2)))), (((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (var_9))))))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))))) ? (((unsigned int) min((var_12), (((/* implicit */unsigned int) var_2))))) : (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))), (max((((/* implicit */unsigned int) var_3)), (var_12)))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)51928)) : (((/* implicit */int) (unsigned char)250)))) - (((/* implicit */int) (unsigned short)13608)))) : (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))), (((var_3) ? (((/* implicit */long long int) var_2)) : (var_5))))))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13608)) ? (((/* implicit */int) (unsigned short)51928)) : (((/* implicit */int) (short)-12))));
}
