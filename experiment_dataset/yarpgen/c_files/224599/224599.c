/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (((((63 + (((arr_9 [i_0] [i_1] [i_2] [i_3]) + (arr_2 [i_1])))))) + (((7336027437149768160 + (-32767 - 1))))));
                                var_21 *= (max((arr_9 [i_0] [i_1] [i_2] [i_3]), (arr_3 [i_3] [i_2] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] [i_1] = (max((var_2 & -var_3), (arr_17 [i_0] [i_1] [i_2] [i_5] [9])));
                                var_22 ^= var_7;
                                var_23 += ((~(arr_6 [i_0] [14])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
