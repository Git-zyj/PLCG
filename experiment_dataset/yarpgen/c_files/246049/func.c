/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246049
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
    for (short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) << (((((-1LL) + (30LL))) - (27LL)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)2527)) << (((18446744073709551612ULL) - (18446744073709551593ULL)))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) | ((~(-9223372036854775789LL)))))) ^ (((((/* implicit */_Bool) (~(arr_1 [(signed char)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23119))) : (((((/* implicit */_Bool) -7441612696677397983LL)) ? (18446744073709551615ULL) : (14368673678011643603ULL)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((((-(var_11))) >> (((var_16) + (740854887))))) - (((((/* implicit */int) var_4)) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)14623)) : (((/* implicit */int) var_13)))))))))));
}
