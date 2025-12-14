/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33366
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
    var_10 = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)36)) / (((((7970679505023779153ULL) % (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) var_1))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (unsigned char)99))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 |= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) >= (arr_1 [i_0]))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)0)), (3085135031316876674ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 18446744073709551598ULL)))) ? (((unsigned long long int) ((var_6) * (18446744073709551615ULL)))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0])))));
    }
}
