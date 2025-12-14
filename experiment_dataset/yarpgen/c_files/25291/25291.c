/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (min(var_4, 65));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(190, -15496));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (min(15495, (!46)));
                                var_23 = 65;
                            }
                        }
                    }
                }
                arr_15 [i_1] = (arr_9 [i_1]);
                var_24 = (min(var_24, (((((44 ? -1891789166 : 40)) * (((((var_4 ? var_6 : (arr_7 [i_0] [i_1] [6] [i_0]))) <= -var_18))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            arr_24 [i_5] = (((arr_16 [i_5] [i_6 - 1]) ? (arr_20 [i_5] [i_6] [i_5]) : (~var_13)));
            arr_25 [i_5] [i_5] = (10469253687112456684 ? var_4 : var_8);
        }
        arr_26 [i_5] [9] = 198;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 23;i_9 += 1)
                {
                    {
                        var_25 -= var_5;
                        arr_36 [i_7] [i_8] [i_8] [i_5] [i_5] [i_7] = -var_18;
                        arr_37 [i_8] [i_7] [i_7] [i_7] = (i_7 % 2 == 0) ? (((var_15 >> (((arr_30 [i_7] [i_7] [i_7] [i_7]) - 2389271655))))) : (((var_15 >> (((((arr_30 [i_7] [i_7] [i_7] [i_7]) - 2389271655)) - 3331274651)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
