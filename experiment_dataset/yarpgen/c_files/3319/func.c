/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3319
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_12))))) >= (var_1))) ? (var_3) : (((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [13U])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (-3550741586863433117LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 176818074U)) || (((/* implicit */_Bool) (short)32746))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((524287U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))))));
    }
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((unsigned int) (unsigned char)255)) : (var_4))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_4 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) (short)-1)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32754))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned char)234))))) : (((/* implicit */int) arr_7 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_22 = var_5;
        var_23 = ((/* implicit */unsigned int) (unsigned char)21);
    }
}
