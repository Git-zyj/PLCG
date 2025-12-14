/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(32, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((min(var_9, (arr_3 [11]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_2] [i_0] = ((!((min((arr_6 [i_4] [i_2] [i_1]), -97)))));
                                var_16 = (min(var_16, ((((((57 | -23) & (~47))) | (((arr_9 [i_0] [i_2] [i_2] [i_3] [i_2]) & 46)))))));
                                var_17 = (max(var_17, (arr_9 [i_0] [i_0] [i_0] [i_3] [i_4])));
                                var_18 = var_8;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (-127 - 1);
                            var_20 = ((32 / (((arr_0 [i_0]) * (arr_0 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_21 &= min((-127 - 1), (((var_4 ? -127 : 52))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_22 ^= min(var_12, -120);
                    var_23 = min(127, -637695099);
                }
            }
        }
    }
    #pragma endscop
}
