/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((526703630 ? ((min(var_12, (arr_0 [i_0])))) : (arr_2 [i_0]))) + 2147483647)) << (((((min(-2621, var_14)) - (arr_1 [i_0]))) - 4618246398569660518))));
                arr_6 [1] [i_1] [i_0] = (min((((((arr_3 [i_0] [i_0]) ? var_1 : (arr_2 [i_1]))))), (arr_3 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_4] [i_3] [i_4] [3] [i_6] [i_4] [i_4] = var_0;
                                var_17 |= (!var_7);
                                arr_23 [i_2] [i_6] [i_4] [i_5] [10] [10] = (arr_9 [i_3] [i_5]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_28 [i_2] [i_7] [i_7] &= (arr_4 [i_2] [i_3] [i_7]);
                    arr_29 [i_2] [i_2] = ((~(arr_2 [6])));
                    arr_30 [i_2] [i_2] [i_2] [i_2] = arr_16 [i_3] [i_3] [i_3] [4] [i_3];
                    arr_31 [i_7] = (((arr_19 [i_2] [i_7] [i_7] [i_7] [i_2] [i_2]) != (arr_19 [15] [9] [i_7] [i_7] [i_7] [i_7])));
                }
                arr_32 [i_2] = ((var_1 | (min(((~(arr_11 [6] [9] [i_3]))), (arr_15 [i_3] [i_3])))));
            }
        }
    }
    var_18 = ((-(min((!var_7), (3768263654 - var_2)))));
    #pragma endscop
}
