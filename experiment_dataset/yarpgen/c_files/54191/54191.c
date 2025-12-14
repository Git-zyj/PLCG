/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [1] = (min((arr_9 [i_3 - 2] [i_0 - 1]), (min((var_2 + 126), 0))));
                            arr_11 [i_0] [i_2] = ((+(((arr_5 [i_0 - 1] [10] [i_3 - 2] [i_0 - 1]) ? (arr_5 [1] [i_3 - 2] [i_3 - 2] [i_0 + 3]) : (arr_5 [i_3] [i_3] [i_3 - 3] [i_0 + 3])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = (((((3940307790 ^ (arr_1 [i_0 + 2] [i_0 - 1])))) && ((max((arr_1 [i_0 + 1] [i_0 - 2]), (arr_1 [i_0 + 3] [i_0 - 2]))))));
                                arr_21 [i_0 - 1] [i_1] [i_1] [i_5] [i_6] = var_4;
                                arr_22 [i_0 - 1] [7] [i_4] [4] [i_6] [i_5] = min((arr_16 [i_0 + 3] [i_0 - 3] [i_0 + 2] [i_0 - 1]), (max(60224, -1125585294)));
                            }
                        }
                    }
                }
                arr_23 [i_0] = var_1;
                arr_24 [i_1] = (((0 ? (arr_18 [i_0 - 2] [2] [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 1]) : var_0)));
                arr_25 [i_0] [i_0] = (((((~(arr_3 [i_0] [9] [i_0])))) <= var_12));
            }
        }
    }
    var_19 = var_10;
    var_20 = 2147483641;
    #pragma endscop
}
