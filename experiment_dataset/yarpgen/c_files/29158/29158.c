/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((min((min(var_3, var_7)), ((min(var_1, var_6))))), var_8)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = (!(arr_0 [i_0 - 2]));
        var_13 = ((var_5 > (arr_1 [i_0 + 1])));
        var_14 = var_0;
        var_15 = ((1 ? var_0 : (9985381452053701161 + var_3)));
    }
    var_16 = (min(var_16, 8461362621655850449));
    #pragma endscop
}
