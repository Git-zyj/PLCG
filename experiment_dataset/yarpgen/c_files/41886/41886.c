/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(65535, (((var_1 == (0 > -1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 ^= var_17;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] = (arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [11] [i_3] [i_0] [11] = (arr_13 [i_0] [i_3 + 2] [i_2] [i_0] [i_4] [i_4 + 1]);
                                var_22 *= ((((1372804832 / (arr_2 [12])))) && var_12);
                                arr_16 [i_4] [1] [i_0] [i_2] [i_0] [i_1] [i_0] = ((((arr_1 [i_1] [i_2]) ? 1 : 1372804861)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (((arr_17 [i_0] [i_5] [i_2] [17] [17] [i_0]) <= (arr_11 [i_1])));
                                var_24 = (((arr_8 [i_0] [i_6 - 1] [i_2] [i_5 + 1]) ? 69 : (arr_7 [i_0] [i_1] [i_5 - 1] [9])));
                                var_25 = 0;
                                var_26 = (max(var_26, ((((arr_7 [i_5] [i_5] [i_5 - 1] [i_5]) ? (arr_20 [i_5] [12] [i_5] [i_5 - 1] [i_5] [i_5 - 1]) : (arr_20 [i_5] [8] [8] [8] [i_5] [i_5 - 1]))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_7] [i_7] [i_1] [i_1] = (((var_13 ? (arr_1 [i_0] [15]) : 0)));
                        var_27 = (max(var_27, ((((((var_13 ? 22486 : 1))) ? (~1) : (arr_19 [0] [i_1] [i_1] [i_7]))))));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_2] [14] |= (((var_2 / var_17) ? (((arr_4 [i_1] [i_1] [i_2]) ? 14720 : 1372804816)) : (arr_6 [i_0] [6] [i_1])));
                        var_28 |= 131;
                        arr_28 [i_0] = (((((var_4 ? 1 : 3231611385))) ? (1 != 6821) : (arr_25 [i_0] [i_2])));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] = ((arr_4 [i_9] [i_1] [i_2]) ? -71 : 1120326824930187204);
                            var_29 *= var_13;
                        }
                    }
                }
                var_30 = -1;
            }
        }
    }
    #pragma endscop
}
