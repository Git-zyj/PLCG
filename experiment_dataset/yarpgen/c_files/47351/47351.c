/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= (arr_7 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2 + 2] [i_1] [4] = (((((7095409787219129628 ? (((255 ? (arr_10 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1]) : (arr_7 [i_0] [i_1] [i_0])))) : (arr_1 [i_0] [i_3])))) ? ((~(((arr_6 [i_1]) - var_0)))) : ((((max((arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 2]), var_1)) | (max(723601873, (arr_7 [i_1] [i_1] [i_1]))))))));
                                var_15 = (arr_4 [i_2 - 2]);
                                var_16 = (((arr_12 [3] [3] [3] [3] [3]) ? (arr_0 [i_1]) : var_3));
                            }
                        }
                    }
                }
                arr_15 [2] |= var_12;
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
