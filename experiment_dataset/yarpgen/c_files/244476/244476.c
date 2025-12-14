/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [0] [i_1] [i_0] [i_3] [i_3] [i_4] &= ((max(var_3, var_10)));
                                var_12 *= (~4056914162);
                                arr_13 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2] = min((~var_7), -var_11);
                                var_13 = -57;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_5] &= (!238053110);
                                arr_21 [i_2] [i_1] [i_1] [i_2] = (~var_5);
                                arr_22 [1] [i_0] [i_2] [i_2] [i_0] [i_0] = (min((min(4234497841, 0)), ((((max(60469461, -2470243414767558634)) != (36640 && 2348518827))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_14 = var_10;
                                var_15 += ((((max(var_3, var_8))) < (((var_7 + 2147483647) >> (var_7 + 15232)))));
                            }
                        }
                    }
                    var_16 = (!var_2);
                    var_17 -= (((min(var_8, var_1))));
                    arr_36 [i_8] = (((-((max(0, (-127 - 1)))))));
                }
            }
        }
    }
    var_18 &= (!(((min(var_7, var_4)) == (min(var_4, var_0)))));
    #pragma endscop
}
