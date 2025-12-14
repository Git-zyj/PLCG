/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201019
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (3424865245U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)226)) >> (((((((/* implicit */_Bool) (unsigned short)58516)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned short)7019)))) - (223)))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58516)) % (((/* implicit */int) (unsigned short)65535))))) & (4294967295U)))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) ((unsigned short) 3709773620463392177ULL))))))));
        var_11 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))));
    }
    var_12 = ((/* implicit */unsigned char) var_2);
}
