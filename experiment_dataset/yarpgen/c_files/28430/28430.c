/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = 21831;
                                arr_15 [i_2 - 2] [i_3] [i_2 - 2] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (((max(21808, (arr_6 [i_3] [i_1]))))) : (((var_14 ^ (arr_12 [i_0] [i_1] [i_4] [i_1]))))));
                            }
                        }
                    }
                }
                arr_16 [0] [i_0] &= (min(((var_0 ? (arr_11 [i_1] [i_1] [i_1 + 2] [i_1]) : (arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2]))), -249));
            }
        }
    }
    var_20 &= (~var_2);
    var_21 = (max(var_21, var_9));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            {
                var_22 -= var_10;
                arr_22 [i_5] [i_6] [i_6] = (min((((arr_9 [i_6 + 3] [i_6] [i_6] [i_6]) ? (arr_9 [i_6 - 1] [i_6] [i_6] [i_6]) : (arr_11 [i_6 + 3] [i_6] [0] [i_6]))), (((arr_11 [i_6 + 2] [i_5] [i_5] [i_5]) ? (arr_9 [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_5]) : (arr_11 [i_6 + 2] [i_6] [i_6] [7])))));
                var_23 = ((1 ? 4294967295 : 1));
            }
        }
    }
    #pragma endscop
}
