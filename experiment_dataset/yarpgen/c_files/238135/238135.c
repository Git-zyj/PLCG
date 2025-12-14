/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = ((-126 > (max((-118 + 6687194549175024092), ((((-40 + 2147483647) << (var_0 - 25))))))));
                                arr_12 [i_0] [i_0] [i_0] [5] [i_3] [i_3] [i_4 - 3] = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_5] [i_2] [i_5] [i_5] [i_2] = (max((((!(var_4 & var_8)))), 536870911));
                                arr_20 [3] [i_5] [i_1] [3] [3] [i_5] [i_6] = 1736314916;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_21 |= (min(-0, (min((min(var_3, 15068619591219349030)), ((min(var_1, var_17)))))));
                                arr_27 [i_1] = (((max((18446744073709551615 - 15121), (min(var_18, var_7)))) - var_4));
                                var_22 += (14 && 288230376151711743);
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_16 < var_14);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [i_9] [i_0] [1] [8] = (max(-2043617788, (max(var_13, var_14))));
                                arr_35 [i_10] [i_9] [8] [i_9] [i_0] = (max((max(63795, var_18)), (!var_2)));
                                arr_36 [11] [11] [i_9] [i_9] [i_1] [i_0] = var_19;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_0;
    var_24 = (~(~var_3));
    #pragma endscop
}
