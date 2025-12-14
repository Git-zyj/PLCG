/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 ^= ((max(61274, 4262)));
                            arr_9 [i_3] = var_9;
                            var_13 = ((((max(var_3, var_1)) + var_6)));
                            var_14 = (max(var_7, (((((min(var_9, var_10)) + 2147483647)) >> (var_10 + 1726209513)))));
                        }
                    }
                }
                var_15 += (max(var_8, (61267 && 1607127713)));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, (max(var_4, (var_2 == var_8)))));
                                var_17 = (max(var_17, (max(var_4, (var_1 == var_7)))));
                            }
                        }
                    }
                    arr_18 [i_4] = var_10;
                    var_18 *= (((max(var_9, var_5))));
                    var_19 &= var_4;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_20 = var_5;
                        var_21 ^= var_0;
                    }
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_22 = var_5;

                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_1 + 2] [i_7] [i_9] [i_9] [i_10] = var_5;
                            var_23 = ((var_8 << (var_5 - 10)));
                            var_24 = var_9;
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] = (var_3 > var_6);
                            var_25 += var_1;
                        }
                        for (int i_12 = 2; i_12 < 8;i_12 += 1)
                        {
                            var_26 = var_10;
                            var_27 = ((var_5 + (var_4 & var_2)));
                        }
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_28 = 61274;
                        var_29 = (max(var_29, (var_8 + var_5)));

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_41 [i_0] [9] [i_1 - 1] [i_7] [i_13] [i_14] = (var_1 == var_10);
                            var_30 &= -1716362700;
                        }
                        for (int i_15 = 4; i_15 < 9;i_15 += 1)
                        {
                            var_31 = var_8;
                            var_32 ^= var_2;
                            var_33 = var_9;
                            arr_46 [1] [i_1 + 1] [2] [i_1] [i_15] = var_1;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 9;i_17 += 1)
                        {
                            {
                                arr_51 [i_0] [i_1] [i_7] [i_16] [i_17] = var_0;
                                var_34 = var_5;
                            }
                        }
                    }
                }
                var_35 = var_1;
            }
        }
    }
    #pragma endscop
}
