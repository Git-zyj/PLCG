/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [i_0] = (min((((1 ? (var_4 - 1) : 1))), (min(0, 1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_8 [i_0] [i_0]);
                            arr_12 [i_3] [i_1] [i_1] [16] = (max(112, var_8));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_10 = (255 <= 65522);
                    var_11 = (min(var_11, 1));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_12 = (((arr_1 [9]) - 14));
                    arr_17 [i_1] [i_1] &= ((arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 3]) ? 0 : (arr_7 [i_1 + 3] [i_5] [i_5] [i_1 + 3]));
                    arr_18 [i_1] [i_1] [i_0] |= ((var_7 ? 1 : var_0));
                    var_13 = ((33554431 * (arr_8 [i_1] [13])));
                }
                arr_19 [9] [9] [1] = ((255 ? ((10 ? (((var_1 + 2147483647) << (255 - 255))) : 16)) : 133693440));
            }
        }
    }
    var_14 &= ((min(2047, 0)));
    #pragma endscop
}
