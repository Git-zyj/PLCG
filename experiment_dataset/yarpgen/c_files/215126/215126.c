/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [10] [i_1] [10] [i_3] [i_4] [i_2] [i_2] = -var_0;
                                arr_18 [i_3] [12] [i_0] [i_1] [i_1] [10] [1] = (arr_1 [i_0]);
                                arr_19 [14] [i_2] [i_3] [14] [14] [i_2] [i_0] = ((!(((((max(1792, var_1))) ? var_4 : 1)))));
                            }
                        }
                    }
                    arr_20 [i_2] [7] [i_2] = ((var_9 < (((arr_10 [i_0] [i_1] [1] [6]) ? var_1 : (arr_10 [i_0] [i_0] [i_0] [10])))));
                    arr_21 [i_1] [5] &= max((max(18446744073709551615, 1024)), 1);
                }
            }
        }
    }
    var_10 = -1;
    var_11 = (var_4 < var_8);
    var_12 = var_4;
    #pragma endscop
}
