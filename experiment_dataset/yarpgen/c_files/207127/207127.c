/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min((min(var_0, var_3)), var_9))) ? var_4 : (((var_0 / var_7) * (var_0 / var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = (arr_2 [i_0] [i_1]);
                    arr_8 [10] [i_0] [i_0] [i_0] = ((((((arr_4 [i_2]) << (((arr_2 [i_0] [10]) + 5876522930382836990))))) ^ (((arr_6 [i_2] [i_0] [i_2] [1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    var_13 = (((((arr_0 [i_0]) + (arr_5 [i_2] [12] [7] [i_0]))) < (((((arr_0 [i_0]) <= (arr_0 [i_0])))))));
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_5] [i_0] [i_4] [i_4] [i_0] = ((((-(((arr_12 [i_5] [i_4] [1] [i_1] [6]) * (arr_3 [3] [i_5]))))) <= (arr_15 [i_4] [8] [i_4] [i_0] [0])));
                                var_14 = ((((((~(arr_11 [1] [i_3] [i_3]))) | (~99))) ^ (((((arr_10 [i_0]) | (arr_9 [9] [i_0] [i_0]))) & (((arr_1 [i_5]) | (arr_16 [i_0] [12] [i_3] [i_0] [i_5])))))));
                                var_15 = (arr_0 [i_0]);
                            }
                        }
                    }
                    var_16 = (((arr_12 [i_0] [i_3 + 1] [0] [i_3] [i_3]) - (((((min((arr_0 [i_0]), (arr_11 [i_0] [i_1] [i_3]))) == (((-(arr_13 [i_0] [i_0] [i_3]))))))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_25 [i_6] [i_0] [i_7] [i_7] [i_1] = (min((((arr_19 [i_7] [i_0] [i_1]) / ((((arr_2 [i_0] [i_6]) != (arr_10 [i_0])))))), (((((((arr_21 [i_0] [i_1] [i_6] [i_7]) ? (arr_9 [8] [i_0] [i_6]) : (arr_16 [i_0] [i_6] [i_6] [i_0] [i_6])))) || ((min((arr_10 [i_0]), (arr_2 [i_6] [11])))))))));
                            arr_26 [i_0] = min((163 && 3516494707683096337), (max((arr_16 [i_0] [12] [0] [i_0] [8]), (((arr_1 [i_6]) & (arr_11 [i_6] [i_6] [i_6]))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((-var_0 == (((((var_1 ? var_8 : var_4))) * (min(var_8, var_6))))));
    #pragma endscop
}
