/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 *= (((min(576460735123554304, (arr_1 [i_0 - 1]))) <= 14720176134468997732));
        arr_2 [i_0] [i_0] = 3726567939240553900;
        var_15 = (min(var_15, ((((min(var_1, (arr_1 [i_0 + 3]))) + (((-(arr_0 [i_0] [i_0 + 4])))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 = (min(var_16, var_11));
                    arr_11 [i_1] [i_3] [i_1] |= (+(((((arr_0 [i_3] [i_2]) ? (arr_3 [i_3]) : var_6)))));
                    arr_12 [i_1] [1] [2] [i_1] = ((((((((arr_4 [i_3]) ? (arr_1 [i_1]) : (arr_9 [i_1] [i_1] [i_1]))) < (arr_3 [i_1])))) >= ((((((arr_7 [i_1] [i_1] [0]) / var_10))) ? (arr_0 [i_2] [i_2 + 2]) : var_2))));
                }
            }
        }
        arr_13 [i_1] = ((!(arr_7 [5] [5] [i_1])));
        arr_14 [i_1] [i_1] = var_13;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_17 = (4178827335 >= 2841710549);
        var_18 = (((arr_15 [i_4]) ? (arr_0 [i_4] [i_4]) : (arr_15 [i_4])));
        var_19 = (((arr_1 [i_4]) != (arr_16 [i_4])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_19 [i_5] = var_2;
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_20 = (max(var_20, ((max(((((arr_27 [i_7] [i_6 + 1] [i_5] [i_5]) >> (((arr_27 [i_8] [i_6 + 1] [i_6 + 1] [i_6 + 1]) - 235))))), (-2147483647 - 1))))));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_21 = (arr_25 [i_5] [i_5]);
                            var_22 = (arr_27 [i_5] [i_6] [i_7] [i_9]);
                        }
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            arr_34 [i_5] [i_6] [i_7] [i_8] [i_10] = ((!(((-2147483647 ? ((((arr_26 [i_5] [i_6 - 1] [i_7] [i_6 + 1]) != (arr_24 [6] [9])))) : var_13)))));
                            arr_35 [i_5] [11] [i_7] [21] [i_7] = var_8;
                        }
                        var_23 = (max(var_23, ((255 << (((max(114688, (!2147483647))) - 114670))))));
                    }
                }
            }
        }
        var_24 = -var_11;
        var_25 *= ((~(max((arr_29 [i_5] [3] [i_5] [i_5] [i_5]), (arr_29 [9] [i_5] [i_5] [i_5] [0])))));
    }
    var_26 = (((((((var_10 ? var_0 : 3726567939240553913)) <= ((var_8 ? var_7 : var_8))))) >> ((((var_10 ? var_0 : var_10)) - 198))));
    var_27 = -var_9;
    var_28 = ((((var_1 ? 255 : ((4178827330 ? 2147483647 : 255))))) ? (-2147483647 - 1) : 14336);
    #pragma endscop
}
