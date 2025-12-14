/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 *= (((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : 0)) <= 0));
        arr_3 [i_0] = -5860466143655663189;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] = ((!(((-20 ? var_11 : -122)))));

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_15 = 133;
                            var_16 = -var_3;
                            var_17 = (max(var_17, var_4));
                            arr_16 [i_0] [i_1] = ((var_10 ? (arr_8 [i_2 + 2] [i_2 - 3] [i_1]) : (arr_8 [i_2 + 3] [i_2 - 3] [i_1])));
                            var_18 &= 65535;
                        }
                    }
                }
            }
            var_19 = ((71 ? 1 : var_12));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            arr_20 [i_5] [i_0] = ((!(arr_8 [6] [7] [i_5])));
            var_20 = (((arr_14 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5]) ? (arr_14 [i_5 - 1] [i_5 + 1] [9] [i_5] [i_5 - 1]) : (arr_14 [i_5] [i_5 + 1] [i_5] [1] [i_5 + 1])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 = (((arr_9 [4] [10] [i_6] [0] [i_5]) ? var_7 : (arr_22 [i_0] [i_5 + 1] [i_5])));
                            arr_31 [5] [3] [i_6] [7] [i_5] = ((-4 ? 14578076442835895847 : (arr_22 [i_5] [i_5] [i_5])));
                            var_22 = (((arr_5 [i_8]) ? (arr_10 [i_5 + 1] [i_5] [i_5] [0] [15] [i_5 - 1]) : (arr_10 [i_0] [i_5] [i_5 - 1] [i_7] [i_8] [i_7])));
                        }
                    }
                }
            }
            var_23 = (max(var_23, ((((~(arr_2 [i_0] [i_0])))))));
            arr_32 [i_5] = (i_5 % 2 == 0) ? ((((93 > var_4) >> (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]) - 1201650246))))) : ((((93 > var_4) >> (((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]) - 1201650246)) - 292338986)))));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_40 [i_9] = (arr_38 [i_10 + 2] [i_9] [i_9] [i_0]);
                        var_24 = ((-(arr_23 [i_9 + 1] [i_10 - 1] [i_11 + 1])));
                        var_25 = 2743665875;
                        arr_41 [i_9] [i_9 - 1] [14] [i_9] [i_9 - 1] = ((arr_13 [i_9 + 1] [i_11 + 3] [10]) ? var_6 : (arr_13 [i_9 - 1] [i_11 + 3] [i_9 - 1]));
                        var_26 &= (0 != 10);
                    }
                }
            }
            var_27 = (!var_7);
        }
        for (int i_12 = 2; i_12 < 14;i_12 += 1)
        {
            var_28 = 158;
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            var_29 = 52;
                            var_30 ^= (((arr_30 [i_15 - 2] [i_12 + 1] [i_13] [i_15 - 2] [i_15]) ? (arr_30 [i_15 - 2] [i_12 + 1] [11] [i_14] [i_15 - 2]) : var_5));
                        }
                        for (int i_16 = 3; i_16 < 13;i_16 += 1)
                        {
                            var_31 = 185;
                            arr_55 [i_13] [i_13] = (((arr_29 [i_12 - 1] [4] [12] [i_13 + 1] [i_16 - 3] [i_16]) > (arr_17 [i_12] [i_13 - 1] [i_12])));
                            var_32 = ((2953074633 ^ ((((9011466193191400971 || (arr_35 [i_16] [i_12 + 1])))))));
                        }
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            var_33 = (max(var_33, (((-(arr_13 [i_12 + 2] [i_12 + 2] [i_17]))))));
                            var_34 = 86;
                        }
                        var_35 = 1;
                    }
                }
            }
            var_36 = (!47265);
            var_37 = (max(var_37, ((((arr_45 [i_0] [i_12] [14]) * 3556789526)))));
        }
    }
    var_38 = (max((((((min(var_1, var_3))) ? (var_6 / var_0) : ((max(233, var_8)))))), (((min(-1209870339, var_3)) << (var_4 + 99)))));
    #pragma endscop
}
