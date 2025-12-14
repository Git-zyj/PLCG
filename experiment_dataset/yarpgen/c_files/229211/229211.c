/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((var_13 >= var_3), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 += (arr_2 [i_0]);
                arr_5 [i_0] [i_1] [i_0] = (!var_3);
            }
        }
    }
    var_16 = (562527862 && 2147483647);
    var_17 = -var_5;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            {
                arr_11 [15] [i_2] = (-1032381813 + var_6);

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_18 = (-1575994914 ^ -764899097);
                    arr_16 [i_2] [i_2] = (((arr_10 [i_2]) && 2683280344));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_25 [i_5] [i_5 + 1] [i_2] [i_5 - 1] [i_5 + 1] = (arr_3 [1]);
                                var_19 = -1334750752;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
