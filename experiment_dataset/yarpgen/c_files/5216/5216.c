/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_2] = (!-1216812875);
                        arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] = (var_13 ? var_11 : ((-(var_16 ^ 268381864))));
                    }
                }
            }
        }
        arr_11 [i_0] = (((arr_4 [i_0] [10] [i_0]) ? (!268381864) : ((((max(var_14, 1))) ? (arr_5 [i_0] [i_0] [i_0]) : ((var_1 ? 268381882 : var_16))))));
    }
    var_18 = 107;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_14 [i_4] = ((var_3 ? var_2 : 13866037958703994247));
        arr_15 [i_4] = (arr_1 [i_4 + 2]);
        arr_16 [8] [1] |= (((arr_12 [i_4 + 2]) ? var_7 : var_12));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_28 [i_5] [i_7] [i_5] [i_6] [i_8 + 1] = var_10;
                            arr_29 [10] [i_6] [i_8 + 2] [i_5] [i_7] = var_7;
                        }
                    }
                }
            }
            arr_30 [i_5] = var_5;
        }
        for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_35 [i_5] [i_10] = (((-5392951007016789219 ? var_1 : var_15)));
            arr_36 [i_5] [i_10] [i_10 - 1] = 268381858;
            arr_37 [i_5] [i_5] [i_5] = var_9;
        }
        arr_38 [12] = (((((~(arr_26 [i_5] [i_5] [10] [10] [10])))) ? (arr_26 [4] [4] [i_5] [i_5] [4]) : var_11));
    }
    #pragma endscop
}
