/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = 48;
        arr_5 [i_0] [0] = ((~(max((max((arr_3 [i_0 - 2]), 4466988759991420196)), 4466988759991420212))));
        var_19 = ((((((var_12 ? 14706993641499371947 : var_18)) * 117)) < 2020));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_20 = (82150365 - -44);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [1] [i_1] = (arr_6 [i_1 - 3]);
            arr_12 [i_1] [i_1] [i_1 - 1] = -1059313205735582948;
            var_21 = ((-(arr_9 [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_15 [i_1] [i_1] = ((var_17 == (arr_8 [i_1 + 2] [i_1])));
            arr_16 [i_1] = ((~(arr_14 [i_1 - 1] [i_1] [i_1 - 3])));
        }
        arr_17 [i_1] [13] = (min((((arr_14 [i_1 - 4] [i_1] [i_1]) ? 4112807753816448763 : (arr_14 [i_1 - 1] [1] [i_1]))), (arr_14 [i_1 + 2] [i_1 + 2] [i_1 - 4])));
        arr_18 [i_1] = ((-((((-1713955387 ? 18446744073709551615 : 254)) + var_0))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_22 *= var_12;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [1] [i_4] [i_7] [i_7] [10] = (((((arr_21 [i_4 + 2]) + 2147483647)) >> (min(644624908, 25))));
                            arr_32 [i_4] [i_5] [i_7] [18] [0] = 4683;
                        }
                        arr_33 [13] [i_7] [i_7] = ((+(((!82150365) ? 27286 : -82150365))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_41 [i_9] [i_9] = (arr_13 [i_11] [0]);
                    var_23 = (max(var_23, ((max(((-(arr_37 [i_11] [i_10] [i_9]))), (((arr_37 [i_9] [i_10] [i_9]) ? (arr_37 [i_9] [i_10] [i_11]) : (arr_37 [i_11] [i_10] [i_9]))))))));
                    var_24 = (max(var_24, (((~(((((96 ? 4112807753816448763 : 4112807753816448753)) >= 127))))))));
                }
            }
        }
    }
    #pragma endscop
}
