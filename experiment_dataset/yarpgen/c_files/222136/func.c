/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222136
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
    var_13 += ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) min(((signed char)-23), (var_11)))), (max((var_7), (var_6)))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_1)))) ? (((/* implicit */int) max((var_7), (var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) | (min((((/* implicit */int) max((arr_1 [i_0] [i_0]), (var_0)))), (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_11))))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)23)), (var_8)));
    }
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_16 *= ((/* implicit */short) (-(max((((((/* implicit */_Bool) 9223372036854775794LL)) ? (((/* implicit */int) var_2)) : (arr_4 [i_1 - 2] [i_1]))), (((/* implicit */int) ((unsigned short) var_11)))))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_3 [2])))))))));
    }
}
