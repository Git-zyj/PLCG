/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210194
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (47))) - (5)))))) & (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        var_12 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)59)))) - (((((/* implicit */int) (short)18466)) / (((/* implicit */int) (unsigned char)187))))));
        var_13 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) < (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_3 [4LL] [i_1]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1])))))));
        var_15 = ((/* implicit */signed char) arr_4 [i_1]);
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-4239189516402256953LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_10)))))));
}
