/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] |= ((((-32762 ^ (max(69, var_17))))) ? (arr_1 [i_0] [i_0 - 1]) : (max(var_9, (arr_1 [i_0] [i_0]))));
        var_19 = var_12;
    }
    var_20 = (min(var_20, (((162 ? 17507 : var_10)))));
    var_21 = var_2;
    var_22 = (var_2 && var_10);
    #pragma endscop
}
