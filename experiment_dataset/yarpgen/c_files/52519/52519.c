/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] |= (min(((0 << (255 - 233))), (31 < 244)));
        var_11 = (min(((255 ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0]) ? var_4 : (arr_0 [i_0]))))), ((((!(arr_1 [i_0] [i_0])))))));
    }
    var_12 = (((((((max(var_3, var_0))) * var_8))) ? ((((min(var_1, var_8))) >> (244 - 234))) : var_6));
    var_13 = (max(var_13, var_6));
    #pragma endscop
}
