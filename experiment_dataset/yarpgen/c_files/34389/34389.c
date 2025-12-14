/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [i_1] [i_3] [i_4] [i_0 + 2] [i_1] = ((!(((((var_6 && (arr_7 [i_0] [i_1] [i_2] [i_2] [i_4]))) ? (arr_1 [i_1 + 2]) : (arr_13 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_3 - 1] [i_2] [i_3 - 1]))))));
                                arr_15 [1] [i_2] [i_2] [i_2] [i_3 - 1] [i_4] = -14;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_1 + 3] [i_1 + 3] [i_6 - 2] [i_5] [i_2] = ((!((!(arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 3] [i_0 + 3])))));
                                arr_23 [i_0] [i_2] [i_2] [i_5] [i_6 + 4] = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_12 += (((((10903 ? 1128318205 : (arr_10 [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_7 - 1])))) > (((173308576 ? (arr_10 [i_0 - 1] [1] [i_2] [i_2] [i_7 + 1] [i_7 + 1] [1]) : 1)))));
                                var_13 ^= (max(((((arr_20 [i_8 - 4] [i_8 - 4] [i_7]) <= (arr_20 [i_8 + 1] [i_8 + 1] [i_7])))), (((arr_20 [i_8 - 1] [i_1] [i_7]) % (arr_20 [i_8 - 3] [i_8 - 3] [i_7])))));
                                arr_29 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 + 1] = ((!-891740515689600231) <= (arr_28 [i_0] [i_0] [i_0] [0] [i_0 + 3] [i_2] [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_35 [12] [22] [i_2 - 1] [i_2] [i_10] |= (!(~4922662701386629115));
                                var_14 = (arr_25 [i_0 - 1] [i_2] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 22;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_15 -= ((2204849661 * (2654757043 <= var_7)));
                            arr_45 [i_11] [i_11] [i_11] [17] [i_11] [i_11] = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            arr_50 [i_12] [i_11] [i_15] [i_15] [i_11] [i_11] = (min((min((arr_37 [i_11] [i_12]), 28687)), (((0 <= ((6731 ? 0 : var_6)))))));
                            var_16 = 34210;
                            arr_51 [i_11] [i_11] [i_11] = (arr_43 [i_11]);
                            arr_52 [i_11] [i_12] [i_16] [i_15] [8] [i_16] &= (((~4101836554811548064) > 1));
                            arr_53 [i_11] [i_11] = (min(((((arr_16 [i_11] [i_12] [i_15] [i_16]) <= (~var_9)))), ((~((-(arr_13 [i_11] [9] [i_12] [i_15] [i_15] [i_11] [i_16])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
