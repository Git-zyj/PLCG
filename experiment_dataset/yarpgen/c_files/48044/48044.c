/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [10] [i_2] [i_3] [i_2] [i_2] = (min((arr_0 [11]), (((arr_4 [1] [2] [i_1 - 1]) ? (arr_4 [i_0] [11] [i_1 + 1]) : (arr_4 [i_2] [14] [i_1 - 1])))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_15 = (min(var_15, (arr_14 [12] [i_1 - 1] [i_2] [12] [i_0])));
                            var_16 = (max((!86), (((arr_10 [i_3] [i_4] [i_3] [i_1 - 1] [i_1 - 1] [i_3]) != 2416065664))));
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_20 [i_3] [i_1] [i_2] [i_5 + 3] [i_1] = 1878901631;
                            arr_21 [i_2] [14] [12] [i_3] [i_5] [i_0] [i_2] |= (max((min((((var_14 || (arr_10 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0])))), (arr_4 [i_0] [i_5 + 2] [i_1 - 1]))), ((((arr_11 [i_0]) ? (arr_11 [i_3]) : var_13)))));
                            arr_22 [i_5 + 2] [i_3] [i_3] [i_2] [i_3] [i_0] = (((((arr_9 [i_5] [i_3] [12] [i_0]) < (arr_9 [i_1] [i_2] [i_3] [i_5]))) ? (arr_19 [i_5 - 1] [i_2] [0]) : (min((arr_18 [i_5] [i_5 + 3] [i_3] [i_1 + 1]), (((arr_16 [i_0] [i_1] [i_5]) & (arr_3 [i_0])))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_17 |= ((arr_3 [i_0]) - -48);
                        arr_25 [i_0] [i_1] [i_2] [i_6] |= ((~(-139806292 - 130048)));
                        arr_26 [i_1] = (((((~(((!(arr_15 [i_0] [i_0] [i_6]))))))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (((arr_10 [i_2] [i_1 + 1] [i_2] [i_6] [i_6] [i_6]) ? ((-(arr_7 [0] [i_1] [i_2] [i_6]))) : (((arr_5 [i_0] [i_0]) ? (arr_18 [i_6] [i_2] [i_1] [i_0]) : 5))))));
                        arr_27 [i_0] = (arr_6 [i_0] [i_1] [i_2] [i_6]);
                    }
                    arr_28 [0] [i_1 + 1] [14] = var_6;
                }
            }
        }
    }
    var_18 |= var_5;
    #pragma endscop
}
