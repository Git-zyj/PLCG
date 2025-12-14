/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_2;
        var_15 += var_9;
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_5;
        var_16 = (~var_9);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (min(var_17, var_2));
            arr_10 [i_1] = (!var_1);
            var_18 = var_7;
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] &= (~var_0);
                    var_19 *= var_13;
                    arr_21 [i_3] [i_3] [i_5] = -var_6;
                    arr_22 [i_3] [i_3] [i_3] = (~var_3);
                }
            }
        }
        arr_23 [i_3] = var_6;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_29 [i_3] [i_6] [i_7] = var_13;
                    arr_30 [i_3] = -var_8;
                    arr_31 [i_3] [i_6] [i_6] = var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_20 = var_11;
                                arr_38 [i_3] [i_3] [i_7] [i_6] [i_3] = var_11;
                                var_21 = (min(var_21, var_0));
                            }
                        }
                    }
                }
            }
        }
        arr_39 [i_3] [i_3] = (!var_9);
        arr_40 [i_3] [6] = -var_0;
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_22 = var_2;
            arr_46 [i_10] [i_10] [i_10] = (~var_10);
        }
        var_23 -= (~var_13);
        var_24 *= var_4;
    }
    #pragma endscop
}
