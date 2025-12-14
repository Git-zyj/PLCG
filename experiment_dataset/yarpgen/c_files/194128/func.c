/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194128
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_3 [(short)3] [(unsigned char)8] = ((/* implicit */long long int) ((((((int) 2976191563U)) + (2147483647))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (3036516921796496543LL))) - (951594326LL)))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((((((/* implicit */_Bool) 1318775732U)) ? (134217727U) : (2976191579U))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)979)))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((arr_5 [i_1] [(signed char)0]), (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */long long int) ((int) max((var_6), (var_6))))) : ((+(min((((/* implicit */long long int) arr_4 [i_1])), (var_9)))))));
        var_15 |= ((/* implicit */unsigned long long int) (-((+(-7344315953538256152LL)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)21]))) * (((((/* implicit */_Bool) 1318775753U)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))) ? (((((/* implicit */_Bool) arr_5 [19LL] [i_1])) ? ((+(arr_5 [i_1] [i_1]))) : (arr_5 [i_1] [(unsigned char)5]))) : (((((/* implicit */unsigned long long int) ((-8393836072760116950LL) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) / (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) 2005535344U)) : (arr_5 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(((arr_5 [i_1] [i_1]) % (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    }
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */unsigned char) var_10);
}
