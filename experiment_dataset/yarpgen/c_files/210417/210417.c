/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (max((1050979399 < 1896496639388593242), -21724));
    var_14 = ((-(1 == var_6)));
    var_15 = (max(var_15, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [3] [i_2] &= (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 -= ((!((!(arr_13 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_3 - 1])))));
                                arr_14 [i_1] [12] [8] [i_1] = -2088;
                                arr_15 [1] [i_4] [i_4] [i_4] [i_4] = var_11;
                            }
                        }
                    }
                    var_17 += ((((((arr_5 [6] [i_2]) - var_9)))) | var_10);
                }
            }
        }
    }
    #pragma endscop
}
