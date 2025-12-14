/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_15 = (max(var_15, var_6));
                    arr_6 [i_0] [i_1] = var_3;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_16 = ((-((~(min(var_11, var_9))))));
                    arr_9 [i_0] [i_0] = var_9;
                    arr_10 [i_1] [i_3] = ((-0 ? ((62 ? -1 : -4539289540335639148)) : (arr_5 [i_0] [i_0] [i_3] [i_1])));
                    var_17 = (((-6872660576317166499 - var_1) ? -63 : (((-25 <= (arr_5 [i_0] [i_1] [i_1] [i_3]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_6] = var_2;
                                var_18 = (min(var_18, 10052));
                            }
                        }
                    }
                    var_19 ^= 24;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, 1));
                                var_21 = (-21 || -8);
                            }
                        }
                    }
                }
                arr_28 [i_0] [i_1] = (arr_26 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        {
                            arr_34 [i_0] [i_1] [i_9] [i_10] = var_13;
                            var_22 = (max(var_22, -var_0));
                            var_23 = (min(var_23, (arr_19 [i_0] [i_0] [i_1] [i_9] [i_10 + 2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_24 = (arr_44 [i_11] [i_12] [i_12] [i_13] [i_14 + 1] [i_14]);
                            var_25 ^= (-25 != 80);
                        }
                    }
                }
                arr_45 [i_12] [i_12] = ((((max(-30239, var_4))) ? var_6 : (arr_36 [i_11] [i_12])));
            }
        }
    }
    var_26 = -var_11;
    var_27 = (min(var_27, (((2871296508 ? 6872660576317166499 : 33)))));
    #pragma endscop
}
