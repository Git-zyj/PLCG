/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_3 != var_9);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 ^= (((arr_1 [i_0]) - (((var_19 / var_13) ? var_18 : var_15))));
        var_22 = ((-1 ? 95655177 : -8166));
        var_23 = (((~(arr_2 [7]))));
    }
    var_24 -= ((3930480303 ? var_1 : var_2));
    var_25 &= (max(((-((var_14 ? 0 : var_1)))), (((var_17 - (var_18 - var_7))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] &= ((~(arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] = ((~(arr_3 [i_1])));
            var_26 = (arr_8 [i_1] [i_1] [i_2]);
            arr_10 [i_2] = (arr_3 [4]);
        }
        arr_11 [i_1] = (max(((var_10 ^ (arr_3 [i_1]))), var_10));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_27 = var_10;
        arr_15 [i_3] [i_3] = var_15;
        arr_16 [i_3] = (max(((min(7466, (arr_14 [7])))), ((var_4 ? (arr_3 [i_3]) : var_15))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_21 [i_4] = (((var_13 ? var_14 : var_9)));
        var_28 = (((arr_19 [i_4]) ? var_4 : var_2));
    }
    #pragma endscop
}
