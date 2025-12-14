/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247955
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) < (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))));
        arr_2 [i_0] [i_0] &= arr_0 [i_0] [i_0 + 1];
        arr_3 [i_0 + 1] |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_6 [(_Bool)1] |= ((/* implicit */_Bool) var_3);
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2901391036U)) ? (17732923532771328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32647))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)74)) >> (((/* implicit */int) var_1))))))) : (var_4)));
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((_Bool) var_4))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 33553408LL)) == (var_11)))))) != (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (var_12)));
}
