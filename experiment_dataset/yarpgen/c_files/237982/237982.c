/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((((arr_1 [i_0 - 1] [14]) ? (6 / var_6) : (arr_1 [i_0 - 1] [i_0 - 1])))) ? -1009263224 : (min((arr_0 [i_0]), (((arr_0 [i_0]) ? var_4 : (arr_1 [i_0 - 1] [i_0])))))));
        var_17 = (min((arr_0 [i_0]), (((((arr_1 [i_0] [i_0]) ? var_12 : var_2)) * (((var_0 ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_2] = var_4;
                        var_18 = ((min((arr_5 [i_1] [i_1 + 2] [i_3] [i_3 - 2]), (arr_5 [2] [i_1 + 2] [i_3] [i_3 - 2]))));
                    }
                }
            }
        }
        var_19 = ((((min(((((arr_2 [1] [16]) ? -61 : var_6))), (min(4912781892238316455, var_14))))) ? (((1 / var_7) / 25)) : var_5));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_12 [i_4] = ((((((arr_1 [i_4 - 3] [i_4]) ? (arr_3 [i_4 + 1]) : (max(3, var_11))))) ? (((((1344113303 ? 11354310372968602602 : -1))) ? 153847270976811901 : (((-4912781892238316454 ? 164 : var_15))))) : var_0));
        arr_13 [i_4] &= (!var_2);
    }
    var_20 = (var_12 || var_15);
    var_21 = (~var_12);
    #pragma endscop
}
