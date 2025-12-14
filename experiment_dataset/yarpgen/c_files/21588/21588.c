/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));
    var_14 |= (-(((((var_3 ? var_9 : 1518075536))) ? (var_8 && var_8) : var_1)));
    var_15 = (((var_0 ? (var_10 % var_9) : var_7)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = 0;
                    arr_8 [i_0] [i_0 + 2] [2] = (max((arr_1 [i_0]), (min(((max((arr_6 [i_1] [i_2]), var_11))), (arr_1 [i_0])))));
                }
            }
        }
        arr_9 [i_0] = ((((-var_8 >> (((max(var_10, var_12)) - 4955682512840435533))))) ? 1069999366 : (max((max(1069999377, 1)), ((~(arr_4 [i_0] [i_0 + 2]))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_3] = var_8;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_16 &= ((((72057594037796864 ? var_1 : var_12)) * (arr_18 [i_3] [i_5] [i_5])));
                        var_17 -= (arr_21 [i_3] [i_4] [i_5] [i_6] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        var_18 = (min(var_18, (11 / 1)));
                        var_19 = 18374686479671754765;
                    }
                    arr_25 [i_3] [i_5] = (arr_17 [7] [i_4] [i_4]);
                    var_20 = 11;
                }
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_21 = ((-(arr_23 [i_3] [i_3] [i_3] [i_3])));
            var_22 = max((arr_21 [i_3] [i_3] [i_8] [i_8] [i_3]), (arr_3 [i_8] [i_3] [i_3]));
        }
    }
    var_23 = (((((~-1069999377) ? var_6 : var_2))) ? ((((max(var_2, 4294967285))) ? ((var_4 ? var_12 : 13599)) : (~var_6))) : var_8);
    #pragma endscop
}
