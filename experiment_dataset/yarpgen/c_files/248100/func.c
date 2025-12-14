/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248100
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((int) var_18));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1] [i_1]))));
        }
        arr_5 [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned long long int) var_13);
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_22 += ((((/* implicit */_Bool) min((7902489766817964514ULL), (10544254306891587108ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) - (arr_7 [i_2])))) : ((+(-4790661866603729568LL))));
        var_23 = ((/* implicit */unsigned char) ((signed char) 487709544746975695LL));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 592156302U)) : (((((/* implicit */_Bool) 4112346831U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_10))))) & (var_19))))));
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_18)), (var_16)));
}
