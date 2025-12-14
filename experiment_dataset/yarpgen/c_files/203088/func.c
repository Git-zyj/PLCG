/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203088
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
    var_10 = var_2;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [8])))) ? (((((arr_1 [i_0]) + (2147483647))) >> (((arr_2 [i_0]) - (14423423366310916054ULL))))) : ((+(((/* implicit */int) arr_0 [i_0])))))))));
        var_12 = arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)18])) ? (arr_1 [i_1]) : (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) % (((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) ((((arr_4 [i_1] [i_1]) + (2147483647))) >> (((arr_4 [i_1] [i_1]) + (1363716221)))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */unsigned long long int) arr_4 [i_1] [2ULL])) ^ (arr_2 [i_1])))))));
        var_14 ^= ((/* implicit */signed char) ((arr_4 [i_1] [i_1]) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_15 = ((/* implicit */short) ((unsigned long long int) arr_4 [i_1] [i_1]));
    }
}
