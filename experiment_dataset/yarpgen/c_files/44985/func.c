/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44985
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
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((short) arr_1 [i_0]))), (((9223372036854775807LL) >> (((1376602409) - (1376602346))))))) * (((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) & (((long long int) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)7])))))))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((/* implicit */unsigned int) -1376602409)) * (4294967295U))) : (((/* implicit */unsigned int) min((1376602416), (((/* implicit */int) (unsigned char)0))))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((((/* implicit */int) (signed char)24)) - (1376602413)))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) ((int) arr_0 [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) var_2)), (var_4))));
}
