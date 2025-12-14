/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 = var_0;
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (min((((arr_2 [i_0]) >= var_7)), (-723965844 == 512)));
        arr_5 [10] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_1, (((arr_2 [i_1]) ? var_6 : var_9))));
        arr_8 [i_1] = (-((var_11 - (arr_7 [i_1] [11]))));
    }
    var_15 += (((var_1 - var_2) ? (((~var_6) | (var_11 - 33554432))) : (((3824683622856709393 ? ((-509 ? 45141 : 165)) : var_10)))));
    #pragma endscop
}
