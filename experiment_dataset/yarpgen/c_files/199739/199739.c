/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(((var_0 ? var_15 : var_15)))))));
    var_19 = var_10;
    var_20 = (~var_3);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = ((-((-((215 ? 201 : 1))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = (((((~(arr_3 [i_0])))) ? (arr_4 [i_2]) : (arr_1 [i_0])));
                    var_22 = ((((!(((-(arr_3 [i_0])))))) ? (arr_1 [i_0]) : (~6)));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_23 = (arr_8 [i_3] [i_5]);
                    var_24 = (max(var_24, (arr_5 [i_3] [i_4 - 4] [i_5])));
                    var_25 = (arr_12 [i_3] [i_3]);
                }
            }
        }

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_26 = (arr_4 [i_6 + 1]);
            var_27 = (arr_0 [i_3] [i_3]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_28 = (((!((((arr_12 [i_3] [i_6 + 1]) ? (arr_21 [i_7] [i_3 - 1] [i_3 - 1]) : (arr_10 [i_6] [i_8])))))) ? (((arr_7 [i_6 + 1] [i_6 + 1]) ? (arr_23 [i_3] [i_6] [i_7] [i_8] [i_3] [i_3]) : ((-(arr_14 [i_3] [i_7] [i_7]))))) : (((((127 ? -97 : -18))) ? ((~(arr_0 [10] [i_6]))) : (arr_15 [i_3]))));
                            var_29 = ((~(arr_17 [1] [i_7] [i_9])));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        arr_34 [1] [i_3] [i_11 + 1] [1] = (arr_17 [i_3] [1] [i_11 - 1]);
                        var_30 = 184151963;
                        var_31 = (((arr_1 [i_3]) ? (((((~(arr_9 [i_3])))) ? (arr_25 [i_3] [i_10] [1] [5] [i_3] [5]) : (arr_12 [i_12] [i_3 + 3]))) : ((((((arr_1 [i_3]) ? (arr_32 [i_3] [i_10]) : (arr_28 [1])))) ? ((((arr_30 [i_12] [i_10]) ? (arr_5 [i_3] [1] [1]) : (arr_13 [i_12])))) : (((arr_11 [i_3]) ? (arr_32 [i_3] [i_3]) : (arr_12 [i_3] [i_10])))))));
                    }
                }
            }
            var_32 = (-(((arr_16 [i_3] [i_3] [i_3]) ? (arr_32 [i_3] [i_3]) : (((arr_5 [12] [i_10] [i_10]) ? 2617149448 : 3042401384)))));
        }
        var_33 = (arr_9 [i_3]);
    }
    var_34 = var_3;
    #pragma endscop
}
