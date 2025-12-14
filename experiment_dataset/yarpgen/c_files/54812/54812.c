/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [14] [i_0] [9] [i_2] [i_2] = (0 ^ var_2);
                                var_18 = max(65535, 0);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_18 [i_0] [i_2] [i_0] [i_0] = var_14;
                        var_19 |= 65533;
                    }
                }
            }
        }
        var_20 += ((((min((max(4586, 0)), (3380 < 54017)))) != (65535 != 9718904969237843218)));
        var_21 = (min((min(65530, 3382)), (max(65534, 3382))));
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7 - 1] [i_7 - 1] = (((max(65530, var_2)) ^ (max(var_2, 0))));
                    arr_27 [i_6] = (((min(((max(var_9, 65535))), var_2)) != 7));
                }
            }
        }
    }
    #pragma endscop
}
