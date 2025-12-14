/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (min((max(65531, 17)), (!17)))));
                            arr_10 [i_0] [2] [i_0] [10] [i_0] [i_0] = (arr_2 [3]);
                            var_21 = (((arr_2 [i_3]) ? ((~(~1))) : ((-(arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))));
                            var_22 = ((~((((min((arr_9 [i_0]), (arr_9 [i_3])))) ? ((max((arr_8 [4] [12]), (arr_6 [i_3] [i_2] [i_1] [i_0])))) : (max(var_8, var_14))))));
                        }
                    }
                }
                var_23 = (min(var_23, ((max(var_12, ((((((arr_9 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_1]) : var_18))) ? (max(var_4, (arr_7 [i_0] [i_1]))) : (((var_14 ? var_5 : (arr_5 [i_0] [i_0 - 2] [i_0] [0])))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_24 = (((((var_9 ? (arr_13 [i_4] [i_5]) : var_18))) ? (((arr_16 [i_4] [i_4] [i_6]) - (arr_16 [i_4] [i_5] [i_6]))) : (arr_13 [i_4] [i_5])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_25 = (min(((((max(var_5, var_7))) ? (arr_15 [i_7]) : (max(var_17, (arr_19 [i_7] [i_7] [i_7] [7] [i_7] [1]))))), ((((arr_25 [i_4] [i_5] [i_6] [i_7]) ? (arr_25 [i_8] [11] [i_6] [i_7]) : (arr_25 [i_4] [i_4] [i_7] [i_8]))))));
                                arr_26 [i_5] [11] [i_7] [12] = (((((((((arr_6 [12] [i_6] [i_5] [i_4]) ? (arr_17 [i_5]) : (arr_13 [i_5] [i_4])))) ? (65508 > 18446744073709551597) : -var_2))) ? -136957427 : (min((arr_9 [i_7]), (arr_25 [1] [i_4] [i_4] [i_4])))));
                                var_26 = ((~(min(var_16, (arr_23 [i_4] [i_6] [i_6] [i_7] [i_8])))));
                                arr_27 [i_4] [i_4] [i_5] [i_6] [i_6] [5] [i_8] = (max(((~(arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((!((max((arr_17 [i_6]), (arr_25 [i_4] [i_5] [i_6] [i_8])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
