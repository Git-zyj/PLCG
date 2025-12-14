/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 13259220512079776712;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = ((((arr_3 [10] [10]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0]))));
            var_16 = 13;
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_3] [i_6] [i_2] = (arr_19 [i_4] [11] [11] [i_5] [i_6] [i_6]);
                                arr_23 [i_2] [i_3] [i_3] [i_6] [i_6] = ((~((-(arr_12 [i_5 - 2])))));
                                var_17 = (((!var_4) * ((var_10 + (arr_14 [i_2] [i_3] [i_4 - 3] [i_5])))));
                            }
                        }
                    }
                    arr_24 [i_2] [i_2] [i_4 - 2] [22] = var_8;
                }
            }
        }
        var_18 = ((~((((arr_1 [19]) && (arr_1 [i_2]))))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_19 = ((+((var_0 ? (arr_12 [i_7]) : (arr_4 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 = (((!(((var_12 - (arr_1 [i_7])))))));
                    arr_32 [i_9] [i_8] [i_9] = var_1;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_21 = var_10;
                                var_22 = var_10;
                                arr_38 [i_7] [i_8] [i_9] [i_9] [i_11] [i_9] = (arr_12 [i_9]);
                            }
                        }
                    }
                    arr_39 [i_9] [i_8] [i_9] = 17835478969367929893;
                }
            }
        }
        var_23 = (min(var_4, ((2147483647 >> (((arr_26 [i_7] [i_7]) - 86))))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_44 [i_12] [i_12] = (((arr_40 [i_12] [i_12] [i_7]) ? ((-6912439793062630087 * (arr_34 [i_7] [i_12] [i_12] [10] [i_12]))) : (-5150792354996560053 / var_2)));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_24 = (((var_10 + 2147483647) << (((((arr_14 [i_15 - 1] [i_15] [i_14 - 1] [i_14]) + 32)) - 17))));
                            var_25 = ((var_13 ? 13137604571861756035 : (arr_26 [i_15 - 2] [i_12])));
                            arr_52 [i_12] [6] [6] [i_12] [i_12] [i_12] = 5150792354996560052;
                            var_26 = ((+(((arr_10 [i_15] [i_13] [i_13]) ? 2899314062101041035 : (arr_9 [i_7])))));
                            arr_53 [i_12] = (((arr_13 [i_7] [i_12] [i_15 - 2] [i_15 - 2]) ? (~2147483647) : var_10));
                        }
                    }
                }
            }
        }
        arr_54 [i_7] = 9356;
    }
    var_27 = (((max(var_0, var_8)) >> (var_10 + 81)));
    var_28 = (((((var_8 ? var_12 : var_8)) + var_8)));
    #pragma endscop
}
