/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (((((~(arr_0 [i_0 - 2] [i_1])))) ? (!var_3) : ((~(arr_0 [i_0 - 2] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [10] |= 10;
                                arr_14 [i_0 - 3] [i_1] [i_2] [i_0] [i_4] = (arr_2 [i_0]);
                                arr_15 [i_0] [i_1] [21] [i_3 - 1] [i_0] = ((((min(var_2, 9))) ? (min((arr_9 [i_0] [17] [i_3 - 1] [i_0]), (arr_9 [i_0] [1] [i_3 - 1] [i_0]))) : (((arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1]) ? (arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1]) : (arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1])))));
                                arr_16 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((((((((!(arr_3 [i_2] [i_2])))) % (((arr_6 [i_0] [i_1] [8] [i_3] [i_4]) ? var_1 : (arr_5 [i_0] [4] [1])))))) ? ((((arr_10 [i_0 - 1] [i_1] [i_0 - 1]) ? (((arr_2 [i_3]) ? (arr_11 [i_0] [i_1] [i_0] [i_4] [i_0 - 3]) : var_4)) : 88))) : (((arr_1 [i_1]) % (max((arr_11 [i_0] [i_1] [i_0] [i_3 - 2] [i_4]), 11520694344879053017))))));
                            }
                        }
                    }
                }
                arr_17 [12] [i_0] [i_0] = ((var_6 ? ((((arr_3 [i_0] [1]) * ((~(arr_6 [i_0] [1] [i_1] [i_1] [i_1])))))) : (((1 | 249) ? (arr_12 [i_0] [i_1] [i_0 + 1] [i_0] [i_1]) : (min(18446744073709551601, var_2))))));
            }
        }
    }
    var_14 *= var_5;
    #pragma endscop
}
