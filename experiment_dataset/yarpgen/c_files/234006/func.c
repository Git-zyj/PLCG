/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234006
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (short)13887)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [1U] = ((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))))));
        var_19 *= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) (!(var_0)))) - (1))))) == (((/* implicit */int) var_14))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_20 = var_13;
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> ((((-(((/* implicit */int) (!((_Bool)0)))))) + (24))))))));
    }
}
