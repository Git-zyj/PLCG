/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207285
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
    var_19 = max((((/* implicit */unsigned short) min((((/* implicit */short) max(((unsigned char)252), (var_8)))), (var_16)))), (max(((unsigned short)16126), ((unsigned short)43807))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_20 |= ((/* implicit */short) arr_1 [(unsigned short)11]);
        arr_2 [(_Bool)1] &= ((/* implicit */signed char) (unsigned short)49398);
    }
    for (short i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((arr_1 [i_1 - 3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) max((arr_0 [i_1]), (var_13)))) : (var_3)))) ? (((/* implicit */int) min((((arr_1 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) arr_0 [i_1 + 2]))))))) : ((-(((/* implicit */int) (unsigned char)147))))));
        arr_7 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
    }
}
