/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0 - 1] = (max(var_15, ((~(min(18784, -315687934))))));
                arr_7 [i_1] [i_0] = (((((max(var_9, 51)))) && ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_0)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_19 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (!55859);
                                arr_14 [i_0 - 1] [6] [16] [i_3] [i_4 - 1] [i_1] &= (((arr_12 [i_2 - 1] [i_4 - 1] [i_4] [i_4] [i_4]) | var_9));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] = (((arr_18 [i_0 - 1] [3] [i_2 + 1]) - ((((arr_10 [0] [1]) ? var_3 : -315687934)))));
                        var_21 = 9677;
                    }
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_22 = (~1);
                    var_23 = (max(var_23, (!var_0)));
                }
            }
        }
    }
    var_24 = var_1;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_25 = ((((min(var_9, (~509440317486729988)))) ? (max(1, (max(var_16, 35)))) : (((((var_14 ? var_0 : var_5))) ? 10255 : ((7 ? var_16 : var_1))))));
                                var_26 = ((((((1 <= (arr_31 [i_8] [i_8] [10] [i_8]))) || (arr_30 [i_7] [i_8] [i_9] [i_8]))) ? (((((arr_24 [i_7]) == 4493)))) : ((-(((arr_33 [i_7] [i_7] [i_9] [1]) ? var_0 : var_16))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_41 [i_7] [13] = arr_39 [i_7] [i_7] [i_7];
                                var_27 = (min(var_27, (arr_35 [i_13] [i_9] [i_9] [i_8] [i_7 + 1])));
                                arr_42 [12] [7] [21] [1] [i_7] [i_7] = (min(315687934, (((-(arr_26 [i_7]))))));
                                arr_43 [i_7] = ((var_3 > (min(((min(34, (arr_23 [i_7])))), ((9667 ? (arr_36 [21] [i_12] [i_9] [i_7]) : var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
