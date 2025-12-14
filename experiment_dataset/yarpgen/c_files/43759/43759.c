/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_8, -var_12));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (max(var_22, (((((!(arr_0 [i_0] [i_1])))) << (((min((((1 << (65535 - 65527)))), ((var_15 ? 18446744073709551615 : (arr_1 [6]))))) - 245))))));
            arr_4 [i_0] [i_0] [i_1] = var_1;
        }
        var_23 *= 137;
        arr_5 [10] = (((min(((var_9 & (arr_3 [1] [2]))), ((1122571405 ? var_2 : 1)))) < -var_9));
    }
    #pragma endscop
}
