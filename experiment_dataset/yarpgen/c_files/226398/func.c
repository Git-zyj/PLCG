/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226398
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
    var_11 = ((/* implicit */int) ((4072894994U) - (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) (short)24779)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)21), ((unsigned char)60)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_1))))))) ? (((var_2) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1716156765U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-106))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21381)))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
    }
}
