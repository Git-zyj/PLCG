/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [0] [i_0] [i_3] &= ((~(((arr_2 [i_0] [i_0 - 1]) ? 1038 : (arr_2 [i_0] [2])))));
                        var_17 = ((var_5 - (134217472 + var_10)));
                        var_18 += (max((((((((arr_1 [i_1] [i_2]) || 1199)))) >= ((var_0 ? (arr_3 [1] [12] [12]) : var_0)))), (((((arr_1 [i_0] [i_1]) % var_1)) > (arr_0 [i_1] [i_1])))));
                    }
                }
            }
        }
        arr_10 [i_0] [8] |= var_1;
        arr_11 [i_0] = var_12;
        var_19 = (((arr_7 [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_0]) >= 64336));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((-13 | (((arr_12 [i_4] [i_4]) ^ (arr_13 [i_4])))));
        arr_15 [i_4] = var_12;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_18 [12] = ((123058209642524733 != ((min(1199, 1199)))));
        var_20 = var_10;
    }
    var_21 = (max(var_21, ((((((-var_9 ? var_5 : (min(var_2, var_0))))) & var_16)))));
    #pragma endscop
}
