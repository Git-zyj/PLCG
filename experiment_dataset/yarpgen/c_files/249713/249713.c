/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((var_10 >= (arr_2 [2] [14]))) ? var_17 : ((max(var_9, (arr_5 [0] [i_0]))))))) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])));
                var_18 = (min(var_18, (((!(((((max(var_15, (arr_3 [2])))) ? (max((arr_5 [i_0] [i_0]), (arr_3 [i_0]))) : (arr_4 [i_0])))))))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((max((((var_14 ? var_8 : var_2))), (max(var_17, (arr_7 [12] [i_1] [i_1])))))) ? ((((max((arr_1 [i_3]), (arr_5 [i_0] [i_0])))) ? (((max(var_7, var_15)))) : (max(var_11, (arr_9 [7] [i_0] [i_2 - 2] [i_3 - 2]))))) : (arr_9 [i_0] [i_1] [i_3] [i_4]))))));
                                arr_14 [i_1] [i_1] [i_1] [i_1] [14] = (max((((!((((arr_2 [i_3] [i_0]) ? (arr_7 [i_4] [i_4] [15]) : var_0)))))), (((var_7 > var_11) ? (arr_7 [i_3 + 1] [i_2 - 2] [i_2 - 2]) : ((max(var_5, (arr_3 [5]))))))));
                            }
                        }
                    }
                    var_20 = (arr_8 [5] [5] [12]);
                    arr_15 [i_1] [1] [12] |= ((((((max(var_12, var_2)) % (arr_2 [i_0] [i_0])))) ? (((269202082 ? 1392341836 : 0))) : (((((max((arr_4 [i_1]), (arr_0 [i_2 + 1]))))) * (((arr_2 [i_1] [i_2 - 1]) ? (arr_8 [i_0] [i_0] [1]) : var_12))))));
                    var_21 = (max((((arr_3 [i_2 - 2]) ? (arr_2 [i_2 - 1] [i_1]) : (arr_3 [i_2 - 1]))), ((max(var_7, (arr_3 [i_2 - 1]))))));
                }
                var_22 += (max((max(var_5, (max(var_1, (arr_4 [i_0]))))), (max(var_2, ((var_7 ? var_4 : (arr_2 [i_1] [i_0])))))));
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
