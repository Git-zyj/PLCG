/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46214
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) max((((/* implicit */short) var_13)), ((short)8192))))))) ? ((~(((/* implicit */int) (short)17605)))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (14822526824668918545ULL)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (short)17609))))), (min((-9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
    }
}
