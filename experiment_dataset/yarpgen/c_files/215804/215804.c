/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (min(var_11, (((+(((-37 + 2147483647) >> ((((var_2 ? (arr_0 [i_0]) : var_4)) - 3700918882)))))))));
        var_12 = 2558843617;
    }
    var_13 = (max(var_13, var_1));
    var_14 = var_5;
    var_15 = (((((~8489902486895617527) == var_0)) ? var_5 : ((var_6 ? (1736123679 & 16479) : var_6))));
    #pragma endscop
}
