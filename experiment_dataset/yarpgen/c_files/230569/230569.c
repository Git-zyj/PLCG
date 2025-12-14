/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = var_3;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_15 = 42638;
                var_16 += (((arr_4 [i_0] [i_1]) - var_11));
                arr_7 [i_2] [i_1] [i_1] [i_0] &= (96136540446008807 & 34043);
                var_17 -= ((-(arr_6 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((arr_5 [i_0] [i_1] [i_1] [i_1]) > (arr_5 [i_0] [i_1] [i_2] [i_1]))))));
                            var_19 += (((arr_12 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [8]) != (arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [13] [i_4])));
                            var_20 = (((arr_4 [i_0] [i_1]) + (arr_9 [i_2] [i_2] [i_2] [i_2])));
                            var_21 ^= ((((arr_9 [i_1] [i_1] [i_3] [4]) > -14104)));
                        }
                    }
                }
            }
            var_22 *= ((!(((var_0 * var_9) > var_1))));
            arr_13 [i_0] [i_0] [i_1] = var_0;
            arr_14 [i_0] [i_0] = (1 >= 5498488037074304674);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_23 -= 31469;
            arr_18 [i_0] [i_5] = (min((((~(arr_1 [i_0] [i_5])))), var_4));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_29 [i_7] = (((~(arr_9 [i_7] [i_7] [15] [i_8]))));
                            arr_30 [i_0] [i_6] [i_0] [i_7] [i_0] = var_3;
                            var_24 = (((max(var_8, (~var_1))) <= ((min((557458909 | 1), (max(var_2, -1)))))));
                        }
                    }
                }
            }
            var_25 = ((var_2 - (min((var_2 << 0), var_10))));
        }
        var_26 &= var_6;
    }
    #pragma endscop
}
