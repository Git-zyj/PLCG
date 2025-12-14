/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = 0;
                                arr_13 [i_0] [i_3] = ((arr_10 [i_3] [i_3] [i_3] [i_3 + 1]) ? (arr_10 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2]) : (arr_10 [i_3] [i_3] [i_3] [i_3 - 1]));
                                arr_14 [i_3] = -0;
                                var_17 = ((arr_9 [i_4 + 3] [i_1] [i_2] [i_3 + 2] [i_3]) / 1);
                            }
                        }
                    }
                    arr_15 [i_2] [2] [i_0] = ((min((arr_9 [i_0] [i_0] [i_1] [i_1] [i_2]), (((!(arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    arr_16 [i_0] [i_0] [i_1] [5] = (11 & 26777);
                }
            }
        }
    }
    var_18 = ((-var_15 ? (-19991 != var_6) : var_11));
    var_19 += var_6;
    #pragma endscop
}
