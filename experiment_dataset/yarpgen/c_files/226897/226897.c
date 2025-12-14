/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 -= (min((((arr_7 [0] [i_1] [i_4 - 1] [i_3] [i_0]) / (arr_7 [i_2] [i_2 + 1] [i_4 + 1] [i_3] [i_1]))), (arr_1 [i_2 + 2])));
                                var_16 = ((51 ? -89 : 76));
                                var_17 = (~90);
                            }
                        }
                    }
                }
                arr_12 [5] [5] [i_1] = (max(var_13, ((-64 ? (arr_10 [10] [10] [i_1] [10] [i_1] [i_0]) : (arr_2 [i_0] [4])))));
                var_18 = var_14;
                var_19 = ((((var_9 % (arr_0 [i_0]))) % (arr_4 [i_0] [i_0] [i_0])));
                arr_13 [i_0] [10] = min((arr_0 [i_1]), (arr_7 [i_0] [i_1] [i_1] [i_0] [i_1]));
            }
        }
    }
    var_20 = ((((min(var_5, var_9))) + ((((max(39, 51))) % 4))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_21 = (((arr_6 [i_5] [i_5]) + (arr_0 [i_5])));
                arr_18 [13] = (min((arr_8 [8] [1] [i_6] [i_6] [i_6] [i_6]), (((((arr_5 [i_5] [i_5] [i_6]) | 39)) + 69))));
                var_22 ^= arr_15 [i_6];
            }
        }
    }
    #pragma endscop
}
