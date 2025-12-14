/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54802
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
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)30613)), (max((((/* implicit */long long int) 2081317609U)), (-7721475342829499306LL)))))) ? ((~(max((498159331U), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (+(-2048037078553067325LL)));
        arr_2 [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9870))) & (3247271381U)))) ? (((/* implicit */long long int) (~(arr_1 [i_0 + 2])))) : (var_9)));
        var_17 += max((var_11), (max((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(short)15])) && (((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (min(((-(422165623U))), (((unsigned int) max((arr_1 [10U]), (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0 + 1] &= (((+(arr_0 [i_0 + 2]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1152851135862669312LL)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)255)) ? (min((((/* implicit */unsigned int) var_4)), (16383U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((9223372036854775807LL) + (-1LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (2029795681U)))))))))));
    var_20 = ((/* implicit */long long int) var_1);
}
