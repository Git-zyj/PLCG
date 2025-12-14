/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((min((arr_8 [i_2] [i_3] [i_2] [i_1] [i_0 - 3]), (arr_2 [i_0]))))));

                            for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [17] [i_0 - 3] [i_0] [i_0] [i_4] = (arr_10 [20] [20] [i_1] [i_2] [i_3] [i_3] [i_4 - 3]);
                                var_15 ^= (max(var_13, -112));
                                arr_15 [i_4] [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_2 [i_4]);
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_1] = (((arr_13 [i_0 - 3] [i_5 - 2] [i_3] [i_5 - 2] [i_0 - 3]) * (arr_13 [i_0 - 3] [i_5 - 2] [i_3] [i_5 - 2] [i_5 + 1])));
                                var_16 = (max(var_16, var_9));
                                arr_20 [i_0 - 3] [i_0 - 3] [i_5] [i_5 - 1] [i_5 - 3] = var_11;
                                var_17 = (-1 < 468084966);
                                var_18 ^= (((arr_18 [i_0 + 1] [i_5 - 2] [i_5]) ? -1 : var_7));
                            }
                            arr_21 [18] [i_2] [i_1] [18] |= (arr_1 [i_0]);
                        }
                    }
                }
                var_19 = ((-((var_1 + (arr_8 [i_0] [0] [i_1] [i_1] [i_1])))));
                arr_22 [i_0] [i_0] [i_0] = ((!((!(arr_13 [i_0 - 2] [i_0 - 2] [14] [i_0 - 2] [i_0 - 2])))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [12] [12] [i_0 - 4] |= 252;
                                var_20 = (max(var_20, -126));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= 198;
    #pragma endscop
}
