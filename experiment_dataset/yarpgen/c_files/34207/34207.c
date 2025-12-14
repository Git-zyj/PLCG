/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_9 > var_4)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (arr_5 [20])));
            arr_8 [i_1] [i_1] = (((((((((((arr_2 [i_0] [i_1]) + 2147483647)) >> (var_10 - 1524780948380554875)))) ? ((((arr_3 [i_0] [i_0]) ? var_2 : var_1))) : (4294967295 | 12)))) ? (var_3 >= var_0) : ((((!((((arr_2 [i_1] [i_0]) ? var_11 : var_14)))))))));
            arr_9 [i_1] = (arr_2 [i_0] [i_1]);
            var_17 = (max(var_17, (arr_2 [i_0 + 3] [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] = var_4;
            arr_13 [i_0] = ((~(arr_7 [i_0] [i_2] [i_2])));
        }
        arr_14 [4] = 12;
        var_18 = var_10;
        var_19 = (min(var_19, ((((0 >> 12) ? ((-((var_4 ? var_11 : var_2)))) : -8374049061105681987)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 14;i_7 += 1)
                            {
                                arr_28 [i_5] = var_7;
                                arr_29 [i_5] [i_5] = var_7;
                            }

                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                arr_32 [i_5] [i_4] [i_4 + 2] [i_4] [i_4] [i_5] [i_4] = (arr_26 [i_3] [2] [i_4] [i_5] [i_6] [i_8] [i_8]);
                                var_20 = ((!((!((max(4294967295, 121561209)))))));
                                var_21 = (max(var_21, ((min(var_4, 6)))));
                                arr_33 [i_3] |= ((((min((max(var_8, var_10)), ((max(var_7, var_7)))))) ? ((var_4 ? (max(var_3, var_11)) : (-1 && 2161727821137838080))) : var_0));
                            }
                            var_22 = (min((((var_3 == (arr_18 [i_4 + 1] [2] [2])))), var_1));
                            arr_34 [i_5] = var_7;
                        }
                    }
                }
                var_23 = var_2;
                arr_35 [i_3] [i_4] |= ((((((var_13 != 4250247388) - ((13780 ? -15 : -3190450094362427060))))) && 1834743427));
            }
        }
    }
    #pragma endscop
}
