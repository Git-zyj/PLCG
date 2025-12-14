/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236340
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
                var_16 ^= var_14;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_2 [i_1]) < ((((var_4 < (arr_2 [i_1]))) ? (((arr_8 [i_1] [i_2]) | (arr_6 [i_1] [9] [i_3] [i_4 - 1]))) : ((max(var_9, (arr_13 [i_0 + 2] [i_3]))))))));
                                var_18 = (max(var_18, ((min(8, 8)))));
                                var_19 -= (arr_13 [i_1] [5]);
                                var_20 = 154;
                            }
                        }
                    }
                }
                var_21 += ((((max(var_5, (arr_3 [2] [i_0 + 3] [i_0 + 3])))) ? ((min(1, (!89)))) : (((((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_3 [14] [i_0 + 3] [i_1]))) * ((min(24, 1)))))));
                arr_14 [i_0] [i_1] = ((((((((-(arr_13 [i_0] [i_1])))) ? (((var_5 ? (arr_7 [i_0] [i_0] [9] [i_1]) : var_9))) : (arr_13 [5] [i_1])))) ? (((1 ? (min((arr_9 [i_0] [12] [i_1] [4]), 1439218384)) : (1 <= 1)))) : (((((~(arr_1 [i_0])))) ? (((var_2 >> (15095 - 15090)))) : var_11))));
            }
        }
    }
    var_22 = var_9;
    var_23 = (max(((var_13 ? var_12 : (12 != var_15))), 16256));
    #pragma endscop
}
