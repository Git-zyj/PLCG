/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_10 = max((((arr_0 [i_0 + 1] [i_0 + 1]) << ((1 ? var_5 : (arr_0 [i_0] [i_0 + 1]))))), (1 && 1));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_11 = (max(126, ((((arr_3 [i_0]) & (arr_0 [i_0] [i_1 + 1]))))));
            var_12 = (min((arr_0 [i_1 - 1] [i_1 + 2]), (((arr_2 [i_1 - 1]) & var_0))));
            var_13 = (min(var_13, ((min(var_8, (arr_0 [i_1 + 1] [11]))))));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_14 = (max(1, (var_8 != 1)));
            var_15 = ((max(1, (arr_0 [i_2 + 1] [i_2 - 2]))) >> (((((arr_0 [i_2 + 1] [i_2 - 2]) | (arr_0 [i_2 + 1] [i_2 + 1]))) - 2876807195641445357)));
            var_16 = (max((min(-92, (arr_4 [i_0 - 4]))), (((1 * 9223372036854775807) * (var_5 / 120)))));
        }
    }
    var_17 = (((max(7394363706589642794, var_6))));
    #pragma endscop
}
