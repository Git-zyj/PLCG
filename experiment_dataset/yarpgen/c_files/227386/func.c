/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227386
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
    var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((262143U) << (((761815962468504487ULL) - (761815962468504468ULL))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))))) : (((((long long int) var_5)) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_19))) & (var_3)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */long long int) ((var_7) % (((/* implicit */int) var_9))))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2147483626)) : ((-9223372036854775807LL - 1LL)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-49)) && (((/* implicit */_Bool) (signed char)-65)))))));
        arr_2 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [13]))))), (((((/* implicit */unsigned long long int) 1122798216)) * (17684928111241047143ULL))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2048)) ? (((/* implicit */int) (short)-8431)) : (((/* implicit */int) (unsigned short)112))))) & (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_23 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [13LL])))) : (var_1));
    }
}
