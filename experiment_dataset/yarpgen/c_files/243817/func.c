/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243817
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
    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) -5987171792371380662LL)) && (((/* implicit */_Bool) var_6))))), (var_3))), (var_3)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((unsigned long long int) min((((/* implicit */int) (unsigned char)62)), (2147483623)))) & (((/* implicit */unsigned long long int) var_9))));
        arr_5 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)217)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned char)52))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (2842406555465016838LL) : (((/* implicit */long long int) 2147483632))))) ? ((~(var_17))) : (((long long int) var_9)))));
        arr_8 [i_1 + 1] [i_1 - 1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2607829651U)))) : (arr_7 [15ULL] [15ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */int) (unsigned char)239)) - (((/* implicit */int) var_16)))) : (((((/* implicit */int) (unsigned char)40)) + (((/* implicit */int) (unsigned char)217))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_21 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned char)52))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_5)))));
        var_23 = ((/* implicit */unsigned int) var_10);
        arr_12 [i_2] = ((/* implicit */unsigned short) var_16);
    }
}
