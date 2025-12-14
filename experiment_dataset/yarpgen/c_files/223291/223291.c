/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 7;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] &= var_6;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 |= ((min(120, (arr_8 [i_1 + 1] [0] [i_1 + 1] [i_2 - 4]))));
                        var_14 = (var_0 ? (~1) : ((~(arr_7 [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 - 4] [i_2 - 4]))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_15 = (((!(min(0, var_6)))) || 3992839399);
                                var_16 = (min(var_16, ((max((((arr_12 [i_1 + 1] [i_4] [i_5]) | var_11)), var_8)))));
                                var_17 = ((arr_13 [8] [i_1] [i_2 - 2] [i_4] [i_1 - 1]) < 3343428596);
                                arr_15 [6] = ((arr_11 [i_0] [i_1 + 1]) <= (!var_5));
                                var_18 = 12724;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_2] [i_2] [i_1 + 1] [i_0] = var_9;
                                arr_23 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((1 ? (min((max(var_8, 951538699)), (arr_20 [i_0] [i_1] [i_2] [i_2 - 2] [i_0] [i_2 - 4]))) : var_9));
                                arr_24 [i_0] [i_1] [i_2 + 1] [i_6] [i_1] = ((((max(0, (((!(arr_21 [i_0] [i_1] [i_0]))))))) ? (((var_10 & var_8) | (arr_10 [i_1 + 1] [1] [1] [i_2] [i_2 + 2] [i_7]))) : 13060836328275863476));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [1] [i_0] &= (((((max(var_11, var_4)))) ? (((var_4 ? (arr_25 [i_1 + 1] [2] [i_2] [i_2 + 1] [i_1 + 1] [i_0]) : 1))) : (((var_9 ? 1 : var_0)))));
                                var_19 = (arr_12 [i_0] [i_1 - 2] [i_2 + 2]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_20 = ((1 ? (((max(32767, 65408)))) : (((((arr_26 [i_0] [i_1] [i_10] [i_11] [i_12]) & var_12))))));
                                var_21 = (max(var_21, (((((max((((var_9 ? var_11 : 23654))), -302127897))) ? (arr_27 [i_1 - 2] [i_1 - 2] [i_11] [i_12]) : -845324164)))));
                                var_22 = ((((var_7 < ((var_2 % (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (!48091) : ((((min(3777530987, (arr_8 [i_0] [i_0] [i_0] [i_0]))) >= (5385907745433688140 <= var_9))))));
                            }
                        }
                    }
                }
                arr_41 [i_0] [i_1 - 1] [i_0] = (max(((max(1, var_7))), (((!((((arr_14 [i_1]) ? 104 : var_5))))))));
            }
        }
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_45 [i_13] = 1;
        arr_46 [4] = (((!(1 >= -12724))));
    }
    #pragma endscop
}
