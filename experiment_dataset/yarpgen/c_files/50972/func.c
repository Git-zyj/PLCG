/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50972
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_3 [i_0]))));
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)17529))))) * (((((/* implicit */_Bool) (unsigned char)216)) ? (var_8) : (3144133801U))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) <= (4294967284U))))));
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)31806)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))))))));
    }
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483628)) ? (((((/* implicit */_Bool) 3577154183U)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) var_9))));
    var_15 ^= max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)15)) << (((max((-772763315), (((/* implicit */int) (unsigned char)33)))) - (14))))));
}
