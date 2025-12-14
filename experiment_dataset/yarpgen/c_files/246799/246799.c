/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 = (max(var_12, (((((max((arr_0 [i_0 - 2] [i_0 + 1]), -1708877950))) ? (((~(arr_2 [8])))) : (((((~(arr_1 [i_0] [i_0])))) ? ((var_7 ^ (arr_1 [i_0] [3]))) : (arr_1 [12] [i_0]))))))));
        arr_3 [12] [i_0] = (~0);
        arr_4 [i_0] = (((((~(arr_0 [i_0 - 1] [i_0 + 1])))) ? (((arr_0 [i_0 + 2] [i_0 - 1]) ^ -7506291105095942981)) : (((min(var_2, (arr_0 [i_0 - 2] [i_0 + 1])))))));
    }
    var_13 = -1757218733932744592;
    var_14 |= var_7;
    var_15 = var_5;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [10] |= (arr_6 [10]);
        var_16 += 85;
    }
    for (int i_2 = 4; i_2 < 6;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_2] [5] [i_3] = (((((18776 ? var_8 : ((var_2 ? 165 : 96))))) ? (((var_8 != -25567867) ? var_11 : ((var_3 ? var_7 : var_1)))) : 1));
            arr_14 [i_2] = ((var_7 != (max((max((arr_6 [i_2]), var_0)), var_8))));
            arr_15 [4] = (!5429991725002962678);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_17 = var_7;
            var_18 = var_3;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_19 = (min(1, -2147483644));
            arr_21 [i_2] = 25567867;
        }
        var_20 ^= (6136778625175256841 != -2016171073);
    }
    #pragma endscop
}
