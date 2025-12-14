/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((min(((-32751 ? 19 : var_7)), var_1)))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 = (max(var_13, (65535 ^ -var_3)));
                    var_14 = (max(var_14, (((((~(min(var_6, var_0)))) * -32751)))));
                    arr_10 [i_0] [i_1 + 2] [i_2] = (((-(max(32753, var_2)))));
                    arr_11 [15] [i_1] [i_2] [i_1] = var_8;
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    var_15 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_16 = (var_2 < var_1);
                                var_17 -= 0;
                                arr_19 [2] [i_5] [i_3] [i_4] [10] &= (((arr_3 [i_1 - 3] [i_3 - 1] [i_4]) > (arr_7 [i_1 - 1] [i_3 + 2] [9] [i_3 + 2])));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_1 + 2] [i_0] = (((((-(arr_1 [i_3])))) && var_10));
                    var_18 += (((-8026298087982452446 == var_2) > -4089050171));
                    arr_21 [i_3 - 1] = (arr_18 [1] [i_3 - 3] [12] [i_1 - 2] [1]);
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_19 = -1;

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_27 [i_6] [i_6] [i_6] = (min((min((arr_6 [10] [i_1 + 1] [13] [i_7]), (var_4 < -4425))), -14459));
                        var_20 = (min(var_20, (((+(((((((arr_6 [i_0] [i_1] [i_6] [12]) | (arr_5 [i_0] [5] [i_7]))) + 2147483647)) >> (((((arr_5 [i_7] [i_0] [i_0]) ? 576460752286646272 : 0)) - 576460752286646272)))))))));
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        arr_31 [i_6] [14] [i_6] [15] = ((~((~(var_9 || var_8)))));
                        arr_32 [i_0] [i_1] [i_6] [i_6] [i_8 - 1] = (arr_0 [i_1 - 2]);
                    }
                    var_21 -= ((((max((arr_23 [i_0] [i_1 + 1] [i_6]), (max((arr_6 [i_6] [i_6] [7] [i_6]), 1))))) && ((!(arr_16 [1] [i_1 - 1])))));
                    var_22 += ((((min((arr_13 [i_0]), var_4))) ? (arr_22 [i_6] [1] [1] [i_0]) : (arr_18 [i_0] [i_1] [0] [14] [8])));
                    var_23 &= (min((max((((arr_15 [i_0] [i_1] [i_1] [10]) ? var_10 : (arr_13 [i_0]))), (arr_17 [i_0] [i_1 + 1] [i_6] [i_1 - 1] [i_0]))), ((((((max(var_1, 25400)))) < (max(var_0, (arr_6 [11] [i_1 + 1] [i_6] [14]))))))));
                }
                for (int i_9 = 4; i_9 < 16;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((-((-(arr_41 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_10] [i_11])))))));
                                var_25 = (min(var_25, ((((max((arr_41 [i_1 - 1] [i_1] [i_1] [i_1 - 3] [5]), var_9))) >= (((arr_41 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 3] [i_10]) + (arr_16 [i_9] [i_1 - 3])))))));
                                var_26 = 28;
                                var_27 = (min(var_27, ((min((min(var_4, var_7)), (((arr_25 [i_11] [i_10] [i_9 - 1]) ? var_4 : (arr_6 [i_10] [i_9 - 2] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    var_28 = (+((min((var_9 && var_9), (min(17023, (arr_4 [i_0])))))));
                }
                arr_42 [i_0] [i_1 + 2] [16] = (arr_14 [i_0] [0]);
            }
        }
    }
    var_29 = ((min((var_10 < var_4), var_2)));
    var_30 |= ((((max(var_9, (max(var_7, var_4))))) || (((var_3 ? var_2 : -6627)))));
    #pragma endscop
}
