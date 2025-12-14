/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_11, var_12))) ? (min(var_5, var_3)) : var_1)) / -var_9));
    var_17 = (max((!var_3), (var_3 || 9223372036854775807)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 ^= ((!(((((min((arr_6 [i_0] [i_1] [i_1] [i_0]), var_2))) ? var_0 : var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_3 [i_3] [i_4 + 2])));
                                var_20 ^= var_1;
                                var_21 = (((((arr_6 [i_0] [i_0 - 1] [i_3 + 1] [i_4 - 3]) || -5059641346345881622)) ? var_10 : var_15));
                                var_22 = ((var_15 ? ((-(arr_4 [i_0 - 1] [i_3 + 1] [i_4 + 1]))) : ((((~var_0) >= ((var_1 ? -5059641346345881622 : (arr_1 [i_4] [i_2]))))))));
                                var_23 = (-5059641346345881622 == 1);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_24 = var_1;
                        arr_15 [i_1] [i_5] [i_2] = ((((((arr_10 [i_0] [i_1] [i_1] [i_5] [i_2] [i_5]) ? (arr_13 [i_0] [i_5] [i_2] [i_5 - 3]) : var_9))) ? var_11 : 5059641346345881619));
                        var_25 = (((arr_5 [i_5 - 4] [i_2] [i_1]) ^ (arr_5 [i_1] [i_2] [i_5])));
                    }
                    for (int i_6 = 4; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_6 + 1] [i_6] [i_2] [i_6 - 4] [i_0 - 1] = (((((arr_10 [i_0] [i_0] [i_0 - 1] [i_6] [i_0] [i_0 - 1]) ? (~-5059641346345881619) : (!-5059641346345881626))) ^ ((((arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_6] [i_0 - 1] [i_6 + 1]) / 15)))));
                        arr_19 [i_0 - 1] [i_6] [i_2] [i_6] = ((((((var_10 < (arr_6 [i_6 - 2] [i_6] [i_0 - 1] [i_0]))))) % (((arr_6 [i_6 + 1] [i_6] [i_0 - 1] [i_0]) ? var_8 : -5059641346345881638))));
                        var_26 *= (((min(var_13, (var_3 * var_2)))) ? 463 : (((arr_1 [i_6 - 1] [i_0 - 1]) ? ((var_3 + (arr_0 [i_0 - 1]))) : (arr_17 [i_0] [i_0] [i_2] [i_6] [i_1] [i_0]))));
                    }
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_7 + 1] = var_12;

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_27 ^= 8;
                            var_28 = ((64 ? (arr_4 [i_2] [i_7] [i_8]) : var_10));
                            var_29 = ((((((arr_3 [i_0 - 1] [i_0 - 1]) ? 1344426192 : var_2))) ? (arr_13 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]) : ((~(arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
