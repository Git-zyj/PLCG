/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min((-2066883984 >= 30315), (((-1401913645 ? -1702372193 : 4294967295)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0]);
                    var_13 = (~-12582912);
                    var_14 |= -1455178374;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (((~27) ? ((((var_5 ^ 1) || (21 > var_10)))) : (1792 || var_0)));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_1] = (arr_13 [i_4] [i_3] [i_2] [i_3] [1]);
                                arr_16 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4] [i_4] = (((!(!var_6))) ? (max((((-(arr_5 [i_3])))), (max((arr_0 [8] [8]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (arr_9 [i_2]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
