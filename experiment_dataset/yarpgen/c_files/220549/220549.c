/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (max((max(var_7, ((var_5 ? 0 : var_9)))), var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = var_8;
        var_17 = ((var_5 & (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] |= (min((((-24283 + 2147483647) << (((arr_4 [i_1]) - 692455707)))), 14623));
        var_18 = var_9;
    }
    var_19 = (max(var_4, (((((1 ? 7 : 51610))) ? 117 : ((-15 ? 4294967295 : 117))))));
    #pragma endscop
}
