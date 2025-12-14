/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_10 &= var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 -= (var_5 < var_9);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 = ((var_1 ^ (var_6 | var_9)));
                        var_13 = (var_1 - var_0);
                    }

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_14 = (var_2 || var_1);

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_15 = (max(var_15, (((var_9 || (var_4 & var_1))))));
                            arr_14 [i_5] [i_0] [8] [i_5] [i_5] = var_5;
                            var_16 = (max(var_16, var_6));
                        }
                        var_17 = -248;
                    }

                    for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_18 &= (var_8 * var_3);

                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_19 = (var_3 >= var_4);
                            var_20 = (var_4 > var_3);
                            arr_21 [i_0] [i_0] [3] [i_0] [i_0] [i_0] [i_0 - 1] = var_6;
                        }
                        var_21 = (max(var_21, var_3));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_22 = var_2;
                        var_23 = (min(var_23, (4 + 148)));
                        arr_25 [4] [i_0] = (var_9 / var_6);
                    }
                }
            }
        }
        var_24 = (max(var_24, ((((var_6 + var_1) / -var_6)))));
    }
    var_25 = (min(var_25, ((min(((max(var_3, var_6))), (-var_2 / var_3))))));
    #pragma endscop
}
