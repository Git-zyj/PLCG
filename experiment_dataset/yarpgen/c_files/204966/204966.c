/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(60, -11894))) || (!var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = ((-(arr_4 [i_1] [i_0])));
            var_17 ^= ((~(124 / -11901)));
            var_18 = (arr_3 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [13] [13] = (!var_2);
                        var_19 = (((11893 | var_1) | var_3));
                        arr_11 [i_0] [i_0] [i_0] [1] = -5323019037254307968;
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((var_1 ? (arr_1 [i_0]) : var_4));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_20 = ((var_2 ? ((var_13 ? (arr_13 [i_6] [i_5 - 2] [i_4] [i_1]) : (arr_4 [i_4] [i_0]))) : var_10));
                            arr_19 [6] [7] [i_4] [i_5 - 3] [i_5] [i_6] [i_5] = -var_14;
                            var_21 = ((~(((var_10 + 9223372036854775807) >> (var_6 - 349419619)))));
                        }
                    }
                }
            }
        }
        var_22 = ((((((arr_8 [i_0] [21] [i_0] [i_0] [i_0]) < 3)))) - (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        var_23 = ((!(var_10 <= var_2)));
        var_24 = ((-(arr_7 [i_7 + 2] [i_7])));
        var_25 = (arr_5 [i_7] [i_7 + 2]);
        var_26 = (((arr_16 [i_7] [8] [8] [i_7 - 1]) < var_5));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_27 = (min(var_27, (((64758 ? 12948420685758434728 : 844424930131968)))));
                    arr_27 [i_9] = (arr_6 [i_7 + 1] [i_8 + 1]);
                    arr_28 [i_9] [i_8] [i_9] = ((~(var_2 - 17992687298485761870)));
                }
            }
        }
    }
    var_28 = var_3;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_29 = var_3;
                            var_30 = ((~((((arr_33 [i_13] [i_13]) < 64751)))));
                            var_31 = ((+((var_1 - ((((arr_33 [10] [i_11]) ? var_12 : var_14)))))));
                            var_32 = (((var_1 ? var_11 : (arr_36 [i_10] [i_11] [3] [i_13]))));
                            var_33 = (+(((!11909) ? ((var_11 ? var_11 : var_0)) : var_6)));
                        }
                    }
                }
                var_34 = ((((((arr_9 [i_10] [i_11] [i_11] [i_10] [i_10] [i_10]) ? (arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_9 [10] [i_11] [i_11] [i_10] [i_11] [i_10])))) ? (!224) : (((arr_15 [i_10] [i_11] [14]) ? (arr_15 [i_10] [i_11] [i_10]) : var_11))));
                arr_40 [7] [7] [7] = ((((-var_10 * (arr_9 [i_10] [17] [i_11] [17] [i_11] [i_11]))) / var_4));
            }
        }
    }
    var_35 = var_3;
    #pragma endscop
}
