/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38562
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
    var_18 ^= ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (max((((/* implicit */unsigned int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((-(arr_2 [3ULL])))))));
        var_22 = ((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_2 [i_1]) : (arr_2 [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))), ((+(arr_0 [i_1] [i_1])))));
        var_23 *= ((/* implicit */short) arr_4 [i_1]);
    }
}
