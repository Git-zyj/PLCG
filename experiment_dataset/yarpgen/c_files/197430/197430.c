/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] [i_1] = (arr_1 [i_2] [i_2]);
                            var_15 = (max(var_15, (((((~181) ? (8446337195925536798 && var_5) : (arr_9 [i_3] [i_3] [i_3])))))));
                            var_16 |= ((((arr_2 [i_2] [i_3]) ? (arr_9 [i_1] [i_2] [i_2]) : ((min(var_4, 21))))) & 235);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_17 = var_12;
                            var_18 ^= (~235);
                        }
                    }
                }
                arr_17 [i_0] = var_2;
            }
        }
    }
    var_19 |= -1;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_20 = (~11);
                arr_22 [i_6] [i_6] = ((((((((arr_15 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_8 [i_7] [i_7] [i_6] [i_7]) : 234)) < ((var_0 ? (arr_4 [i_6]) : 1))))) - var_7));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_21 = (arr_9 [i_6] [i_6] [i_6]);
                            var_22 ^= arr_27 [i_8];
                            var_23 ^= arr_6 [i_6] [i_7] [4] [i_6];
                        }
                    }
                }
                var_24 = (max(var_24, (((~(((((1 % (arr_27 [4])))) ? ((var_13 ? var_1 : var_2)) : (var_2 || var_4))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_25 = (arr_15 [i_6] [i_7] [i_7] [i_10] [i_11] [i_11]);
                            arr_33 [i_6] = ((((!var_1) >= (-1840677625 ^ var_13))) ? (!-var_3) : ((var_2 ? var_9 : (var_0 * 234))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_26 += ((-var_8 | (min(1840677625, (arr_43 [4] [4])))));
                                arr_48 [i_12] [7] [9] [i_12] [i_16] [i_15] [5] = var_10;
                                var_27 |= ((348658217 / (arr_36 [i_14] [i_14] [i_16])));
                                var_28 = ((((((arr_34 [i_12 + 1]) ? (arr_45 [i_12 + 1] [i_16 - 1]) : (arr_38 [i_16 + 3] [i_16 + 2])))) ? ((var_13 ? (arr_38 [i_12 + 1] [i_15]) : (arr_38 [i_12 + 1] [i_14]))) : (arr_46 [i_13] [i_13] [i_13] [i_12] [2])));
                                arr_49 [i_14] [i_14] [i_12] [i_15] [i_16] = var_13;
                            }
                        }
                    }
                    arr_50 [i_14] [i_12] [i_12] = (arr_46 [4] [4] [i_14] [i_12] [i_14]);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_29 += (arr_34 [i_13]);
                                var_30 = ((((-3578160786136425736 ? (arr_41 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1]) : (arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [3]))) >= (arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_18])));
                                arr_56 [i_12] [5] [5] [i_14] [i_12] [i_18] = ((!(16563456879136337427 & 235)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
