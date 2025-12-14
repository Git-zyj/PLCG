/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 ^= 0;
    var_18 &= ((((((((1 ? var_9 : 1))) ? var_9 : ((max(var_9, var_15)))))) * var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (min(var_19, 1));
                        var_20 = -22714;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_21 -= ((((((arr_1 [i_3 - 1] [i_3]) ? (((min(-22719, (arr_5 [i_0] [i_4]))))) : (max((arr_8 [i_0]), 0))))) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (22714 <= 1)));
                            arr_15 [i_3] = ((((((22700 ? var_5 : 0)))) ? 22700 : 22700));
                            var_22 *= var_14;
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_23 -= -22704;
                            var_24 = (max(var_24, (((((arr_8 [i_5]) & (arr_1 [i_0] [1])))))));
                        }
                    }
                    var_25 -= ((((~var_3) ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_2]) : (min(26926, 620247521)))));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_0] [i_2] [i_6] &= (((arr_13 [i_1] [i_1] [3] [i_1] [2]) + (((1 >> (min(1, var_13)))))));
                        arr_21 [i_0] [10] [i_2] [i_6] = arr_3 [i_1];
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, var_4));
                        var_27 = (arr_11 [i_2] [i_7 - 2] [i_7 + 1] [i_7] [i_7 + 1]);
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_1] [i_1] [3] [i_8] = ((((((arr_14 [i_1] [i_1] [i_8 + 1] [i_8 - 2] [i_8 - 1]) ? 1 : 36))) ? 4043684439548248923 : ((var_12 + ((var_14 ? (arr_24 [i_0] [1] [9] [i_8 + 1]) : (arr_1 [i_0] [i_1])))))));
                        arr_30 [i_0] = ((max(((0 / (arr_14 [i_0] [i_0] [i_2] [i_8 - 1] [10]))), -36)));
                        var_28 ^= arr_7 [i_0] [i_1] [i_2] [i_8];
                        var_29 = ((max((max(var_13, var_0), ((min(10182, 22713)))))));
                        var_30 = (max(1, -22704));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_36 [1] [1] [i_2] [i_2] [i_9] [i_10 - 1] = (1 && 70);
                                var_31 -= -18751;
                                arr_37 [6] [i_1] [i_1] [1] [i_9 + 1] [i_10 - 1] = 9223372036854775807;
                            }
                        }
                    }
                    var_32 = (max((arr_26 [i_0] [i_1] [i_2] [1] [i_2]), (var_2 >> 1)));
                }
            }
        }
    }
    #pragma endscop
}
