/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211175
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_18)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)2471))));
        var_20 = ((/* implicit */unsigned char) 984532801);
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)161), (((/* implicit */unsigned char) (_Bool)1))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)99))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) & (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) (short)(-32767 - 1)))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((_Bool) (_Bool)1)))));
    }
    var_24 = ((/* implicit */signed char) var_18);
    var_25 = var_9;
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1349668419U)) % (min((((((/* implicit */_Bool) (unsigned short)28292)) ? (((/* implicit */long long int) var_6)) : (-4245224404613001931LL))), (((/* implicit */long long int) (-(2208530981U))))))));
}
