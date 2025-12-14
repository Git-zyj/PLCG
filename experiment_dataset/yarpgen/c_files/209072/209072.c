/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 117));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = 1;
                                arr_13 [20] [i_1] [i_1] [i_3 - 1] [i_0 - 2] = ((((arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) && (arr_5 [i_3 + 1] [i_0 + 1]))));
                            }
                        }
                    }
                    var_17 = (max(var_17, (1 | 1)));
                    var_18 = (max(var_18, var_2));
                    arr_14 [i_0] [i_0] [i_0] [i_0] |= (arr_9 [i_0] [14] [i_0] [i_0] [i_2] [i_2]);
                    var_19 = (max(var_19, (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 1] [i_0] [i_0 - 2])));
                }
            }
        }
        var_20 = (min((max(var_0, -31285)), ((((arr_8 [i_0] [i_0] [i_0] [i_0 - 2]) ? var_9 : (arr_7 [8]))))));
        arr_15 [8] = 63;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_16 [i_5] [i_5])));
        arr_19 [14] = (arr_4 [i_5] [i_5] [13]);
        var_22 = (max(var_22, var_5));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 = var_0;
                        arr_29 [1] [1] [1] [1] [i_6] [i_7] = -var_9;
                        var_24 -= var_2;
                        arr_30 [1] [i_6] [i_6] [i_8] = var_3;
                        var_25 -= 116;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_46 [i_11] [i_9] [1] [i_12] [i_13] [16] [16] |= (!1);
                                var_26 = (min(var_26, (27943 < 140)));
                            }
                        }
                    }
                    arr_47 [i_9] [i_9] = (arr_3 [i_9]);
                    var_27 = (arr_27 [i_9] [i_10] [i_10] [i_10]);
                    arr_48 [i_9] [i_9] [i_9] = (arr_8 [i_9] [21] [i_10] [i_10]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        var_28 = (min(var_28, var_0));
                        arr_58 [i_9] [i_14 - 1] [i_9] [i_15] [i_14 - 1] = ((-(arr_42 [i_14 - 1] [i_9])));
                    }
                }
            }
        }
        var_29 = (!var_1);
        var_30 = (arr_28 [i_9] [10] [i_9]);
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
    {
        var_31 = (((((arr_17 [i_17]) >= (arr_17 [i_17]))) ? (min(var_14, (var_13 & var_4))) : (max((239 & -20283), (var_13 % var_14)))));
        var_32 = ((var_3 ? (arr_56 [i_17] [i_17] [i_17]) : (max((arr_1 [i_17]), (((arr_53 [i_17] [i_17]) ^ (arr_55 [6] [i_17] [i_17])))))));
        arr_62 [i_17] = ((((((((arr_18 [i_17]) ? var_2 : (arr_5 [i_17] [i_17]))) < var_11))) & (((var_14 ? var_5 : 1)))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 14;i_19 += 1)
            {
                {
                    var_33 = ((!(arr_38 [i_17] [i_17] [1] [i_17])));
                    arr_70 [i_17] [i_18] [i_19] = (((((arr_67 [i_19]) / (arr_67 [i_19]))) ^ (arr_67 [i_19])));
                    var_34 ^= (max(-1785962496, (min(var_11, (arr_51 [i_19 + 1] [i_18] [i_17])))));
                }
            }
        }
    }
    var_35 = ((var_13 ? ((139 >> (1785962518 - 1785962510))) : ((((20283 ? var_11 : var_6)) | 0))));
    #pragma endscop
}
