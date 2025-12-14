/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [14] |= ((((1 ? (max(3, 226)) : var_11)) != ((max((var_18 != var_14), var_12)))));
        arr_3 [11] = (arr_0 [i_0]);
        var_21 = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
