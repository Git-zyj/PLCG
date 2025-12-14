/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_6);
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -var_14;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = -121;
                        arr_10 [i_0] [1] [i_1] [1] = ((!(arr_5 [13] [i_1] [i_1])));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = var_11;
                    }
                }
            }
            var_17 = ((var_4 ? 1 : (arr_0 [i_0])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_14 [i_4] = (((var_5 & (arr_3 [i_4] [i_4]))) >= var_9);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] = 1;
                            var_18 = (min(var_18, (((arr_4 [i_4] [6]) != var_14))));
                            arr_26 [10] [i_4] [i_5] [i_4] [i_7] [i_4] = (arr_7 [i_4] [i_4] [i_4] [i_7]);
                        }
                    }
                }
            }
            var_19 = (max(var_19, 1327225141));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_33 [i_4] = var_14;
                        var_20 = (min(var_20, ((((arr_27 [i_0] [i_8] [i_9]) ? var_14 : var_10)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        var_21 = var_14;

                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_4] [i_10] [i_11] [i_4] [i_12] = var_9;
                            arr_44 [i_4] [i_0] [i_10] [6] [i_0] [i_0] [i_4] = arr_30 [i_0] [i_0] [i_0];
                            var_22 = var_12;
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_23 -= 4294967295;
                            arr_48 [i_13] [i_4] [i_4] [i_4] [i_0] = (var_14 * -117);
                            var_24 ^= (((arr_17 [2] [i_4] [i_11] [1]) ? var_0 : var_8));
                            arr_49 [i_4] [i_4] [i_10] [i_11] = (+((2147483647 ? (arr_13 [i_13]) : var_13)));
                        }
                        var_25 = (min(var_25, (arr_45 [i_11])));
                        var_26 = (min(var_26, (var_9 < var_8)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    var_27 = (min(var_27, (((var_4 ? (arr_20 [16]) : (arr_34 [i_15]))))));
                    arr_58 [i_14] [i_15] [i_16] [i_15] = ((-(var_13 >= -186775102)));
                    arr_59 [i_16] [i_15] [i_16] = ((var_13 ? (arr_42 [i_14] [i_16] [i_14] [i_14]) : (((2147483647 ? -20 : 1)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_64 [i_14] [i_14] [i_14] [i_18] = var_3;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            {
                                arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_18] = ((((arr_62 [i_20] [i_18] [i_18]) * (arr_38 [i_14] [7] [1] [i_19]))));
                                arr_71 [i_14] [i_17] [i_18] [i_18] [i_18] = (arr_35 [i_18] [i_18] [i_18] [i_18]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            {
                                arr_77 [i_17] [i_18] [i_18] [i_17] [i_17] [i_18] [i_14] = var_9;
                                var_28 |= ((-(((arr_6 [i_14] [i_17] [i_18] [i_21]) ? 1 : var_4))));
                                var_29 = 43;
                            }
                        }
                    }
                }
            }
        }
        arr_78 [i_14] = var_10;
    }
    #pragma endscop
}
