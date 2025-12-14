/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((min(((((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 2]) + (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 2])))), (arr_2 [i_0 + 1]))))));
                    arr_8 [i_0] [i_2] [i_2 + 1] [i_1] = 117;
                    arr_9 [i_0] [i_0] [i_2] [i_0 - 2] = (((min((arr_7 [i_0] [20] [i_2 + 2] [i_0 - 2]), (arr_0 [i_2] [i_2 - 1]))) | (arr_0 [i_0 - 3] [7])));
                }
            }
        }
    }
    var_16 = (~var_13);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_4] [i_3] [i_6] [i_4] = (!((((arr_15 [i_3] [i_4]) / (arr_13 [i_4])))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = (max((max((max((arr_20 [i_3] [i_4] [i_3] [i_3]), var_2)), (arr_10 [i_7]))), ((min(141, 1)))));
                            }
                        }
                    }
                }
                var_17 = (min((arr_6 [i_3] [i_3] [i_3] [i_3]), (129 / 11848113955727196302)));
                var_18 = ((min(1, (arr_1 [i_3]))));
                arr_24 [i_4] [i_4] = 8787357022588229173;

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_19 += ((-(min(((-1 ? 134 : 18446744073709551612)), -33))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_34 [i_3] [i_4] [i_4] [i_3] [i_10] [i_9] [i_10] = ((((arr_31 [i_3] [i_3] [i_8] [i_9] [i_10] [i_3] [i_8]) / (arr_31 [i_3] [i_3] [i_8] [i_9] [i_10] [i_9] [i_9]))));
                                var_20 = ((((((min((arr_3 [i_3] [i_4] [i_10]), (arr_26 [i_3] [i_3] [i_4] [i_9]))))) + (4 + 57153))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_21 = ((((((arr_29 [i_3] [i_4] [i_8] [i_11] [12] [i_4]) ? (max((arr_14 [i_4] [i_11] [i_12]), var_4)) : (arr_10 [i_11])))) ? 8191 : (min(4523539514054273811, (max(18446744073709551605, 624315402481039038))))));
                                arr_39 [i_3] [i_4] [i_3] [i_11] [i_12] = ((((!((min(8367, 10))))) ? 3454646835774655414 : (1627 + 923461606)));
                                var_22 = arr_31 [i_3] [i_3] [i_4] [i_4] [i_8] [i_11] [13];
                            }
                        }
                    }
                    arr_40 [i_8] [i_4] [i_3] = (arr_32 [i_4]);
                    arr_41 [i_4] [i_4] = (((((max((arr_25 [i_8] [i_4] [i_3]), 20)) + (!var_11))) + (arr_4 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
