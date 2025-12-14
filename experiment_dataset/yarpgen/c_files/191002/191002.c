/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_3 && var_2);
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_12 = (min(var_12, var_6));
        var_13 = ((!(((-342564447 ? 49847 : -1090809679)))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_14 = (min(var_14, (max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 1])))));
        var_15 = (min((min((arr_7 [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 1]))), (25 && 59302)));

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_16 = (-6449 - (max(var_2, (arr_5 [i_2 - 1]))));
            var_17 = (var_6 / 57377);
        }
    }
    #pragma endscop
}
