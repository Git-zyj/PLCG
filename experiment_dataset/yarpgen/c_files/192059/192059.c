/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((max(-22704, 22472)))) / var_13));
    var_16 = (((var_3 ? ((4294967295 ? 22189 : var_6)) : -22712)) | ((((var_7 ? 51850 : var_2)) << (max(1, -5357891746764721903)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (arr_0 [i_0] [i_2]);
                                var_18 = var_2;
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_14 [i_5] [18] = (((arr_9 [i_1] [i_1] [20] [i_1 + 2] [i_1 - 1] [i_0]) ? (min(var_10, var_4)) : ((((arr_9 [1] [20] [i_5] [i_5 + 1] [8] [i_5 + 2]) ^ (arr_9 [i_0] [i_0] [5] [i_0 + 3] [i_1 - 3] [i_1]))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_19 += (-22707 && var_7);
                        var_20 |= (~1);
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_21 = (~((((max(45158, var_7))) ? (!51846) : ((((arr_12 [i_1] [i_1] [10] [i_7]) != (arr_12 [0] [i_1] [i_1] [i_1])))))));
                        arr_20 [i_5] = 0;
                        arr_21 [i_0 + 2] [i_0] [i_0] [i_5] = (arr_15 [9] [i_1 - 2] [14] [i_7]);
                        var_22 = (min(var_22, ((((((~(((arr_13 [i_0] [i_0] [i_5 + 2] [i_7]) ? (arr_18 [1] [1] [10] [i_0]) : var_4))))) || ((min((arr_17 [i_0] [i_7] [8] [i_0] [i_0]), (arr_12 [9] [i_1] [i_5] [i_7])))))))));
                    }
                    var_23 = (min(((min((~22487), 52295))), (arr_19 [i_0] [i_5] [6] [7])));
                    arr_22 [i_0] [i_0] [i_5] = 52295;
                    arr_23 [i_0] [i_5] [i_0] [i_5] = (min(var_2, (min((~var_5), 0))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_24 = ((((var_13 ? var_6 : (arr_19 [i_0] [i_0] [i_1] [i_8]))) >> (-5357891746764721903 + 5357891746764721954)));
                    var_25 = var_13;
                    var_26 = (max(var_26, ((((arr_7 [i_0 - 1] [i_1 - 2]) ? var_14 : (((var_0 ? var_1 : var_13))))))));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_29 [6] [i_9] [i_9] [i_0 + 1] = ((-(((((var_6 ? (arr_24 [i_0] [i_1 + 3] [i_9]) : (arr_3 [20])))) ? ((((arr_13 [i_0] [i_9] [3] [3]) << (var_8 - 4024)))) : (max(var_7, var_13))))));
                    var_27 = var_12;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_28 = (max((max(var_12, (((arr_0 [i_0 - 2] [i_1]) ? var_0 : var_8)))), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                                var_29 += (min(3979518474, 51841));
                            }
                        }
                    }
                    var_30 = (max(4233992501, (((max(var_13, var_5))))));
                    var_31 = var_14;
                }
                var_32 = (min(var_32, ((max((arr_5 [i_1 + 2] [i_0 + 3] [i_0 - 2]), (min(var_14, (arr_5 [i_1 + 2] [i_0 + 3] [i_0 - 2]))))))));
                arr_36 [i_1] = (min((((63 > (max(var_5, 1130176686))))), var_13));
            }
        }
    }
    #pragma endscop
}
