/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247082
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
    var_17 = ((/* implicit */unsigned int) (unsigned short)29417);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) + (((((((/* implicit */_Bool) var_5)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) + (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)28637)))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (signed char)104))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(arr_4 [i_1 + 2] [i_1 - 1])));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_1 + 1])));
        var_21 = ((/* implicit */unsigned int) ((int) ((arr_4 [i_1] [i_1]) + (var_2))));
    }
}
