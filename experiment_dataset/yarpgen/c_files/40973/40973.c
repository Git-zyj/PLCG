/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (-7795309502579873644 - 2715258027);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 35115652612096;
        var_20 = (min(var_20, ((((((arr_0 [i_0] [i_0]) - 18446708958056939503)) != 115)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_21 = (arr_0 [i_1] [i_3]);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 |= (((arr_6 [i_3 - 1] [i_3 - 1] [i_3]) ? (arr_6 [i_3 + 2] [i_3 - 1] [i_3]) : (arr_6 [i_3 + 1] [i_3 - 1] [i_4])));
                        arr_13 [5] [i_2] [i_2] [i_3 - 1] [i_4] = ((!(arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        arr_14 [i_1] [i_1] [10] = ((((5113 ? 18446708958056939516 : (arr_11 [i_1] [4] [4] [i_1] [i_1] [i_1])))) ? (arr_4 [i_1]) : (244 - 449930544655144089));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_23 += ((~(arr_1 [i_1])));
                            var_24 = (min(var_24, ((((arr_1 [i_3 + 1]) ^ (arr_1 [i_3 + 2]))))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_19 [13] [i_4] [i_3] [i_2] [i_1] = ((41203 ? (arr_15 [i_3 - 1] [i_3 + 1]) : (arr_15 [i_3 + 2] [i_3 - 1])));
                            var_25 = (min(var_25, (arr_15 [i_3 + 3] [i_3 + 3])));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, (((32092 ? (arr_22 [i_2] [i_2] [i_3] [i_3 - 1]) : 60422)))));
                            var_27 &= (~0);
                            var_28 = (!(arr_18 [2] [17] [i_3] [i_3] [i_3] [i_3 + 2]));
                        }
                        arr_23 [i_1] [i_1] [8] [i_1] = ((arr_8 [i_1] [i_3 + 2] [i_3]) != (arr_1 [i_3 + 2]));
                    }
                }
            }
        }
        var_29 = (min(var_29, -124));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {
                {
                    arr_28 [14] [i_8] [i_8] [i_8] = 7590;
                    var_30 = ((52589 >> ((((arr_3 [i_8]) != 35123)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_31 += ((+(((arr_9 [i_1] [i_1] [i_1]) - var_0))));
                                arr_35 [i_8] [13] [13] [i_8] [i_8] = (arr_15 [i_9] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        arr_36 [21] = ((~(((arr_8 [i_1] [i_1] [18]) - 18446708958056939516))));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_32 -= -19723;
        var_33 *= var_8;
        arr_40 [i_12] = (min((!var_12), 50));
    }
    #pragma endscop
}
