/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38524
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
    var_13 += var_9;
    var_14 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_10)), (2070012251275153181ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])));
        var_16 = ((/* implicit */signed char) (~(arr_3 [i_0])));
        var_17 ^= ((/* implicit */long long int) (((((~(((/* implicit */int) var_11)))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (2938)))));
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
        var_19 = ((/* implicit */int) min((var_19), ((~(731587760)))));
    }
    for (int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 + 3] [i_1 - 3])) + (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3]))))), (min((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))), (((/* implicit */long long int) ((unsigned int) arr_4 [i_1 - 2]))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9190155767684141578ULL)) ? (-609509979) : (((/* implicit */int) (short)-20977))))) - ((+(9190155767684141550ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))) : (var_1)))))) : (arr_4 [i_1])));
    }
}
