/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206131
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
    var_11 ^= ((/* implicit */short) ((signed char) var_6));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)196))));
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? ((+(((1537583507560761304LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_6))));
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 2] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2])))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_4))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (var_1)))))) ? (arr_5 [i_1 + 1] [i_1]) : (max((((/* implicit */int) arr_0 [i_1])), (arr_5 [i_1] [i_1])))));
    }
}
