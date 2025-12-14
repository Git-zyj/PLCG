/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238273
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)19))))) & (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_14)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [1] [1])))));
        var_21 = ((/* implicit */unsigned long long int) ((1098191399791249231LL) ^ (arr_1 [i_0] [i_0])));
        var_22 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) 5877195795034018196LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)11])) && (((/* implicit */_Bool) arr_0 [(unsigned short)7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21880)) || (((/* implicit */_Bool) arr_1 [i_0] [2ULL])))))));
        var_23 = ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))));
    }
    var_24 = ((/* implicit */unsigned short) var_6);
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) var_16))))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)241)) >> (((-2113620329) + (2113620346)))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-23)) > (((/* implicit */int) (unsigned char)0))))))) : (min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_4))))));
}
