/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 ? ((min(var_2, var_6))) : var_2);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, var_8));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, var_2));
                        var_15 = (min(var_15, -var_8));
                        arr_13 [5] [i_1] [i_2] [i_3] = ((18446744073709551615 >= (~var_9)));
                        var_16 = -var_7;
                    }
                }
            }
            var_17 ^= ((arr_2 [i_0] [i_1]) >= (arr_3 [i_0] [i_0] [i_1]));
        }
        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_4] [1] = (((((arr_8 [4] [i_4 - 2] [9] [i_4 + 1]) - var_6)) | ((29375 ? 57 : 62))));
            var_18 = ((~(arr_6 [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_19 [i_0] [i_5] [i_0] = ((var_10 ? var_11 : (((arr_1 [i_0] [0]) - (arr_5 [i_0])))));
            var_19 = (min((((((208 ? var_9 : var_9)) >= (((var_1 | (arr_3 [i_0] [4] [i_5]))))))), (arr_2 [8] [i_5 + 1])));
            arr_20 [i_0] [i_5] = ((((-(arr_3 [i_5 - 2] [i_5 - 1] [i_0])))) ? (arr_3 [i_5 - 2] [i_5] [2]) : (!var_9));
            var_20 = (((((arr_5 [i_0]) ? (arr_1 [i_0] [i_5 - 1]) : var_0))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_21 = -118;
                        var_22 ^= (((arr_17 [i_6 - 1] [i_6 - 2]) | (arr_3 [i_7] [i_6 - 1] [i_7])));
                        var_23 = (min(var_23, 223));
                    }
                }
            }
            var_24 = ((18446744073709551596 ? 65535 : ((var_1 ? (arr_10 [i_0] [5] [i_0] [i_0] [i_0] [8]) : (arr_6 [8] [i_6 - 2] [i_6] [i_6 - 1])))));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_25 = (-(((~var_0) ? (!var_1) : (arr_31 [i_10] [i_11]))));
                        var_26 = (arr_9 [i_0] [i_11] [i_11 + 1] [i_11 + 1] [i_11]);
                    }
                }
            }
        }
        arr_36 [i_0] = (max(((~(arr_22 [i_0] [i_0] [i_0]))), ((max((arr_22 [i_0] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0]))))));
        var_27 ^= (min((arr_29 [4]), (((((62 ? (arr_27 [i_0] [6] [i_0] [i_0] [i_0] [i_0]) : 62))) ? var_11 : (((arr_24 [i_0]) - 1))))));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_28 = ((!((((arr_45 [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]) ? var_11 : ((var_9 ? var_2 : 0)))))));
                            var_29 = ((~(arr_44 [i_14 - 1] [i_14] [i_14 - 2])));
                        }
                    }
                }
                arr_47 [i_12] [10] [i_13] = (((-(arr_40 [18] [i_12]))));
                var_30 = (~618814326);
            }
        }
    }
    #pragma endscop
}
