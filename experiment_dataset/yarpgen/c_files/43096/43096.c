/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_4 ? var_6 : (min(((var_9 ? var_5 : var_2)), (max(var_3, var_10))))));
    var_12 = ((var_9 ? (~var_7) : var_0));
    var_13 = (min((max(var_8, ((var_10 ? var_9 : var_3)))), (max(((var_6 ? var_0 : var_5)), var_8))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_14 = (min(var_14, (arr_1 [i_0])));
        arr_3 [i_0] [i_0 + 1] = (min(((1634712947 ? 1030056791270284514 : 2660254349)), (((4024 ? 2660254348 : 1634712947)))));
    }
    #pragma endscop
}
