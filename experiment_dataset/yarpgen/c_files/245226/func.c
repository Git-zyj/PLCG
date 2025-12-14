/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245226
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-6107)) + (min((((/* implicit */int) (signed char)74)), (1044841698)))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) var_3);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) arr_6 [i_1]);
        var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_6 [i_1])))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))));
        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15816)) ? (((/* implicit */int) (unsigned short)4947)) : (((/* implicit */int) (signed char)116))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)11846)) : (((/* implicit */int) (unsigned char)138))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32747)) + (2147483647))) << (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24128))) : (998773878589125745LL)))) : (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) < (arr_7 [i_2] [i_2])));
        var_23 = ((/* implicit */unsigned short) var_3);
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1335041337092268924ULL)) ? (((/* implicit */int) (unsigned short)4947)) : (((/* implicit */int) (unsigned short)53799))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (signed char)-10)) : (arr_7 [i_2] [i_2])));
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)4947)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) < (((/* implicit */unsigned long long int) ((long long int) (unsigned short)11736)))))))))));
}
