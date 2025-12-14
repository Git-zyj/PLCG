/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42470
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
    var_12 = min((((/* implicit */unsigned long long int) (((~(var_11))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_8))))))), ((((!(((/* implicit */_Bool) var_5)))) ? (var_7) : (((/* implicit */unsigned long long int) max((-2305843009213693952LL), (((/* implicit */long long int) var_0))))))));
    var_13 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (max((((/* implicit */int) (unsigned short)29)), (var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((((/* implicit */_Bool) 6ULL)) ? (var_5) : (((/* implicit */int) (signed char)0))))));
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 - 1]))));
        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [12U])) && (((/* implicit */_Bool) -1932037175)))) ? (((/* implicit */unsigned long long int) ((((var_9) + (2147483647))) >> (((arr_1 [i_0]) - (2085631853)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7)))));
    }
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (-24)))) < (var_6))))) != (max((min((((/* implicit */long long int) var_9)), (var_8))), (((/* implicit */long long int) var_2))))));
}
