/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 |= (((max((arr_2 [i_0]), (arr_1 [i_0]))) <= (arr_1 [i_0])));
        var_11 = (~var_6);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = (min(var_12, (237532550 - -2075570529)));
        var_13 = ((9862 / (arr_1 [i_1])));
        var_14 = (max(var_14, (((9865 != ((16298 ? -18620 : 53761)))))));
        var_15 = var_7;
        var_16 ^= (((((var_7 ? 24 : 775172720))) * var_9));
    }
    var_17 = (max(var_17, ((min(var_7, var_9)))));
    #pragma endscop
}
