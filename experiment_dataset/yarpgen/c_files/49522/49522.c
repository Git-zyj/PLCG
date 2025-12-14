/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 *= (arr_2 [i_0]);
                arr_6 [i_1] = (arr_2 [i_1 + 1]);
                arr_7 [i_1] = ((!(((~(((arr_0 [i_1 + 1] [i_1]) ? var_15 : (arr_1 [i_1 + 2]))))))));
                arr_8 [i_1] [i_0] [i_0] = (((114 < 609353832) < (((!(((-15295 ? 1 : var_9))))))));
                arr_9 [i_0] [i_1] = (arr_0 [i_1 - 1] [i_1 - 1]);
            }
        }
    }
    var_19 = (15277 < var_1);
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = 15277;
                                arr_21 [i_2] [i_4] = var_16;
                                arr_22 [i_2] [i_3 + 1] [8] [i_4] = ((!(((47741 ? 150 : -123)))));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] = (((((((2 ? (arr_5 [i_2]) : 53947)) < (2 & var_2)))) < 15737));
                                var_21 = (((((0 < (max((arr_0 [i_5] [i_3 - 1]), 9097067699243217536))))) < ((min((arr_18 [i_3 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [10]), 32040)))));
                            }
                        }
                    }
                    arr_24 [i_4] [i_3 - 1] [i_3] [i_4] = ((((arr_1 [i_3 + 1]) < var_5)));
                    var_22 = ((((((!(arr_17 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_3 - 1]))))) < (arr_17 [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 1])));
                    arr_25 [i_3] [i_4] [i_3 - 2] [i_3] = 63;
                }
            }
        }
    }
    #pragma endscop
}
