/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_0));
    var_11 = (((var_3 | (~9489430740086576669))));
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (!18437726865477061343);
        var_13 = (min(var_13, (((-587983379 ? (arr_0 [i_0 - 1]) : 8957313333622974947)))));
    }
    #pragma endscop
}
