/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((((((1073741822 ? (arr_0 [i_0]) : var_9))) ? ((var_4 ? var_0 : var_7)) : var_3))) ? ((-(min(var_7, var_5)))) : -1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [5] [5] [i_2] [3] [i_4 + 1] = var_0;
                                var_14 = (((arr_6 [i_0]) ? var_2 : ((~(~var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_15 ^= (((var_5 ? var_4 : (arr_17 [i_6] [i_6] [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_16 ^= ((max(((max(56, var_7)), var_9))));
                            var_17 |= 3721035922;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_18 = (((~1) >= (!1)));
                                arr_35 [7] [7] [7] [7] [i_11] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_19 = (((((var_0 ? ((((arr_15 [1] [i_12]) < 32767))) : (var_2 ^ var_2)))) ? (!7892442833997831035) : (((arr_25 [i_12]) ? ((var_8 ? var_11 : (arr_19 [i_13] [1] [i_12] [i_12]))) : 63))));
                var_20 &= ((~(var_6 > var_2)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            {
                var_21 = ((!(((0 ^ (~4092169080))))));
                var_22 = (arr_22 [15] [i_15] [i_15] [i_15]);
                var_23 = var_4;
                arr_44 [i_15] = ((~(((var_5 || (arr_37 [i_14] [i_14]))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_24 += (((min((max(1515579260463561628, (arr_26 [i_17] [i_15]))), (((var_9 ? var_5 : var_3)))))) ? (var_9 || var_6) : var_6);
                            var_25 = ((~((2587757344 ? var_5 : 7892442833997831013))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
