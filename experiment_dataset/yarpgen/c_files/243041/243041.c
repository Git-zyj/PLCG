/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_10 = ((~(((!var_9) ? var_8 : (((1 ? (arr_0 [i_0] [i_0]) : -3)))))));
        arr_3 [i_0] = var_3;
        var_11 = (min(var_11, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_12 -= (arr_1 [i_1 + 3]);
        arr_6 [i_1] [i_1] |= arr_2 [i_1];
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [i_2]);
        var_13 = ((var_3 ? (max((((arr_4 [17]) / (arr_7 [i_2]))), (((~(arr_5 [i_2])))))) : (min((arr_8 [i_2] [i_2]), 127))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_15 [i_3] = (1 ^ 0);
        var_14 = (((((var_9 ? -6951363125649859918 : 7865074401472261950))) > (((((var_6 ? var_4 : (arr_1 [i_3])))) % -1195787799))));
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_15 ^= (arr_14 [i_4 - 1]);
        var_16 = (min(3, 0));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_20 [i_4] = ((var_1 || (arr_1 [i_4])));

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_17 |= var_3;
                var_18 = (max(var_18, ((0 << ((((8589930496 << ((((min(-14, 1))) + 26)))) - 35184355311601))))));
            }
            arr_24 [i_4] [i_4] [i_4] = (((arr_22 [i_4 + 2]) * (((arr_18 [i_4 - 2] [i_4] [i_4 + 1]) ? (arr_22 [i_4 - 2]) : 1))));
        }
    }
    #pragma endscop
}
