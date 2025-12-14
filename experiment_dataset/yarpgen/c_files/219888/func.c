/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219888
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_2 [i_0])));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_14) ? (arr_2 [10LL]) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))))) ? (((/* implicit */long long int) arr_3 [i_0 + 2])) : (-3974313422498517092LL)));
        var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) var_4)) ^ (arr_2 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_19 = var_1;
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) arr_5 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3974313422498517091LL)) % (((2596780226294347691ULL) ^ (((/* implicit */unsigned long long int) var_12))))));
        var_21 = ((var_13) < (((/* implicit */long long int) var_5)));
        var_22 = ((/* implicit */unsigned short) var_14);
    }
    var_23 = ((/* implicit */unsigned short) var_11);
}
