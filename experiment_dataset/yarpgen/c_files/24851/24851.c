/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((!((max((((arr_7 [5] [4] [8]) ? var_9 : 0)), (((var_6 ? -122 : var_12))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [0] [0] [i_1] [i_2] = 2013265920;
                                var_21 = (((arr_1 [i_4 + 1]) ? ((((arr_1 [i_4 + 2]) > (arr_1 [i_2])))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
                                arr_15 [7] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = arr_11 [10] [i_3] [1] [i_3] [11] [i_3];
                            }
                        }
                    }
                    arr_16 [i_0] [0] [i_2] [i_1] |= (arr_2 [i_0]);
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_0] = (arr_11 [6] [i_0] [i_0] [i_0] [6] [10]);
            arr_20 [i_0] [i_0] [3] = (arr_10 [i_0] [1] [6] [6] [i_0]);
            arr_21 [11] [1] = (-(arr_1 [i_5]));
        }
    }
    var_22 = 8128;
    #pragma endscop
}
