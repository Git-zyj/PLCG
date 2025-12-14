/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((min(1820471210, 78800555))) ? (min(4216166741, 2736397692)) : var_1)) + (((((arr_0 [i_0 + 2]) > var_11))))));
        var_13 += ((!((min(var_5, var_5)))));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] &= (arr_1 [i_0]);
    }
    var_14 = (max(var_14, var_6));
    #pragma endscop
}
