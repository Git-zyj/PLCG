/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229260
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
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) - (var_4)));
    var_17 = ((/* implicit */signed char) (-((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_13)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(signed char)9]) : (arr_0 [16ULL] [16ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1] [i_1]))) ? (max((((long long int) arr_1 [i_1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) << (((((/* implicit */int) ((signed char) arr_4 [3]))) + (96))))))));
        var_20 |= ((/* implicit */signed char) (+(arr_0 [2ULL] [i_1])));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 + 2])) ^ (((/* implicit */int) arr_8 [i_2 - 1]))));
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [18LL])) && (((/* implicit */_Bool) arr_8 [i_2])))))));
    }
}
