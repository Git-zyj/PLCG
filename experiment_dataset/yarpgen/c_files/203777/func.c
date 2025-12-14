/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203777
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)163))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_0 [i_0]))))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1225330632)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 1225330636)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_14 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_4)))))), (((/* implicit */long long int) ((min((((/* implicit */int) (_Bool)1)), (1279652901))) / (((/* implicit */int) var_2)))))));
}
