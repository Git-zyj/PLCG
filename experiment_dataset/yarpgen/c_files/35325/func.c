/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35325
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (arr_1 [i_0])));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) (unsigned char)208))));
    }
    var_16 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)-72)))));
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3078324245064455576LL)) ? (((/* implicit */int) ((var_12) >= (((/* implicit */int) var_6))))) : (((((((/* implicit */int) var_11)) + (2147483647))) >> (((2591893805775671931ULL) - (2591893805775671927ULL))))))) - (((((/* implicit */int) (signed char)-72)) & (((((((/* implicit */int) (short)-27597)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (18013)))))))));
}
