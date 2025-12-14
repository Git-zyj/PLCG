/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211457
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 13891319652820083940ULL)))));
        var_13 -= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_0))), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) <= (var_6))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (603995664U))))));
        var_14 += ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_0 [i_1]))))) : (arr_6 [i_1])));
        var_15 ^= ((/* implicit */unsigned long long int) var_9);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_16 &= ((/* implicit */unsigned short) var_3);
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4032))));
    }
    var_18 = ((/* implicit */long long int) (~(var_5)));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)25397), ((unsigned short)61510))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65507))) ^ (3177277842U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
