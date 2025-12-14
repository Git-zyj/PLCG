/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((var_0 << (var_9 - 111)))));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 = (((var_8 >= (arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = (((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_3 : (arr_2 [14] [i_0]))) : (((var_6 ? (arr_1 [i_0]) : var_1)))))) ? -1792537732 : var_3);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max(((-7838946599057977396 ? 67108863 : var_3)), (arr_4 [i_1]))))));
        arr_6 [i_1] = (min((((arr_2 [6] [i_1]) ? (((arr_4 [i_1]) ? var_12 : 16894)) : var_7)), ((+(min((-2147483647 - 1), (arr_2 [9] [i_1])))))));
        var_17 = var_0;
        var_18 = (((16887 ? -16861 : 64685)));
    }
    #pragma endscop
}
