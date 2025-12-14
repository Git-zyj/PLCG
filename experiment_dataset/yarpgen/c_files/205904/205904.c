/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;
    var_18 ^= var_12;
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_3 [i_3 + 1] [i_4]) & (min(47163, (((arr_11 [i_0] [i_2] [i_3]) ? var_15 : 18381))))));
                                arr_12 [8] [7] [8] [7] [i_1] [i_0] = arr_11 [7] [i_1] [4];
                                var_21 = arr_2 [i_0] [i_1];
                                arr_13 [i_1] [i_2] [i_4] &= ((((min((arr_11 [i_1] [i_0 - 2] [i_0 - 2]), (arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? -47163 : (((arr_11 [i_3 + 1] [i_2 - 3] [i_0 + 2]) ? var_2 : (arr_11 [i_3] [i_3] [i_0 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = (((((26727 != (arr_11 [i_0] [i_1] [i_2 + 2])))) ^ (((arr_15 [i_0 + 2]) ? (arr_15 [i_0 + 2]) : var_12))));
                                arr_19 [i_6] = ((((min((arr_18 [i_6] [i_6]), (arr_7 [i_0] [7] [i_0 + 3] [i_0] [i_2 - 2])))) ? 47163 : ((-(arr_3 [i_5] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_10 || var_3);
    #pragma endscop
}
