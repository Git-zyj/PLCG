/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [9] [i_2] &= (13093 > 0);
                    var_17 |= (min((((-63 + 2147483647) << (((-63 + 64) - 1)))), -61));
                    arr_9 [i_2 - 2] [i_1] [3] [i_0] = (min(((((min(var_12, var_5))) ? (arr_0 [i_0 + 1]) : (((var_6 << (var_10 - 56469)))))), var_6));
                    arr_10 [i_0] [i_0 + 2] [i_0] [2] = (((arr_3 [i_2] [i_1 - 2]) << ((((((-(min((arr_5 [6] [i_0] [i_0]), 63)))) + 94)) - 27))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = ((((~var_9) ? ((min(var_8, var_0))) : var_3)));
        arr_14 [i_3] = min((((arr_11 [i_3] [i_3]) ? (arr_12 [i_3] [i_3]) : (arr_11 [i_3] [i_3]))), (((!(arr_12 [i_3] [i_3])))));
        var_18 = (max(((((arr_11 [i_3] [i_3]) % (arr_11 [i_3] [i_3])))), (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = (min(((min(var_6, 0))), (arr_12 [i_4] [i_4])));
        var_19 = (((arr_15 [i_4] [i_4]) ? ((738920017 - (arr_15 [i_4] [i_4]))) : (arr_15 [i_4] [i_4])));
        arr_19 [i_4] [i_4] = ((-(((!(((~(arr_16 [i_4])))))))));
        arr_20 [i_4] = var_13;

        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            arr_23 [i_5] [i_4] [i_5] = var_3;
            var_20 = (min(((min(((3556047279 ? (arr_15 [i_5 + 1] [i_4]) : (arr_21 [3]))), (43427 >> 0)))), (min((arr_21 [i_5 - 1]), 3426972725))));
            var_21 = (min(var_21, (((((arr_12 [i_5] [i_4]) - (arr_22 [i_4])))))));
            arr_24 [i_4] [i_5] [i_4] = ((+(((arr_21 [14]) | 738920017))));
        }
    }
    #pragma endscop
}
