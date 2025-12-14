/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? (arr_2 [1] [19]) : (arr_2 [15] [i_0])));
        arr_5 [i_0] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_12 [17] [i_1] [13] [1]) ? (arr_14 [i_0] [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_1 - 1] [1]) : (var_11 || 41)));
                                var_17 &= 1;
                                arr_15 [i_0] [i_1] [i_3 - 1] [11] [i_4] = ((((0 ? (arr_8 [i_3] [0]) : (arr_13 [i_0] [i_1] [i_2 - 1] [7] [i_3] [i_3] [12]))) < 29669));
                                var_18 = (arr_10 [i_1 - 1] [i_1 - 1] [i_2 - 1]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2 - 1] = ((var_9 ? ((((arr_1 [1]) || var_6))) : (arr_13 [6] [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_2] [5])));
                    var_19 = (max(var_19, (arr_14 [i_1 + 1] [i_1] [11] [i_1 - 1] [14] [i_1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_24 [17] [i_5 - 1] [7] [i_6] [i_0] = var_10;
                        arr_25 [i_6] = ((var_15 ? var_9 : (arr_7 [i_5 - 1] [i_5 + 1] [i_5 - 1])));
                        var_20 = ((var_11 < ((((arr_12 [7] [2] [7] [i_7]) ? 330719508 : (arr_8 [i_0] [i_5]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_21 = (min((max((arr_1 [i_8]), (arr_22 [i_8] [8] [i_8] [12] [i_8]))), 0));
        arr_28 [15] [10] = ((((((((var_8 ? var_5 : var_9))) ? (((arr_26 [i_8]) ? (arr_21 [10] [11] [11] [3]) : (arr_20 [13] [i_8] [i_8]))) : (arr_18 [i_8] [i_8])))) || (((var_0 ? (arr_26 [12]) : (((arr_26 [i_8]) ? (arr_21 [i_8] [i_8] [i_8] [i_8]) : var_14)))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [1] [i_8] [i_11] [i_8] [i_8] = (min(var_9, (max(99, (((arr_0 [i_8] [0]) >> 0))))));

                        for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_40 [16] [i_9] |= (arr_9 [10] [10] [i_11]);
                            var_22 = (((((((var_2 ? -1 : (arr_12 [18] [15] [i_10] [i_8])))) ? (arr_14 [10] [1] [i_12] [10] [i_9] [i_11]) : (((arr_36 [17] [i_10] [i_11] [i_12]) ? (arr_38 [i_11] [1] [i_11] [i_10] [8] [i_11]) : 0)))) < (((var_1 ? (((arr_1 [i_9]) ? 255 : 193)) : (arr_39 [i_12 - 1] [i_12 - 1] [7] [i_11] [1]))))));
                            var_23 = (max(var_23, ((((((((((arr_12 [1] [10] [10] [i_12 + 1]) >= var_8))) % ((var_8 ? (arr_13 [6] [i_11] [i_10] [i_10] [i_10] [18] [i_8]) : (arr_34 [i_8] [i_8] [i_10] [i_11])))))) ? ((max(1, 0))) : 3)))));
                        }
                        for (int i_13 = 4; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, var_11));
                            arr_45 [i_8] [i_8] [i_11] [15] [i_13] = (max(((max((arr_34 [i_13 + 2] [i_13] [18] [i_13 + 1]), (arr_34 [i_13 - 3] [i_13 - 4] [8] [i_13 + 1])))), ((var_11 * (((arr_11 [i_8] [12] [i_11]) * (arr_26 [i_8])))))));
                            var_25 = (min(var_25, (((((((arr_14 [i_13] [i_13 + 2] [6] [1] [i_13 - 2] [i_13 - 2]) ? (arr_13 [i_13] [i_13 + 2] [i_13] [1] [7] [i_13 - 2] [1]) : 1))) ? (((arr_14 [i_13 + 2] [i_13 + 2] [4] [18] [13] [i_13 - 2]) ? (arr_13 [19] [i_13 + 2] [i_13 + 2] [i_13] [i_13] [i_13 - 2] [1]) : (arr_13 [12] [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 4]))) : (62 < 1))))));
                        }
                    }
                }
            }
        }
        arr_46 [i_8] = ((((arr_36 [i_8] [i_8] [15] [i_8]) ? (arr_36 [17] [i_8] [i_8] [i_8]) : (arr_36 [i_8] [i_8] [19] [i_8]))));
        var_26 = (min(var_26, (var_4 || var_3)));
    }
    var_27 = ((((max(0, ((0 ? var_15 : var_4))))) ? (max(((var_5 ? var_0 : var_13)), ((var_2 ? 0 : var_15)))) : ((max(var_12, (var_7 < var_0))))));
    #pragma endscop
}
