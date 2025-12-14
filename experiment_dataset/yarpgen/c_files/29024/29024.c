/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 -= ((((((var_2 ? -850222448 : 1660129632)))) ? (arr_1 [i_0] [i_0]) : (-2147483647 - 1)));
        arr_3 [i_0] = var_9;
        arr_4 [0] [i_0] = (arr_2 [12]);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [12] [i_1] = (arr_0 [i_1 + 1] [i_1 - 2]);
        var_12 = ((0 <= ((-11763 ? -96 : (arr_1 [i_1 - 1] [i_1 - 1])))));
        arr_8 [i_1] [i_1] = 123;
        arr_9 [i_1] = (((((2893417317 < (-85 == var_6)))) >> (((((max(-108, 1))) || (65535 < var_0))))));
        arr_10 [i_1] = ((((var_8 ? (arr_0 [i_1 - 1] [i_1 - 2]) : -4)) - var_4));
    }
    var_13 = (min(var_13, var_4));
    var_14 = var_8;
    var_15 = var_3;
    #pragma endscop
}
