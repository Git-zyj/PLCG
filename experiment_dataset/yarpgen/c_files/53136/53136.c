/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [2] [i_1] [i_2] = ((!(arr_2 [i_0] [i_1])));
                    var_14 = (min(var_14, -12));
                    arr_8 [i_2] [12] [i_2] = 6681;
                    arr_9 [i_0] [i_1 - 1] [i_2] = (arr_6 [14] [i_0 - 1] [i_0 - 1]);
                }
            }
        }
        arr_10 [i_0] [i_0] = (((arr_5 [6] [6] [i_0 - 1] [i_0 - 1]) | (arr_5 [6] [6] [i_0 - 1] [i_0 - 1])));

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_15 [i_3] = ((~(arr_1 [i_0 - 1] [i_3 + 4])));
            arr_16 [i_3 - 2] [1] [i_0] = (((arr_0 [i_3]) ? var_13 : 0));
            arr_17 [i_3] [i_3] = (((arr_14 [i_3]) / ((18487 ? 10572228378089376554 : 4356))));
            var_15 = (max(var_15, (arr_3 [i_3 + 1] [i_3])));
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_16 &= ((~(((0 >> (65535 - 65510))))));
        arr_22 [i_4] = 141;
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_25 [i_5] &= (arr_24 [i_5 - 1]);
        var_17 = (((arr_24 [i_5 - 1]) + ((min((arr_24 [i_5 - 1]), var_1)))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_18 = (min((arr_21 [0] [0]), (arr_3 [i_6] [i_6])));
        var_19 += ((((min(6, 3877966637317969539))) ? (min(var_6, (arr_2 [i_6] [i_6]))) : 1));
        arr_28 [i_6] = (((arr_27 [i_6]) + var_11));
    }
    var_20 = var_5;
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
