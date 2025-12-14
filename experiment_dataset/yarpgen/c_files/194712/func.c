/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194712
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_3 [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        arr_5 [i_0] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1]))) : (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) + (((/* implicit */int) arr_2 [i_0] [i_0 - 1])))))));
        var_15 = ((/* implicit */_Bool) arr_1 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = arr_7 [i_1];
        arr_9 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) min(((unsigned char)64), (arr_6 [i_1] [i_1])))) : (min((((((/* implicit */_Bool) -5330275502499982422LL)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (arr_7 [i_1]))), ((+(((/* implicit */int) var_10))))))));
        var_16 *= ((/* implicit */unsigned long long int) ((unsigned short) var_10));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_0)) < (((((/* implicit */_Bool) 5330275502499982421LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63734))) : (-8339944532626819546LL)))))) != (((/* implicit */int) arr_6 [i_1] [i_1]))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_13)) >> (((((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */long long int) 1446737190U)) : (-5330275502499982422LL))) - (1446737174LL)))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_10)), (var_6)));
}
