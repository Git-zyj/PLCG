/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3079
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
    var_17 |= max((((((/* implicit */_Bool) (-(var_1)))) ? (min((var_6), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), ((~(2074766888445220796LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (15862621528238215196ULL) : (((/* implicit */unsigned long long int) -2074766888445220796LL))))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) > (2074766888445220796LL))))) : (var_1))) : (((((/* implicit */_Bool) -9223372036854775794LL)) ? (14093668233393498694ULL) : (max((var_8), (((/* implicit */unsigned long long int) var_2)))))));
        var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) var_10)) : (var_1))) : (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_12))))))));
    }
}
