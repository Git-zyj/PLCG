/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212555
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)143))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_15)) : (var_8))) : (((((/* implicit */_Bool) 9223372036854775793LL)) ? (9223372036854775807LL) : (9223372036854775800LL)))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)3);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((10187845156404876136ULL) - (((/* implicit */unsigned long long int) -2023427414))))));
        var_18 *= ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)45274)))) != (((/* implicit */int) (unsigned char)7))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -139272641485375453LL)) ? (var_11) : (9223372036854775807LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_20 = min((var_11), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)45274))))));
    }
    var_21 = var_11;
    var_22 = ((/* implicit */long long int) var_3);
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((1571976950493455150ULL), (((/* implicit */unsigned long long int) 1556941190U)))), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (9032548216046210083LL))) : (max((9223372036854775807LL), (139272641485375445LL))))) : (((/* implicit */long long int) var_14))));
}
