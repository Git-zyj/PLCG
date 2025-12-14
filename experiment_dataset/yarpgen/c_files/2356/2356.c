/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 && (((28 ? ((var_9 ? var_14 : var_9)) : ((var_4 ? 227 : var_4)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7)) != -25849));
        arr_3 [i_0] = (arr_0 [i_0 - 1]);
        var_18 = (min(var_18, ((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 3]))))));
        var_19 |= ((639677692 ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (max(((min((-9089409203811266972 <= 27), (arr_1 [15])))), 25849));
        arr_6 [i_1] = ((((((arr_0 [8]) ? var_13 : ((-879515562 / (arr_5 [i_1])))))) != ((8738 ? (arr_4 [i_1]) : var_15))));
    }
    #pragma endscop
}
