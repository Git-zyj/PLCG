/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_5 - var_14);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [7] |= arr_0 [i_0];
        var_19 = (arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (-1 + -24);
                                var_21 = (min(var_21, (((~((((max(-21, (arr_0 [i_1]))) != (((((arr_14 [i_2]) && (arr_5 [i_1] [i_0])))))))))))));
                                arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] = max(6529980838855527053, (max((11916763234854024562 / 64756), ((((-2 + 2147483647) >> (6529980838855527053 - 6529980838855527043)))))));
                                var_22 = (((+(max((arr_5 [i_1] [i_1]), var_4)))) | (((((((64165 << (((-11006 + 11028) - 14))))) > ((~(arr_4 [1] [i_0]))))))));
                            }
                        }
                    }
                    arr_16 [2] = (arr_13 [i_1] [i_1]);
                }
            }
        }

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_21 [i_5 - 1] [i_0] = ((((arr_20 [i_5 - 2] [3] [i_0 - 1]) ^ (arr_20 [i_5 - 2] [10] [i_0 - 1]))));
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 = (((8160 || -12743) != ((((((-(-127 - 1))) != (arr_10 [i_7] [i_5] [i_6] [i_7])))))));
                            arr_30 [i_7] [i_5] [i_5 + 1] [i_5] = (((((arr_13 [i_0] [i_0 - 1]) + 2147483647)) >> (((arr_27 [i_0] [i_5] [i_5] [i_7] [i_7]) + 7556241482970084493))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_24 = min((arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
            var_25 = ((((((~(arr_20 [i_0 - 1] [i_9] [i_9])))) ? ((((arr_23 [i_0] [i_0]) >> (var_14 + 23988)))) : (((arr_25 [8] [19]) ? (arr_18 [i_0]) : (arr_12 [i_0 - 1] [i_0 - 1] [i_9]))))));
            arr_33 [1] [i_0] = (((max(var_16, var_15)) >> ((((~(arr_5 [i_0 - 1] [i_0 - 1]))) - 2649048953))));
        }
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_26 = var_16;
        var_27 = (min(var_27, var_11));
        var_28 = ((((1 && (arr_36 [i_10])))));
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                var_29 = (254 * -31529);
                var_30 = 32763;
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            {
                                var_31 = ((18446744073709551592 * (arr_38 [i_11])));
                                var_32 = ((1370 ? ((((((((arr_14 [13]) >= 11))) < (arr_23 [i_11 - 1] [i_13 - 1]))))) : (((arr_10 [i_13] [i_11 + 1] [i_15 + 1] [i_11 - 1]) ? (arr_10 [i_11] [i_11 + 1] [i_15 + 1] [17]) : (arr_10 [13] [i_11 - 1] [i_15 + 1] [7])))));
                                var_33 -= (arr_18 [i_12]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
