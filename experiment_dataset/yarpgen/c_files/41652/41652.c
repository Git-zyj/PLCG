/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((((var_5 * var_1) ? var_9 : var_5)) / 1331509699));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((!(arr_2 [i_0 + 2]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (+(((var_0 % var_5) ? var_3 : ((var_6 ? var_1 : var_1)))));
                                var_12 = ((((((-32767 - 1) ^ -2091324692))) ? (var_0 && 2363) : (((arr_7 [i_0] [7] [i_2] [i_3 - 1] [i_4]) & (-2147483647 - 1)))));
                                var_13 = var_1;
                            }
                        }
                    }
                }
                arr_13 [i_0 - 2] [i_1] = (arr_8 [i_1] [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {

                            for (int i_9 = 1; i_9 < 1;i_9 += 1)
                            {
                                var_14 = (((-2147483647 - 1) >= ((((((arr_27 [i_6] [4] [i_8] [i_9 - 1]) ? 43430 : (arr_18 [7])))) ? var_0 : ((~(arr_14 [i_8 - 2])))))));
                                var_15 = var_5;
                                arr_30 [i_5] [i_6] [i_7] [i_5 + 2] [i_7] = min(((var_3 ? (((var_9 && (arr_1 [i_5 - 1] [11])))) : 163777887)), (-2147483647 - 1));
                                arr_31 [1] [i_6] [i_8] = var_3;
                                arr_32 [i_5 + 2] [i_5] [i_5] [i_6] [i_5] [i_5 - 1] = var_2;
                            }

                            for (int i_10 = 4; i_10 < 10;i_10 += 1)
                            {
                                arr_35 [i_10] [i_10] [6] [10] [i_10 - 3] |= 548156189;
                                arr_36 [i_5] [i_6] [i_7] [i_6] [i_10 - 1] = ((8644 ? (((!var_3) ? ((min((arr_19 [i_7] [i_7] [i_10]), var_8))) : var_5)) : (((((arr_18 [1]) ? var_3 : var_9))))));
                                var_16 |= 56907;
                                arr_37 [i_6] = ((((~(arr_9 [i_5] [i_5] [i_5 + 2] [12])))) ? (((arr_33 [i_5] [i_5] [i_5 + 2] [i_8 - 2] [i_8] [9]) ? 32763 : var_1)) : var_7);
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                arr_41 [i_5] [i_6] [11] [i_8 - 2] [i_8 - 2] = ((var_8 ? 32752 : var_7));
                                arr_42 [i_6] [i_6] [i_7] [i_8 - 2] [i_5 + 1] [i_8] [i_6] = ((17287 ? var_0 : ((((8629 & (arr_8 [1] [i_5 + 1] [i_6] [i_8])))))));
                                var_17 = ((!(arr_15 [i_8 + 1])));
                            }
                            arr_43 [i_5] [i_5] [i_5] [i_6] = ((-5107 ? 63173 : 2147483647));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_18 = ((0 ? 44053 : 0));
                            var_19 = -1;
                            var_20 = 12;
                            var_21 = (min(var_21, -29673));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
