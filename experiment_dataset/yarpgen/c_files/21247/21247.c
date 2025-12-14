/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        var_16 = (var_6 > var_8);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1 - 2] [i_1 - 2] = (((((var_13 & var_13) & (var_2 * var_3))) > var_15));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_2] = ((var_1 * (((var_12 < (var_12 <= var_1))))));
            var_17 = (((((var_2 >= (var_7 * var_0)))) <= var_11));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_3 - 1] &= ((var_9 * (((48 | 48) % (var_11 & var_12)))));
            arr_15 [11] [i_1] = (508 > 508);
        }
        var_18 = var_14;
    }
    var_19 = var_6;
    var_20 = var_13;
    #pragma endscop
}
