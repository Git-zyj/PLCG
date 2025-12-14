/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (min((var_11 % -var_3), ((1435104093 ? 1971529104 : (-5854905950011492288 ^ 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [4] [i_2] [i_3] [2] [8] &= (~0);
                                arr_14 [2] [i_0] [i_0] [i_1] [i_0] = (((arr_11 [i_2 + 3] [i_2 + 3] [0] [9] [i_3 - 1]) ? (max(299962425416302864, var_1)) : (248 * 7)));
                                var_21 = (((arr_11 [3] [i_3] [i_0] [i_0] [i_0]) ? (((147 ? 2126603638 : 9))) : (max((!23), ((var_0 ? (arr_5 [i_0] [i_0] [i_2]) : var_7))))));
                                var_22 = ((!((((arr_3 [i_0] [i_0]) ^ (!-771030007255646660))))));
                                var_23 = var_8;
                            }
                        }
                    }
                    arr_15 [0] [0] [i_0] = ((+((-29 ? (arr_8 [i_0] [i_0] [i_2] [i_0]) : var_4))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_24 = ((233 & (-37 * 85)));
                                arr_23 [i_0] [i_0] [i_0] = ((-(max(129375372, (~2789985772)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        arr_26 [i_7] = (arr_24 [i_7] [i_7]);
        arr_27 [i_7] = (min((max((16 ^ var_4), (arr_25 [i_7] [i_7 - 1]))), (127 ^ -771030007255646682)));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_25 = (max(var_25, ((max(var_9, ((var_12 - (arr_24 [12] [i_8 + 2]))))))));

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_10] [i_7] = 1920262357;
                            var_26 = ((3766352798 ? -2374704943 : var_10));
                            var_27 = ((~(min(var_16, (arr_28 [i_8] [i_8 + 1] [i_8 + 1])))));
                            arr_41 [12] [i_7] [12] [i_7] [i_7] = ((~(((arr_25 [i_7 + 1] [i_8 + 2]) ? (arr_28 [i_7] [i_11] [i_11]) : 3))));
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_28 = (((var_12 <= (arr_38 [i_7 + 1] [i_7 + 1] [i_9] [i_10] [i_12]))));
                            arr_44 [i_7] [i_7] [3] [3] [i_7] = (((min(((max((arr_36 [i_7] [i_7] [i_7]), (arr_35 [i_7] [i_7] [i_7] [i_7])))), ((15 ? 1953247718 : var_11))))) & ((var_8 ? (arr_28 [i_7] [4] [i_12]) : var_17)));
                            arr_45 [i_7] [i_12] = (var_12 == 94);
                            var_29 = -23;
                        }
                        arr_46 [4] [i_7] [i_7] [i_7] = (max(((((arr_37 [i_7] [i_7 - 2] [i_9]) * var_18))), (((arr_37 [i_7] [i_7 + 1] [14]) ? var_4 : (arr_25 [i_8 + 2] [i_7 - 1])))));
                        arr_47 [i_7] [i_7] = -4423118337645436437;

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_30 = (((((arr_25 [i_7 + 1] [i_8 + 1]) ? (arr_49 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]) : (arr_28 [i_7 - 1] [i_7 - 2] [i_7 - 2]))) ^ var_9));
                            var_31 = ((-var_9 ? (arr_50 [i_10] [i_10] [i_9] [11] [12] [i_8]) : (((-4602257231109977180 | var_5) ? var_18 : (((arr_50 [i_7] [i_7] [i_9] [i_7] [i_13] [i_9]) | var_6))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_32 = (min((max((max(var_9, var_17)), (var_14 && var_18))), var_5));
        var_33 = ((~(((84 | 251) * (var_2 & 0)))));
        var_34 = (arr_36 [i_14] [i_14] [i_14]);
    }
    #pragma endscop
}
