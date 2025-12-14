/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [1] = (arr_1 [i_0]);
                var_17 = (max(((max((arr_1 [i_0]), (arr_2 [12] [i_1] [i_1])))), ((-(1 * var_13)))));
                var_18 |= 2403;
                var_19 = (min(var_19, ((((((arr_1 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : 992)) - ((103 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] = (((((arr_3 [i_4] [i_4] [i_4]) && 1)) ? 235 : (((arr_0 [i_2]) ? -989 : (arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 *= (arr_7 [i_3] [i_3]);
                                arr_19 [i_6] = 1;
                                var_21 *= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = -var_12;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_23 = 1;
                                var_24 = (max(var_24, ((min((max((arr_31 [i_8]), -120819854)), (arr_26 [i_7] [i_11]))))));
                            }
                        }
                    }
                }
                arr_35 [i_7] [i_7] = (arr_28 [i_8] [i_8] [i_7] [i_7]);
                arr_36 [i_7] [9] = ((-((max(128, (arr_25 [i_8] [21] [i_7]))))));
                var_25 += (~(((((max(3940649673949184, 1))) && 2147483637))));
            }
        }
    }
    #pragma endscop
}
