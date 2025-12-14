/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = 43292;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 = 43277;
                    arr_7 [i_0] = 75;
                    var_16 = 13165884489309363976;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]);
                                var_18 = ((var_6 | (arr_4 [i_4] [i_3] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
