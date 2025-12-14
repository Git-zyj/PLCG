/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52237
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
    var_15 -= ((/* implicit */unsigned long long int) (~(var_0)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [1LL] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2] [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))) : (var_14)));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(arr_4 [i_1] [3ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) 12328900341322045742ULL)) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (var_5)));
        var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    }
}
