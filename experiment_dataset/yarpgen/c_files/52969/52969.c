/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(((121 ? (82 != 13746) : 8889288899009814674)), (~1)));
    var_13 = (var_10 || ((min((var_8 >= var_4), (min(var_0, var_10))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = var_3;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (var_4 % (arr_2 [i_0] [i_0] [i_1]));
            var_15 -= (arr_0 [12]);
        }
    }
    var_16 = var_9;
    var_17 = (((48 && var_9) <= var_0));
    #pragma endscop
}
