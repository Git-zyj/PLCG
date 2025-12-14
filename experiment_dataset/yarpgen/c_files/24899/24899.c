/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [4] = min(((((1484377659 ? (arr_0 [1]) : var_13)) / ((max(1, 1))))), ((-(arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = (max(((var_3 ? var_9 : (min(-18, 26604)))), -1877528852968817193));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_10 [i_1] = 849368473;
        var_19 = -449548761;
        var_20 ^= 26596;
        arr_11 [i_1] = ((-4072589864820085192 ? 6529084966558903842 : var_15));
        arr_12 [i_1] = ((-(arr_1 [i_1 - 2] [i_1 - 1])));
    }
    #pragma endscop
}
