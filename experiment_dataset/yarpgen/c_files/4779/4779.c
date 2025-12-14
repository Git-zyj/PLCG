/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [1] = (((-((1269660247 / (arr_0 [i_0]))))));
        arr_3 [i_0] = -340145385;
    }
    var_12 = var_3;
    var_13 -= (var_1 ? ((var_6 ? (var_2 >= var_7) : var_10)) : var_2);
    var_14 += ((var_3 ? ((-((var_4 ? var_7 : var_10)))) : var_5));
    #pragma endscop
}
