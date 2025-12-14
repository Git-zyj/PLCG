/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] = ((7 >= (((var_6 >= var_4) ? ((-6749396045500225463 ? var_3 : var_4)) : (((((arr_6 [i_0] [i_0] [i_0]) >= var_1))))))));
                        arr_11 [i_1] [i_3 + 1] = (((max((arr_1 [i_1 - 1]), (arr_2 [i_1 + 1]))) * ((((var_16 || (arr_3 [13])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_17 [3] [i_4] [i_2] [i_4] [i_1] = (arr_12 [i_0] [i_0] [i_0] [i_5]);
                                arr_18 [i_5] [i_1] [i_4] [8] [i_1 + 2] [i_1] [i_0] = (7 - 0);
                            }
                        }
                    }
                    arr_19 [i_1] [i_2] [i_1] [i_1] = var_15;
                }
            }
        }
    }
    var_17 = (((((((max(var_1, var_13))) ? 3719912312204637610 : var_10))) ? (var_10 - var_5) : var_7));
    #pragma endscop
}
