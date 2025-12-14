/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((!(((var_10 ? (min((arr_11 [i_0] [i_3] [i_2] [1] [i_3]), var_8)) : ((var_0 ? (arr_6 [i_0] [i_1]) : 0)))))));
                            arr_15 [i_3] [i_2 - 1] [i_3] = var_7;
                            arr_16 [i_0 - 2] [i_3] [i_0 - 2] [i_0] = ((((arr_11 [i_0] [i_3] [i_0 + 1] [i_2 - 1] [i_3]) ? (arr_9 [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_11 [i_0] [i_3] [i_1 - 2] [i_2 - 1] [i_2]))));
                            var_18 = (min(var_12, (((((var_5 - (arr_7 [i_3]))) != (arr_12 [i_1 - 3] [i_0 + 2] [i_0 + 2] [i_0 - 2]))))));
                            arr_17 [i_0] [i_3] [i_1 - 3] [i_3] [19] = (min((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (max((arr_14 [i_3]), var_2)) : (arr_6 [16] [15]))), (((((((arr_14 [i_3]) ? (arr_11 [i_3] [i_3] [i_1] [i_3] [8]) : var_0))) <= (min((arr_12 [i_0] [i_1] [i_2 - 1] [i_3]), 2147483647)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_25 [i_0 + 1] [i_1 - 4] [i_4] [i_5] [i_6] = (max(((min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [i_1])))), (((arr_11 [i_1 + 2] [i_5] [i_1] [11] [i_1]) ? var_8 : (arr_4 [i_1 - 4] [i_1])))));
                                var_19 = (max(var_19, (((var_8 >> (((max((42360 >= var_6), (arr_18 [i_5 - 1] [i_1 + 1] [i_0 + 1]))) - 751776024)))))));
                                var_20 = ((+(max((arr_11 [i_0 + 2] [i_5] [i_0 - 1] [i_0] [i_0 + 2]), (max((arr_14 [i_5]), var_2))))));
                                arr_26 [20] [i_1 + 2] [i_4] [i_4] [i_5] [i_5] [i_5] = ((-((((max(var_7, (-2147483647 - 1)))) ? ((-(arr_6 [i_0 + 1] [12]))) : ((-(arr_13 [i_6] [i_5 + 1] [i_4] [9] [6])))))));
                                var_21 = (min(var_21, ((max((!var_7), ((-var_7 > ((var_3 ? (arr_0 [i_0 + 1] [i_5]) : var_16)))))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (((-var_2 ? -1778985071 : (max((((arr_13 [i_0] [i_1 + 1] [8] [18] [i_1]) ? (arr_9 [3] [0] [i_0] [i_0 - 1]) : var_11)), (arr_14 [i_0]))))))));
            }
        }
    }
    var_23 = ((((var_5 ? (var_12 - var_10) : (!var_0))) == (!var_8)));
    #pragma endscop
}
