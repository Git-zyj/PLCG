/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (!var_9);
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_2] = (min(((~(((arr_6 [i_0 + 1] [i_1]) + (arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]))))), (((var_14 || ((((arr_10 [i_0] [i_0] [i_0] [i_0] [9]) ? 1 : (arr_2 [i_4] [i_3])))))))));
                                arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] = max(((min((-2147483647 - 1), (arr_0 [i_0 + 2] [i_0 + 2])))), var_0);
                            }
                        }
                    }
                }
                var_20 ^= ((((!(var_5 + var_4))) ? (((~(arr_2 [i_0 + 1] [i_0 + 1])))) : var_3));
                arr_14 [i_0] = (((((var_13 ? var_13 : var_18))) * var_16));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_0] [i_5] = min((min((arr_7 [i_0] [i_0] [i_0 + 3] [8] [i_0]), 172)), (((4294967271 || ((min(var_0, 127)))))));
                    arr_18 [i_0] [i_1] [0] = ((((-(arr_0 [i_0 + 3] [i_0 + 3]))) / var_11));
                    var_21 = ((1 > (((((40 / (arr_5 [i_0]))) >= 4095)))));
                    var_22 *= max((((var_7 ? (1 | 1) : (arr_7 [i_0] [i_5] [0] [i_0] [i_0 - 1])))), 14727780971514564811);
                }
            }
        }
    }
    var_23 = max((((var_6 & 8191) & (max(-121, var_12)))), ((min(var_8, (min(var_16, var_13))))));
    #pragma endscop
}
