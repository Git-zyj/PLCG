/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = var_10;
                                arr_11 [i_0] [i_3 + 1] [0] [i_1] [i_0] [12] = arr_9 [15] [22] [i_2] [15] [i_0] [i_0] [17];
                                arr_12 [2] [i_3 - 1] [22] [i_0] [2] &= (arr_1 [1] [1]);
                                var_18 &= var_11;
                            }
                        }
                    }
                }
                var_19 = (19 ? var_6 : (arr_9 [i_1] [16] [i_1] [i_1] [i_1] [15] [i_0]));
                arr_13 [i_0 + 2] [i_0] [i_0] = (((((min(var_1, 6))) - (arr_7 [16] [1] [i_1] [i_1] [i_0 - 1]))));
            }
        }
    }
    var_20 = ((((var_9 > -1) ? -var_2 : (-1 & -125))));
    var_21 = max(var_4, (((((var_9 ? var_6 : var_10))) ? (((var_9 ? var_1 : var_12))) : var_0)));
    #pragma endscop
}
