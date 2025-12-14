/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_17;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [1] [i_2 + 2] [2] [i_1] = ((!(var_8 >= 1386986925)));
                        arr_11 [i_0] [i_3] [i_0] [i_0] = (((((var_9 ? var_16 : var_17)) % (min(1128798962, var_10)))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_0] = (min((~var_10), (((~-18) ? 14700 : ((var_0 ? var_0 : (arr_1 [i_4])))))));
            arr_16 [i_0] [i_0] [i_0] = (max(var_18, ((max(1014910063, (arr_12 [i_0]))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_0] |= ((4186652687110327615 ? (((!(arr_18 [i_0] [i_5] [i_5])))) : (arr_1 [i_5])));
            arr_20 [i_0] [i_5] = -32346;
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            arr_30 [i_8] [i_8] [i_8] [12] [i_8] [i_8] = (min((arr_4 [i_0] [i_5]), var_11));
                            arr_31 [i_0] [11] [i_6] [12] [i_7] = var_16;
                        }
                        for (int i_9 = 4; i_9 < 11;i_9 += 1)
                        {
                            arr_34 [i_9] [10] [i_6] [0] [i_0] = min(((var_9 ? (arr_28 [i_7] [i_6 - 4] [i_6 - 4]) : (arr_26 [i_5] [i_6] [i_6] [3]))), ((~(arr_26 [6] [i_6 - 1] [i_7] [2]))));
                            arr_35 [i_0] [2] [i_0] [i_0] [i_0] = arr_23 [i_0] [11] [i_6 - 2] [i_7];
                            arr_36 [i_9] [i_9] [i_5] [i_7] [i_9] [i_5] = (((((~(arr_23 [i_5] [5] [i_6 + 2] [i_6 - 1])))) ? 32347 : (((arr_8 [i_0] [i_6 + 3] [i_5] [1]) | (arr_9 [i_0] [2] [8])))));
                        }
                        arr_37 [i_0] [i_5] [i_6 + 1] [i_6] [i_7] = min(((min((arr_6 [i_0] [i_6 + 1] [i_6] [i_6 - 1]), (arr_6 [i_5] [10] [i_5] [i_6 + 1])))), (~var_1));
                        arr_38 [i_6 - 1] [i_5] [11] [i_7] = var_4;
                    }
                }
            }
            arr_39 [i_5] [i_5] [i_0] = ((min(14410464367720070070, ((max(var_12, var_14))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                {
                    arr_45 [i_0] [i_10] [9] [i_0] = (((!-321101465098044203) * (max(var_1, (max(7327702177056109944, var_9))))));
                    arr_46 [i_10] [i_10] [4] = (max((max((((328252132454766088 ? 576177497 : 511405197))), 11119041896653441671)), ((~(max(7327702177056109944, var_5))))));
                    arr_47 [i_10] = max(((max(50625, (arr_28 [i_11 - 1] [i_10] [i_10 + 1])))), ((((max((arr_26 [i_10] [i_11 + 2] [i_11] [i_11]), 11119041896653441671))) ? 9212887898712099212 : ((var_13 ? (arr_0 [i_0] [i_10 - 1]) : 18002)))));
                    arr_48 [i_0] [i_10] [i_10] = var_1;
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        arr_53 [i_12] = (arr_5 [i_12] [2]);
        arr_54 [4] = max(((min(50641, var_3))), (min(var_16, (arr_17 [i_12] [i_12]))));
    }
    var_20 = var_15;
    #pragma endscop
}
