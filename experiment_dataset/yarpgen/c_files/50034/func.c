/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50034
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        var_14 = ((/* implicit */signed char) arr_5 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_15 = ((/* implicit */unsigned short) arr_0 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
    }
    var_16 = ((/* implicit */short) var_8);
}
