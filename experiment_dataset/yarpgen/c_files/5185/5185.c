/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 - var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = var_5;
                                arr_15 [i_3] [i_2] = ((var_2 != (arr_4 [i_1] [i_1])));
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_0] [i_0] = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_2] [i_5] [i_5] [i_0] [i_0] = (arr_12 [i_0] [i_5] [i_0]);
                                var_11 = ((-761136192 ? (((((207 ? var_8 : (arr_21 [i_0] [i_1] [i_2 + 4] [i_5] [i_0])))) / (arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] [i_6 + 1]))) : ((((-(arr_21 [11] [i_1] [i_1] [i_5] [i_6])))))));
                                var_12 = (max(var_12, ((((((arr_7 [i_5 - 1] [13] [i_5]) % (arr_7 [i_5 - 1] [i_0] [i_0]))) + (((-761136188 ? (arr_10 [i_6] [16] [i_5 + 1] [i_5 + 1] [16] [i_5]) : -761136179))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 ^= max(1, 5629);
    #pragma endscop
}
