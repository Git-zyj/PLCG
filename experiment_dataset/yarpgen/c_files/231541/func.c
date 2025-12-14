/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231541
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
    var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) & (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)720))))))));
        var_12 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) var_7)));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5))))))));
    }
    var_15 = var_6;
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) ((long long int) var_7))));
}
