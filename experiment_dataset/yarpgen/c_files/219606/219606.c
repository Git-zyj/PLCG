/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_12 = (((var_2 + 2147483647) << (((arr_1 [i_0 + 1] [i_0 + 1]) - 137938213))));
        var_13 = ((var_0 ? ((var_10 ? var_0 : 16722006571433108237)) : (~var_0)));
        var_14 = (arr_1 [i_0 - 4] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1 + 1] = (((var_3 != var_3) ? ((~(arr_3 [i_1 + 1]))) : 9223372036854775807));
        var_15 = ((((((arr_3 [i_1 + 1]) ? (arr_3 [i_1 + 2]) : var_8))) && (((var_9 ? (-9223372036854775807 - 1) : (arr_3 [i_1 + 2]))))));
    }
    var_16 = (max(var_16, 1));
    var_17 = (var_8 < ((-var_10 ^ ((min(1, 82))))));
    #pragma endscop
}
