/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 22;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [16] &= 2407345369;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 += (((arr_10 [i_0] [i_1] [i_2] [i_4]) / (((((arr_13 [i_0] [i_0] [i_0] [15] [15] [i_0] [i_0]) >= (arr_3 [20]))) ? var_2 : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [21] [i_3] = (min(((max(var_9, (((arr_4 [i_4] [i_4]) ? -1448532080 : var_7))))), ((var_9 ? (arr_8 [i_3] [i_4]) : var_0))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = (((var_1 < 0) <= ((((min(53119, (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))) ? 25 : (arr_8 [i_0] [1])))));
            }
        }
    }
    #pragma endscop
}
