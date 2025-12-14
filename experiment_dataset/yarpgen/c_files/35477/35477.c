/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_4 ? var_12 : 31)));
    var_16 += var_4;
    var_17 -= (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (min((((var_8 ? var_12 : (arr_6 [i_1 + 1])))), ((var_5 ? ((var_8 ? var_1 : var_8)) : var_12))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_4] [15] [i_2] [i_4] = var_0;
                                var_19 = 14136;
                            }
                        }
                    }
                    var_20 = var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_21 = (min(var_6, (((arr_14 [i_6] [i_5]) ? (~var_10) : (((1 ? -12703 : 75007411)))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((!(((-(min(23894, 75007398))))))))));
                                var_23 -= 4219959884;
                                var_24 += 8259;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_25 = (((((var_9 ? var_7 : 3913))) ? var_3 : (((var_2 ? 4219959876 : (arr_2 [i_5] [i_5] [i_5]))))));
                        var_26 = (max(var_26, (((5451 ? (arr_19 [i_10 + 1] [i_10 - 2]) : var_1)))));
                        arr_34 [i_5] [i_6] [i_6] [i_10] [i_6] [i_5] = (((((var_7 ? var_3 : 15127868634783162507))) ? 4219959898 : 7672774357118371991));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_27 = var_1;
                        var_28 = ((var_9 ? (arr_2 [i_5] [2] [3]) : var_3));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_29 += ((var_4 ? var_4 : (arr_13 [i_10 - 1])));
                            var_30 ^= ((var_13 ? var_8 : (arr_27 [i_5] [i_14] [i_10] [i_10 - 1] [4] [10])));
                            arr_44 [i_13] [i_13] = var_0;
                        }

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_31 = (max(var_31, (arr_16 [i_5] [1])));
                            var_32 = (max(var_32, var_8));
                        }
                    }
                    arr_47 [3] [i_5] |= ((-1756441900 ? ((var_5 ? 7758890205962487473 : (arr_32 [i_5] [i_6] [i_6] [i_10]))) : var_4));
                }
            }
        }
    }
    #pragma endscop
}
