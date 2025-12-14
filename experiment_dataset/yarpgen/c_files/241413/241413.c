/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, (~var_7)));
        arr_2 [i_0] [i_0] = (((((var_2 ? 7779759083863326602 : var_0))) % 11));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1 + 1] [i_1] = ((-(((arr_4 [i_1] [i_1 - 1]) ? (arr_4 [i_1] [i_1]) : var_10))));
        var_16 ^= -1;
    }
    var_17 = (var_6 ? -var_6 : (+-89));
    var_18 = ((3445845451375037622 - (4294967277 ^ var_0)));
    #pragma endscop
}
