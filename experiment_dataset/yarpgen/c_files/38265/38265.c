/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_3;
                arr_8 [i_1] = var_4;
                arr_9 [5] = var_14;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_16 [i_1] [i_2] [i_3] = var_12;

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [i_1] [i_2] [i_3] [i_4] = var_13;
                                arr_22 [i_0] [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = var_7;
                                var_17 -= var_13;
                                var_18 = var_14;
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_19 ^= var_4;
                                arr_27 [i_3] [i_1] [i_2] [i_2] [i_5] [i_2] [i_3] = var_1;
                                arr_28 [i_2] [i_2] = var_5;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_20 ^= var_5;
                                arr_32 [i_2] [i_2] = var_8;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                var_21 = var_10;
                                var_22 ^= var_5;
                            }
                            arr_37 [i_0] [i_0] [i_2] [i_0] [i_2] = var_11;
                        }
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
