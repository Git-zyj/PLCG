/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max(var_1, 1))));
        arr_4 [17] [17] = 25144;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_13 = (min(var_13, (arr_7 [i_1])));
        var_14 = (((-(min((arr_5 [i_1]), (arr_6 [i_1 + 1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [1] = (arr_5 [i_2]);
        arr_11 [i_2] = ((max((arr_8 [5] [i_2]), (((arr_5 [i_2]) ? var_7 : 0)))) % (((((0 ? (arr_5 [i_2]) : var_3)) >> ((6 ? 0 : 13))))));
    }
    var_15 = ((0 ? var_9 : ((var_3 ? (0 - var_4) : (var_4 && -2517630066961060559)))));
    var_16 = 37143;
    #pragma endscop
}
