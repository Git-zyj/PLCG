/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23156
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8837))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_14)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [3LL] [3LL] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0 + 3] [i_0] [(short)12])) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3] [(unsigned char)2] [(_Bool)1]))))) : (var_7)));
                    arr_9 [i_2] [i_0 + 3] [i_0 + 3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((((/* implicit */int) var_14)) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) 2686733793U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_4 [i_0] [i_0] [i_0]))) : (arr_4 [i_0 + 2] [(unsigned char)8] [i_2]))) : (((/* implicit */unsigned long long int) var_2))));
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)8] [i_2])))) ? (-3333730900196017407LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) arr_1 [i_0 + 2] [12U])))))) : (2628710992U)));
                }
            } 
        } 
    } 
}
