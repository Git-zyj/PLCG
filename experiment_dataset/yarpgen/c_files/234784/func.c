/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234784
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
    var_19 &= var_11;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_21 = ((1754534237U) | (2540433059U));
        arr_2 [i_0] = (unsigned char)225;
    }
    for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4011281408U)))))));
        arr_7 [i_1 - 1] = 2050618395U;
        var_22 = ((/* implicit */unsigned int) arr_5 [i_1 + 3]);
    }
}
