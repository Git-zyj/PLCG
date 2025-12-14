/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217083
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 4323455642275676160LL))));
        var_14 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-4323455642275676160LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [(unsigned char)6]), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)43)) >= (((/* implicit */int) arr_2 [i_0] [12ULL])))))) : (((((/* implicit */_Bool) (unsigned char)82)) ? (var_2) : (((/* implicit */unsigned int) arr_1 [(short)24])))))))));
    }
    var_15 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((7875530221179732108LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))))));
}
