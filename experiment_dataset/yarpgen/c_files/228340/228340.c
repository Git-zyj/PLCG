/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1 - 1] [i_2] [i_2] = 63;

                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_11 = 5;
                        var_12 = (((((~(arr_5 [i_1 + 2])))) ? 1948 : ((~(arr_9 [i_1] [i_1 + 1] [i_1 + 1])))));
                        arr_15 [i_4] &= (arr_8 [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_2] = ((~(((!((var_4 != (-32767 - 1))))))));
                        var_13 = -25749;
                        arr_20 [i_2] = (max(((((-1 > (arr_18 [i_5] [i_3] [i_2] [i_1]))) ? (arr_16 [i_1 + 1] [i_1 + 3] [i_1 - 1]) : (arr_11 [i_5] [i_2] [i_5] [i_5]))), var_8));
                        var_14 = (min(var_14, (((((((~(arr_6 [i_1 + 1])))) ? ((25743 ? (arr_7 [i_5]) : (arr_11 [i_1] [i_5] [i_3] [i_5]))) : 32537)) ^ ((-(arr_11 [i_1 - 1] [i_5] [i_1 + 4] [i_5])))))));
                    }
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        var_15 = (max((arr_17 [i_1] [i_3] [i_2] [i_2] [i_2] [i_1]), ((((arr_5 [i_1 + 4]) ? 44617 : 18380)))));
                        arr_24 [i_2] [i_2] [i_3] = var_0;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_16 += (32767 || 35467);
                        var_17 = (min(var_17, 1649804678));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_2] [i_2] [i_2] [i_9] [i_9] [i_2] [i_2] = (((arr_9 [i_9] [i_2] [i_1]) <= (arr_17 [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 3] [i_9 - 2] [i_9 - 3])));
                                var_18 = (min(var_18, (arr_13 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9])));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (((var_9 ? (!-32767) : var_6)));
        arr_32 [i_1] = (((((~(arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 - 1])))) ? ((4192256 ? (arr_13 [i_1] [i_1 + 4] [i_1 + 4] [i_1] [i_1]) : 537794984)) : ((8 | (arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1])))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_37 [i_10] = (((0 ? (arr_16 [i_10] [i_10] [i_10]) : ((var_3 ? 16607 : 32398)))));
        var_20 = (min(var_20, (((-(arr_21 [i_10] [i_10]))))));
        var_21 = 448;

        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            var_22 = 1649804659;
            var_23 = ((-(((arr_6 [i_11 - 1]) ? (arr_7 [i_10]) : 8906))));
            var_24 = (((((((arr_39 [i_11]) ^ (arr_13 [i_11 + 1] [i_10] [i_11 - 1] [i_10] [i_10]))) | ((var_3 ? var_2 : (arr_39 [i_10])))))) ? (arr_26 [i_10] [i_10] [i_11 - 2] [i_11 + 1]) : (((((var_6 ? var_3 : 65524))))));
            var_25 = (arr_8 [i_10]);
            var_26 = (min(var_26, ((((arr_38 [i_10]) ? (((~(arr_40 [i_10])))) : (var_5 * 8192))))));
        }
        var_27 = (max(((((arr_22 [i_10]) ? 1859859606 : (arr_28 [i_10] [i_10] [i_10] [i_10])))), (max((arr_22 [i_10]), 16045))));
    }
    var_28 = var_4;
    #pragma endscop
}
