/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((9223372036854775807 ? 34496 : ((min(7, 31040)))));
                var_14 = (min(var_14, (((217 ? 0 : 37388)))));
                arr_7 [i_0] [i_0] = var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_15 = (max(((max(var_10, var_11))), (max((arr_5 [i_3]), var_4))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_16 [1] [i_4] = var_7;
                    arr_17 [i_2] &= var_11;
                    arr_18 [i_2] [i_3] [10] [14] = (((arr_13 [i_2 - 2] [i_2 - 2]) ? (arr_6 [i_4] [i_2 - 2]) : var_6));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_22 [i_2] [i_2] [i_5] = (arr_13 [i_2] [i_2]);
                    arr_23 [i_3] [i_3] [i_5] [i_2] = var_6;
                    var_16 = var_5;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_17 = ((var_4 ? (arr_24 [i_6]) : (arr_24 [i_2])));

                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        arr_29 [i_2] [i_7] [i_6] [1] = arr_11 [i_2 - 2] [i_2 - 2];
                        var_18 = var_0;
                        var_19 = (min(var_19, ((((arr_4 [i_2 - 1]) ? (((arr_12 [i_2]) ? (arr_15 [i_2] [4]) : var_6)) : var_4)))));
                        var_20 = var_9;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_21 = var_0;
                        var_22 = var_8;
                        arr_33 [i_8 + 2] [i_8] [i_6] [i_3] [i_2] = ((arr_25 [i_8 + 2] [i_2 + 1] [i_2 - 1] [3]) ? var_2 : var_2);
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_9] [i_3] [i_3] [i_3] [i_9] [i_3] = ((arr_34 [i_2] [i_3] [i_2] [i_6] [i_9 + 2] [i_9]) ? var_10 : (arr_2 [i_9] [12]));
                        var_23 = ((119606349 ? (arr_35 [i_9] [i_9] [i_6] [i_9] [i_9]) : ((-124 ? (arr_10 [i_2]) : 4294967295))));
                    }
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        arr_40 [i_2] = var_7;
                        arr_41 [i_2] [i_2] = (arr_5 [i_10]);
                        arr_42 [i_2 - 1] [i_2 - 1] [i_6] [i_10] = (((((var_11 ? var_6 : (arr_24 [i_2])))) ? (arr_27 [i_10] [i_2 - 1] [i_2] [i_10] [i_10 - 3]) : var_7));
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_24 = (max((min((min(var_5, (arr_8 [i_2] [4]))), (max(var_9, var_11)))), (((var_7 ? ((max(120, -126))) : (arr_30 [i_2 - 1] [i_3] [i_11] [0] [i_12]))))));
                            var_25 = (min(var_25, ((max(2097151, 32755)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
