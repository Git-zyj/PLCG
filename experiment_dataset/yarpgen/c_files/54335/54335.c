/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1912630254;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 + 4] [i_0 + 4]);
        var_14 = (max(var_14, (((max(-9156367003526686416, (arr_1 [i_0 + 4] [i_0 + 2])))))));
        var_15 = ((((((var_6 ? 2147483647 : 7875206891926193714)) == (arr_0 [i_0 + 4] [i_0]))) ? (min(((~(arr_1 [0] [i_0 - 2]))), (((arr_1 [i_0 + 4] [4]) ^ (arr_1 [i_0 + 4] [i_0]))))) : (((((var_4 < var_10) != (min(var_4, 7875206891926193714))))))));
    }
    var_16 |= var_2;
    #pragma endscop
}
