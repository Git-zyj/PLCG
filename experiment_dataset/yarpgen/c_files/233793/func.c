/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233793
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
    var_18 = ((/* implicit */_Bool) var_17);
    var_19 &= ((/* implicit */int) var_17);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 1533096885U))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((2761870391U) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (min((var_6), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0 + 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (400640200U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))) <= (((/* implicit */int) arr_2 [i_0 + 1]))))) : (((/* implicit */int) min((arr_2 [i_0 + 1]), (((/* implicit */unsigned short) (signed char)-115)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_5))));
    }
    var_22 = ((((/* implicit */int) (unsigned short)35528)) - ((-(((/* implicit */int) max(((signed char)122), (((/* implicit */signed char) (_Bool)1))))))));
}
