/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 += (((((((arr_0 [i_0]) && var_6)))) - (min((((~(arr_0 [i_0])))), var_12))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 += ((min((var_15 & var_10), (min(var_12, 4294967295)))));
            var_19 = (~var_6);
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 = (((((~(arr_5 [i_2] [i_2])))) ? ((-var_9 / (arr_5 [i_2] [i_2]))) : (((var_2 < (min(var_4, var_14)))))));
        var_21 |= (((((arr_4 [i_2]) ? -var_6 : (var_6 <= var_10))) - var_4));
    }
    #pragma endscop
}
