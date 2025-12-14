/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] = -2199023255551;
                    arr_9 [i_1] = -2199023255551;
                    arr_10 [10] = var_2;
                }
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1 + 1] [i_3] [i_1] = (18446741874686296064 ^ 3850665982135786316);
                        arr_16 [i_1] [i_4] [i_4] [i_4] = (((arr_12 [i_3 + 2] [i_1] [i_4]) > (min((arr_14 [i_1] [i_3] [i_3] [i_1]), var_17))));
                        arr_17 [i_3] [i_3 + 2] [i_1] [i_3] = min((((~0) ? ((var_0 ? (arr_3 [i_0] [6]) : (arr_13 [i_1]))) : (~var_5))), var_17);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_20 [i_3] [i_1] = ((arr_0 [i_1]) ? 5145930139136469722 : var_14);
                        arr_21 [i_1] [i_1] = ((!18446744073709551615) + var_2);
                        arr_22 [16] [i_3] [i_1] [16] = 18446744073709551615;
                        arr_23 [20] [20] [i_3] [14] [i_3 + 3] [i_1] = var_12;
                    }
                    arr_24 [i_1] = ((!((!((min(var_0, var_13)))))));
                    arr_25 [i_0] [8] [i_0] = ((!(arr_1 [i_0] [i_0])));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_29 [i_1] = (((-(arr_1 [i_1 - 1] [i_1 - 1]))) & (~0));
                    arr_30 [i_1] = 214241032064866366;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_35 [i_0] [i_7] [i_1] = (+((+((var_2 ? (arr_31 [i_0] [i_1 + 1] [i_6] [i_7] [i_8]) : (arr_4 [20] [i_6] [i_0]))))));
                                arr_36 [i_0] [i_0] [i_0] [i_1] [5] = (((min(((~(arr_26 [i_7] [i_1] [i_1] [i_0]))), var_7))) ? ((~(min(0, var_6)))) : ((min(var_11, var_3))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_43 [i_0] [i_1] [i_6] [i_9] [2] = -2199023255551;
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = min((~18446744073709551615), var_14);
                                arr_45 [i_0] [i_1] [i_6] [i_9] [i_10] = var_10;
                            }
                        }
                    }
                }
                arr_46 [8] |= (~var_11);
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_54 [i_0] [i_1] [i_11] [i_1] [i_13] = min((((arr_41 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) | (arr_41 [i_13 + 2] [i_12] [i_11] [i_1 - 1] [i_0]))), (min((arr_41 [i_0] [i_1 - 1] [i_11] [i_12] [i_13]), var_17)));
                                arr_55 [i_0] [i_1] [i_11] [i_12] [i_11] = min(var_12, (arr_4 [i_1 - 1] [i_12] [i_13 + 2]));
                                arr_56 [i_1] [i_1] = (~(min((arr_31 [i_13 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            }
                        }
                    }
                }
                arr_57 [i_0] [i_0] [i_1] = (min((arr_12 [i_0] [i_1] [i_0]), (arr_12 [i_0] [i_1] [17])));
                arr_58 [14] [14] = min((min(4190117012830559206, (arr_53 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))), (min(var_9, 18446744073709551615)));
            }
        }
    }
    var_19 = (!0);
    var_20 = var_8;
    #pragma endscop
}
