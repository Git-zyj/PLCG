/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231822
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (916961303859861373ULL) : (0ULL))))));
        var_15 *= ((/* implicit */unsigned long long int) var_0);
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned short) ((2898491064002389160LL) ^ (2898491064002389165LL)));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((var_5) < (var_7)))) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) (_Bool)1)) : (5))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3002269740U)) ? (4ULL) : (((/* implicit */unsigned long long int) 2430227289U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (var_9)))) : (max((2898491064002389160LL), (((/* implicit */long long int) var_1)))))))));
        arr_6 [(unsigned short)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 1864740006U)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 1864739995U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) > (var_12))))) : (min((3773821010744496569ULL), (18446744073709551607ULL)))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_6) ? (var_12) : (((/* implicit */long long int) var_1))))))) ? ((+(var_10))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4270024585U)))));
}
