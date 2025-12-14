/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, var_6));
                            var_14 = (arr_0 [i_2]);
                            arr_12 [i_1] [1] [i_1] [1] [1] = ((~((var_5 ? var_7 : var_2))));
                        }
                    }
                }
                arr_13 [2] = (((arr_3 [i_0]) <= 241));
                var_15 = ((var_12 <= ((((min(176, 80))) ? 176 : var_11))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 += ((19 ? 80 : 3));
                            arr_20 [i_0] [i_5] [i_4] [i_5] [i_5] = (var_10 % var_12);

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_17 ^= (((var_2 ^ var_8) ? (var_0 ^ var_2) : var_3));
                                var_18 = ((var_2 && (arr_5 [i_1] [i_5] [i_6])));
                                var_19 = (min(var_19, (!var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(((var_9 * ((252 ? var_6 : var_11)))), var_11));
    var_21 = var_7;
    var_22 ^= ((var_7 < (min(var_1, (var_11 / var_10)))));
    #pragma endscop
}
