/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226078
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
    var_13 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (unsigned short)27756)) ? (var_4) : (((/* implicit */int) var_5)))))) + (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)27757))))) > (var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-5101767628714841232LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 204840797U)) ? (((/* implicit */int) (unsigned short)37789)) : (((/* implicit */int) (unsigned short)6))))))))));
        var_15 = ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)37766)) : (134217696))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) % (((((/* implicit */_Bool) (signed char)-92)) ? (1014536659461777013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_17 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(4090126500U)))) | (9608452816954090385ULL)));
    }
}
