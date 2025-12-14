/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 - 1] [i_0] = (((arr_0 [1] [i_0]) <= ((~(arr_2 [i_0 + 2])))));
        var_11 = ((((min((arr_3 [i_0]), ((var_1 ? 1 : (arr_3 [i_0])))))) ? ((~(arr_3 [i_0]))) : 242));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_12 = (min(((max(12, 3838099585789178138))), ((((1 ? -2147483623 : 1)) > (arr_8 [i_1 - 1])))));
        var_13 = (max(var_13, 1));
        var_14 = (max(var_14, (((max((arr_2 [i_1 - 1]), 1))))));
        var_15 = (max(var_15, (((!(13046357265736623126 / 13817249847421266496))))));
    }

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_16 = (((arr_10 [i_2 - 2] [i_2 - 2]) ? 1 : ((14608644487920373461 ? var_10 : (arr_10 [i_2 - 2] [i_2])))));
        var_17 = (max(var_17, ((((arr_10 [i_2 - 2] [i_2 - 2]) ? (((arr_10 [i_2 + 1] [i_2 + 1]) ? (arr_10 [i_2 - 2] [i_2 + 1]) : 1)) : ((-(arr_10 [i_2 - 1] [i_2 - 1]))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_2] [i_4] = (arr_14 [i_4] [i_2] [i_2] [i_2]);
                    arr_17 [i_2] [i_3] [i_3] = ((-(3838099585789178145 && var_0)));
                }
            }
        }

        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_18 = (min(var_18, (arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            var_19 = (max(var_19, (((((((arr_10 [11] [i_2]) & (arr_10 [i_2 - 2] [i_5])))) ? ((min(((1 ? (arr_18 [i_2]) : var_5)), (~var_3)))) : ((((233 ? 13384456871029210219 : var_4)) | (~254))))))));

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_29 [i_2] [5] [i_6] [i_7 + 1] [12] [i_5] [i_6] = 2147483628;
                            var_20 = (~32);
                        }
                    }
                }
                arr_30 [i_2] [i_5 + 1] [i_2] [9] &= ((max((((~(arr_22 [i_2] [11] [i_5 + 2] [i_6]))), 7493555893506287333))));
            }
            for (int i_9 = 3; i_9 < 24;i_9 += 1)
            {
                var_21 = (max(var_21, (~36408636)));
                arr_33 [i_2] [9] [9] [i_9] = 255;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((~(arr_14 [i_2 + 1] [i_5] [1] [i_5 - 1])))));
                            var_23 = (max(var_23, ((1 ? (arr_13 [i_2 - 1] [i_2 - 1] [i_12]) : 2147483620))));
                            var_24 = (min(var_24, (((~(arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_46 [1] [i_14] [0] [0] [i_10] [17] [i_2] = (arr_27 [i_5 - 1] [i_5] [i_2 - 2] [i_2] [16]);
                            arr_47 [14] [i_14] [i_14] [i_14] [i_14] = var_0;
                            var_25 = (max(var_25, (((arr_41 [1] [i_5 + 2]) ? (arr_41 [2] [i_5 + 2]) : (arr_41 [1] [i_5 + 2])))));
                        }
                    }
                }
                arr_48 [i_2] [i_2] [i_2] = (arr_23 [i_2 - 2] [i_5 + 2] [i_10]);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_55 [i_5 - 2] [i_15] [20] [i_16] = (arr_54 [9] [i_5 + 2] [i_10] [i_15] [i_15]);
                            var_26 = (max(var_26, (((~(arr_51 [i_2] [i_5 - 1] [i_5] [i_2] [i_16] [i_10] [i_2 - 1]))))));
                        }
                    }
                }
            }
            var_27 = (!251);
        }
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        var_28 = ((-7493555893506287315 ? ((11625 ? (arr_52 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) : ((~(arr_10 [i_17] [i_17]))))) : ((-((max((arr_19 [i_17] [1] [i_17]), 1)))))));
        arr_58 [i_17] &= (((arr_13 [i_17] [i_17] [i_17]) ? ((1 ? (((var_2 ^ (arr_11 [i_17])))) : 10953188180203264301)) : (((var_10 ? 1 : 224)))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_29 = (max(var_29, (~247)));
        arr_61 [i_18] = (arr_50 [1] [i_18]);
    }
    var_30 = (max(var_30, var_2));
    #pragma endscop
}
