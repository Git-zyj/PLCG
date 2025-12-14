/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_1 - 1] [i_0] = (((((arr_5 [i_1 + 1] [i_1] [i_1 - 2]) && (arr_5 [i_1 + 1] [i_1] [i_1 - 2]))) && (arr_6 [i_2] [i_1 + 2] [i_2])));
                    var_10 ^= (((!((32762 || (arr_2 [i_0]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (arr_5 [i_3] [i_3] [i_3 + 1]);
        arr_12 [i_3] [i_3] = (arr_2 [i_3 + 1]);

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_17 [4] [i_3] [4] = -var_4;
            arr_18 [0] [i_3] [i_4] = (arr_0 [i_4]);

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_26 [15] [15] [15] [i_3] [15] = (((arr_24 [i_3 + 3] [i_3] [i_3 + 2] [i_5 + 2]) ? 32765 : 41374));
                    arr_27 [i_3] [i_6] = (((~32762) && 1788408487));
                }
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    arr_30 [i_3] [i_4] [1] [14] = -1788408487;
                    arr_31 [i_3] = (~(arr_23 [i_3] [i_5 + 1] [i_3]));
                }
                var_11 = 3065506741849890861;
                var_12 = ((-(arr_13 [i_5 + 1] [i_5] [i_5 + 1])));
                arr_32 [i_3] [i_3] [i_4] [i_5] = (((arr_4 [0] [i_5 + 1] [i_5 - 1]) ? var_8 : (~-1788408475)));
            }
        }
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = (!1);
        arr_36 [i_8 - 1] = ((~(min((((arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1]) ? 32763 : 6210185794220314362)), ((((arr_1 [i_8]) ? var_8 : var_7)))))));
        var_13 = (arr_20 [14] [i_8 - 1] [i_8 + 3]);
    }
    var_14 = (min((min(742196267, 9956136976125421779), (var_2 && var_2))));
    var_15 = ((-(((var_1 / var_7) / 11680147574792584114))));
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    var_16 = ((min(-32763, (arr_34 [i_9 - 1]))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_17 = ((((((arr_4 [i_9 - 3] [1] [i_9 - 3]) ? (arr_9 [i_9 - 1]) : ((((arr_13 [i_9 - 2] [i_10] [i_9 - 2]) && var_4)))))) && ((min((min((arr_23 [i_11] [i_11] [i_12]), 1788408473)), (arr_47 [i_12 + 1] [i_12 + 1] [i_12 + 4] [9] [9] [i_9]))))));
                                var_18 = ((!((min(((min((arr_13 [i_10 + 1] [i_12] [i_13 - 1]), (arr_10 [i_11])))), (arr_41 [i_10]))))));
                                var_19 = 1458941500;
                            }
                        }
                    }
                    arr_50 [i_11] [i_11] [i_9] = (max((arr_10 [i_11]), (((!(arr_10 [i_11]))))));
                }
            }
        }
    }
    #pragma endscop
}
