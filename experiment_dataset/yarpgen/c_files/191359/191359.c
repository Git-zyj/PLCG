/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((min(-1103328107, -99))) ? -7 : ((((~(arr_1 [i_0]))))));
        var_16 = ((((arr_0 [i_0]) ? (~0) : ((1103328104 ? var_14 : var_2)))));
        var_17 = (arr_1 [i_0]);
        var_18 = (var_8 ? (arr_1 [i_0]) : 3703);
    }
    var_19 = (min(var_19, 896));
    var_20 = (min(var_20, var_8));
    var_21 = ((((!(~var_8))) || var_5));
    var_22 = (min(var_22, 0));
    #pragma endscop
}
