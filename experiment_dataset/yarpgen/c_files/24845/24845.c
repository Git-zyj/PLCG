/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((54 ? 54 : 26)));

                for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_17 += (((((var_14 ? var_1 : -6553))) ? -7 : var_2));
                    arr_9 [i_1] [i_1] = -var_14;
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_18 &= (((183 ? 54 : (arr_3 [i_3] [i_3 + 1]))));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [12] [i_3] [i_3] [i_1] = (arr_6 [i_1] [i_1] [i_4 + 1] [i_1]);
                        var_19 = (((!(((72057593903710208 ? 1 : 2650))))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_17 [i_1] [i_1] = ((50 ? -206306362 : 4294967293));
                            var_20 = ((((((arr_13 [i_1] [i_0 - 1] [i_3] [i_0 - 1] [i_4 + 1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_4 + 1]) : var_13))) ? ((var_7 ? (arr_13 [i_1] [1] [i_0 - 1] [i_4 + 3] [i_4 + 2]) : var_2)) : (((var_13 ? (arr_13 [i_1] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_4 + 3]) : (arr_13 [i_1] [1] [1] [2] [i_4 + 4]))))));
                        }
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_21 ^= ((-206306362 ? var_14 : var_9));
                        var_22 = (min(var_22, (arr_11 [i_3] [i_6 - 2] [i_6 + 2] [i_6 + 2])));
                        arr_22 [i_0] [i_1] [i_1 - 1] [i_3] [i_1] [i_6] = ((+(((~206306361) ? ((32 ? 37787105 : 11373347952612881737)) : var_6))));
                        arr_23 [i_0 - 1] [i_1] [i_3] [i_1] = (((-var_8 ? -33 : (arr_13 [i_1] [i_3 + 1] [i_1 + 3] [i_1] [i_1]))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((arr_2 [i_8 + 2]) ? 65535 : -2138953065)))));
                                var_24 = 6105;
                            }
                        }
                    }
                    var_25 = (min(var_25, 103));
                }
                /* LoopNest 3 */
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((arr_11 [i_0] [i_10] [i_11] [i_12 + 2]) ? var_5 : (arr_11 [i_12 + 2] [1] [i_0 - 2] [i_0 - 2]))))));
                                var_27 = (max(var_27, (!var_0)));
                                var_28 = ((-(~-16)));
                            }
                        }
                    }
                }
                arr_37 [i_1] = ((~((var_11 ? var_2 : var_2))));
            }
        }
    }
    var_29 = var_1;
    #pragma endscop
}
