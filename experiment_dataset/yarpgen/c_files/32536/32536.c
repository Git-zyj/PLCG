/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_11 = ((17154017777728042101 ? (21609 / 123) : (arr_1 [i_0 - 1] [i_0 - 1])));
        arr_2 [i_0 - 1] [i_0 - 1] = var_4;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_12 ^= var_9;
        arr_5 [10] = (max((arr_3 [i_1] [i_1 + 3]), (var_3 * 25526)));
        var_13 = ((((((3 ? 18446744073709551613 : (arr_3 [i_1] [i_1]))))) * (min((-12 < 2704793978741534508), (((arr_4 [1] [0]) ? var_5 : var_3))))));
        arr_6 [i_1 + 2] = (max(((var_10 ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 1] [i_1]))), (~4)));
        arr_7 [i_1 + 3] = (min((max(((18446744073709551597 ? 19424 : 2)), (((-1 ? var_1 : -1))))), ((((arr_1 [i_1 - 1] [i_1 - 1]) ? (var_0 - var_8) : ((max(var_8, var_7))))))));
    }
    var_14 = ((((((!(var_0 == 85))))) <= -1));
    var_15 = 73;
    #pragma endscop
}
