/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((!((max((~1), var_0)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((!((max((max((arr_0 [i_0] [i_0]), var_9)), (arr_0 [i_0] [11]))))));
        arr_3 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = ((~(arr_5 [i_1])));
        arr_6 [i_1] = ((1 - (1 / var_1)));
        var_14 = (arr_1 [7]);
        arr_7 [1] [i_1] = ((((+((max((arr_4 [i_1]), (arr_4 [i_1])))))) - 11960));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((((((arr_1 [3]) ? 1534147458748932468 : 242))) ? (((-(arr_1 [i_2])))) : (arr_8 [i_2] [0]))) > 29704));
        var_15 = -1;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 ^= ((~((((var_9 * (arr_11 [i_5] [0]))) & (16912596614960619153 >= 1534147458748932477)))));
                        arr_18 [i_2] [i_3] [i_4] [i_5] = var_0;
                        arr_19 [i_2] [i_4] = (var_0 * var_2);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    arr_25 [i_2] [i_2] [15] = ((((var_7 | ((min(var_9, (arr_15 [i_2])))))) / (arr_13 [i_2] [i_2] [i_2] [10])));
                    arr_26 [i_2] [i_2] = (arr_11 [6] [i_6]);
                }
            }
        }
    }
    var_17 &= (((min((!16912596614960619153), ((var_9 ? var_1 : var_7)))) == (((((min(-116, var_8))) && (((var_9 ? var_6 : var_10))))))));
    var_18 ^= ((var_7 ^ (~var_1)));
    #pragma endscop
}
