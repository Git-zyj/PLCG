/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53883
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
    var_12 = ((/* implicit */signed char) -4643082562859907851LL);
    var_13 = ((/* implicit */signed char) 4643082562859907851LL);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))), (max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) 1072614544))), (max(((short)-1664), (var_0)))))) ? (max((((/* implicit */long long int) 1562553430)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */short) (-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_17 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_9)))) == (((((((/* implicit */int) (short)-22042)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (10004)))))));
        arr_7 [i_1] &= ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 4])) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4643082562859907854LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) / (4643082562859907852LL)))));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) : (arr_1 [0LL])));
        arr_9 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) ^ (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_1 [(_Bool)1])))));
    }
}
