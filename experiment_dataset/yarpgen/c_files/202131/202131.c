/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((var_5 > var_0) ? var_7 : ((((arr_4 [i_0] [18]) ? (var_8 && var_8) : (~var_2))))));
                    arr_11 [i_0] = ((var_0 ? var_4 : ((1531557024850620994 & (max(var_4, var_5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = (((((((max((arr_15 [i_0 + 2] [i_1 - 1] [i_2] [i_3] [i_1 + 3] [i_0] [i_3]), var_7))) ? (var_4 ^ var_8) : ((var_2 ? (arr_4 [i_1] [i_3]) : 71))))) - var_7));
                                arr_18 [i_2] [i_1] [12] [i_3] [i_4] = (min((((1 != var_9) ? (min(-2, var_4)) : (!1))), ((min(var_4, -32280)))));
                                arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_1] = ((max((arr_9 [i_0] [i_0]), var_5)));
                                arr_20 [i_3] [i_1 + 3] [i_0 - 3] [i_0] = (-1531557024850620994 < 2086265269598926579);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_26 [i_5] [i_6] [i_5] = ((((min((4118446907 & var_6), (var_10 != var_3)))) ? (var_9 == var_10) : ((var_7 ? (arr_14 [i_5]) : var_5))));
                arr_27 [i_5] [i_5] [i_6] = ((-(max((var_8 >= var_5), ((1 ? 3354950931 : (arr_5 [i_5] [i_5])))))));
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [i_5] [i_7] [7] [i_5] = min((((arr_28 [i_9] [i_7 + 3]) / (255 * 202))), ((((min(0, -7283864852406411002))) ? -2020 : var_6)));
                                arr_36 [i_5] [i_6] [i_8] [i_8 + 1] [i_9] = var_1;
                            }
                        }
                    }
                }
                arr_37 [i_5] [i_5] [i_6] = ((-9174325704505820587 ? 50 : 1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_52 [i_11] [i_14] [i_14] = ((((!(!1)))));
                                arr_53 [i_10] [i_10] [i_13] [i_13] [i_14] = (((((((max(var_7, var_9))) ? var_1 : (((var_5 ? 22056 : 8)))))) ? -56 : ((2146435072 ? 0 : -126))));
                                arr_54 [i_13] = ((((var_5 ? (var_3 == var_9) : (min(-4440915666273429293, 1))))) > ((var_4 ? var_5 : (~var_1))));
                            }
                        }
                    }
                }
                arr_55 [i_10] = ((((min((((var_2 ? var_4 : var_8))), (max(9, var_6))))) ? (max((0 + -1949555497), (min(var_7, 368)))) : ((max((((var_2 ? 1 : var_10))), ((var_5 ? -1 : 1)))))));
                arr_56 [i_10] [i_11 - 1] = (((min((arr_50 [0] [0] [i_11 - 1] [0] [i_11]), var_7))));
                arr_57 [i_11] &= (((((((((0 ? -7283864852406410989 : 19798))) || (arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1]))))) | ((((((arr_38 [i_11] [i_11 - 1]) ? var_3 : var_5))) ? (var_7 && var_3) : (max(var_7, var_2))))));
            }
        }
    }
    var_11 = var_1;
    #pragma endscop
}
