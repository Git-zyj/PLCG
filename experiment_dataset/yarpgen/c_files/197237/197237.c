/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : 4294967290);
        var_11 = ((var_9 <= (arr_1 [i_0 - 1])));
        var_12 = (max(var_12, ((((arr_1 [i_0 - 1]) / -9419)))));
    }
    var_13 *= 119;
    var_14 = var_9;
    #pragma endscop
}
