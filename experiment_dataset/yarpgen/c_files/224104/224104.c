/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = 511345874;
            arr_6 [i_0] [i_1] = (((511345874 & ((min(30201, -30214))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = 0;
            var_21 = ((79 ? 177793953 : 1));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_22 &= (((arr_4 [i_3]) ? 0 : 51622));
        var_23 ^= 1;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_21 [i_5] = (((min(((4 ? (arr_7 [i_4]) : (arr_4 [i_4]))), var_1)) >> (((max((((arr_4 [i_5]) << (30223 - 30202))), ((var_5 ? -30201 : var_6)))) - 23068657))));
                    var_24 &= (((min((arr_3 [i_4] [i_4]), 3553540274607224078))) ? (((93 < var_11) ? (~-21) : (arr_15 [i_6] [i_5] [i_4]))) : var_16);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_5] [i_6] [i_5] |= (max(1, 25277));
                        arr_26 [i_7] [i_6] [i_6] [i_4] &= ((((((4 ? (-2087952057 / 51622) : ((0 ? -74 : -30229)))) + 2147483647)) << ((((((-(arr_1 [i_6] [i_7]))) + 469927934)) - 12))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_25 -= ((21 ? (arr_30 [i_9 - 1] [i_9 - 1] [12] [i_9 - 1] [i_6]) : (arr_30 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_6])));
                            var_26 = (max(var_26, ((((arr_18 [i_8] [i_9 - 1] [i_9] [i_9]) ? 109 : -64)))));
                            var_27 += (((((555683588 ? 1 : 511345892))) ? -1126056960 : ((511345891 ? (arr_20 [i_8] [6] [i_5] [i_4]) : var_1))));
                            var_28 -= 1836868355;
                        }
                        arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((2087952057 << (((((arr_18 [i_8] [i_6] [i_5] [i_4]) + 40)) - 1))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_38 [i_10] [i_6] [i_6] [i_5] [13] [i_4] = (((arr_2 [i_10]) ? ((max((arr_32 [i_4] [i_4] [i_4] [13] [i_4]), (arr_32 [i_10] [i_6] [i_6] [i_5] [i_4])))) : ((-2087952057 & (arr_2 [i_4])))));
                        var_29 = ((-37 ? ((-(arr_13 [i_10] [i_6]))) : var_18));
                    }
                    arr_39 [i_5] [i_6] = (((35 & 194472882) ? (min(1881595553031107576, -11257)) : -25));
                }
            }
        }
        var_30 &= -91360536;
    }
    var_31 = ((-(!var_15)));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_42 [i_11] [1] = 511345892;
        arr_43 [i_11] [i_11] = 2087952031;
    }
    var_32 = (max(var_32, ((((((108 ? 76137916 : -82))) ? var_6 : (~105))))));
    #pragma endscop
}
