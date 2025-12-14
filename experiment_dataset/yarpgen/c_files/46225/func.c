/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46225
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) (short)-7418)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (short)7426)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1665557291U)))) : (var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 8388607))) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((9223372036854775807LL), (((/* implicit */long long int) (short)-4)))))) : (((/* implicit */long long int) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) + (((/* implicit */int) ((_Bool) var_9))))))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
}
