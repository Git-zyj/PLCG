/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, var_5));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 &= ((~(arr_3 [16])));
            arr_4 [i_0] [i_1] [i_1] = ((!(arr_2 [i_1])));
        }
        arr_5 [i_0] = (arr_3 [1]);
        var_15 = ((var_4 ? (((arr_3 [24]) ? var_3 : (arr_3 [24]))) : (arr_3 [20])));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = max((arr_0 [i_2 - 1]), (min((arr_0 [i_2 - 2]), (arr_0 [i_2 - 2]))));
        var_16 = min(((max((arr_3 [1]), (arr_3 [1])))), (arr_1 [i_2]));
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_17 ^= (arr_1 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_16 [i_4] = (min((arr_3 [i_4]), (~var_4)));
                    var_18 = arr_1 [i_4];
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_19 *= (arr_6 [i_6 - 2] [i_6]);
        var_20 &= (min((arr_1 [i_6]), (arr_2 [14])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_21 = ((~((~(arr_18 [i_7])))));
                    arr_24 [i_6 - 2] [i_8] [i_6] = arr_15 [i_6 - 1] [i_7] [i_7];
                    arr_25 [i_6] = arr_14 [i_6] [i_6] [i_6] [i_7];
                    arr_26 [1] [i_7] [i_6] = (max((min((arr_7 [i_6 + 1] [i_8 - 1]), (((arr_19 [i_6]) ? (arr_12 [i_6] [20] [i_6]) : var_11)))), (arr_15 [i_7] [i_7] [23])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_22 = (max(var_22, (((((min((arr_1 [i_11]), (arr_30 [i_6] [i_6] [i_6] [i_6])))) ? (((min((arr_30 [i_11] [7] [i_6] [i_6]), (arr_6 [i_6 - 3] [i_10]))))) : (arr_1 [i_10]))))));
                        arr_35 [i_6] [i_10] [i_9] [i_6] = (arr_20 [i_6]);
                        arr_36 [i_6] [i_9] [i_9] [i_10] [i_6] = (max((arr_6 [i_10] [1]), ((var_4 ? var_6 : var_3))));
                        arr_37 [i_6] [i_6] [i_9] [i_11] = var_2;
                    }
                }
            }
        }
    }
    #pragma endscop
}
