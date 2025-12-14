/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208355
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) / (((((/* implicit */_Bool) 532676608)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    var_17 = ((((/* implicit */_Bool) (short)-23430)) ? (((/* implicit */int) (short)-23430)) : (((/* implicit */int) (short)-23428)));
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(var_6)))) ? (var_4) : (((/* implicit */int) ((short) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)2] [(unsigned short)5])) ? (((/* implicit */unsigned int) var_6)) : (var_15)))) ? (((((/* implicit */_Bool) (short)23429)) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((/* implicit */int) arr_1 [(short)2] [i_0])))) : (((/* implicit */int) ((unsigned short) var_3)))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */long long int) arr_3 [i_1]);
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)18439)) - (18435)))));
    }
}
