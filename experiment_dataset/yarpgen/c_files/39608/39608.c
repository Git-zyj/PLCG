/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [4] &= (arr_1 [0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] = 15;
                            arr_12 [i_0 - 2] [i_0] = (((!1380402527) - ((((2781400286 >> 0) == (arr_10 [i_1 + 1] [i_1 + 2]))))));
                            arr_13 [i_0] [i_0] [i_3] [0] = ((((((((arr_0 [i_0 + 2] [i_3]) >= 157)) ? ((((arr_4 [13] [i_1 - 1]) & (arr_6 [i_0] [i_2])))) : 143450260808230755))) && ((min(var_3, (max(157, (arr_1 [i_3]))))))));
                            arr_14 [i_0 - 3] [i_0 - 3] [i_0] [3] = (((((arr_9 [i_1 + 2]) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 + 1]))) + ((max((arr_9 [i_1 - 1]), (arr_9 [i_1 + 2]))))));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_18 [i_0] [11] [i_2] [11] = (((arr_8 [i_0] [i_2]) + (((~(arr_10 [i_0] [22]))))));
                                arr_19 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_3] = (arr_4 [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_23 [i_5] = (((!(arr_20 [7]))));
        arr_24 [i_5] = ((((min((arr_3 [i_5]), (arr_2 [i_5] [i_5]))) / (arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
    }
    var_13 = var_3;
    #pragma endscop
}
