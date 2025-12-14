/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50113
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)21979)) >> ((((-(((/* implicit */int) (short)-21979)))) - (21975)))));
        var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)90)), (var_1)))) < (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_0 + 1])))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_16 = (-(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2])));
        var_17 = ((/* implicit */signed char) var_9);
    }
    var_18 = (short)21981;
    var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)21979)) : (((/* implicit */int) (short)21979))))))), (((((/* implicit */_Bool) (short)-21980)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16291))) : (460046916U)))));
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
}
