/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237038
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
    var_19 = (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_12) : (((/* implicit */long long int) -1313295597)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 &= ((/* implicit */int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_8))))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) : ((+(arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_3 [i_0])) : (-9223372036854775807LL))))));
        var_22 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2389106561U) & (var_15)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_8)))) : (var_7)))), (((unsigned long long int) arr_2 [8LL]))));
        arr_5 [i_0] = ((/* implicit */_Bool) (+(((int) var_1))));
    }
}
