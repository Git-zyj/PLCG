/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191944
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61029)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (305150552U))))))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) / (min((9223372036854775781LL), (((/* implicit */long long int) arr_0 [i_0]))))))));
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((min((((/* implicit */unsigned int) var_6)), (var_5))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)27043))))) % (((unsigned int) arr_1 [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)27044)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((signed char) 1857077867U))) : (((/* implicit */int) max((((/* implicit */short) var_4)), (var_8)))))), (((/* implicit */int) var_16)))))));
}
