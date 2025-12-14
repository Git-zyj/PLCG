/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((13214 ? 221 : -1800977396)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [12] [12] [i_1 - 2] |= var_2;
                arr_5 [16] [i_0] |= ((-((-((max(-96, (arr_2 [i_0 - 1] [i_1] [i_1]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = var_4;
                                arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] [3] = ((((max(var_13, var_17))) ? var_14 : (!var_12)));
                            }
                        }
                    }
                    arr_19 [i_0 - 1] [i_0] [16] = (var_12 ^ var_14);
                    var_19 = var_7;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_23 [i_5] [i_5] [18] [i_0 - 1] = (((((~var_13) & (arr_22 [i_5]))) >> (((~var_1) + 36))));
                    var_20 = (min(var_20, ((((!77) + ((~(arr_13 [i_1 - 1] [i_0 + 1] [14] [i_1]))))))));
                    arr_24 [i_0 - 1] [i_1] [i_5] = ((!(arr_16 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0] [i_0 + 1])));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_21 |= var_0;
                                var_22 -= (((((var_10 ? var_14 : var_9))) ? (arr_6 [17] [i_6] [24]) : var_10));
                            }
                        }
                    }
                }
                arr_32 [6] [i_0] [i_0] |= (min((arr_22 [i_0]), var_14));
            }
        }
    }
    var_23 &= var_2;
    #pragma endscop
}
