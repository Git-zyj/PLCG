/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239855
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((arr_0 [i_0 + 1] [13ULL]) * (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_2 [10] [i_0 + 2] = (!(((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0 - 4])));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551602ULL))))));
        arr_3 [i_0] [(short)15] &= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((-(18ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (~(var_13)))) : (max((var_16), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (var_14)));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((1971382876) + (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) min((max((18ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) ((var_18) > (((/* implicit */unsigned long long int) var_7))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_13) : (arr_1 [i_1] [11])))))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)145)) ? (arr_0 [i_2 - 1] [i_2]) : (arr_0 [i_2 - 1] [i_2]))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 480)))))));
        arr_9 [i_2] [i_2] = var_10;
        arr_10 [i_2] = ((_Bool) (!(((/* implicit */_Bool) min((arr_1 [i_2] [i_2 - 2]), (((/* implicit */int) (_Bool)1)))))));
    }
}
