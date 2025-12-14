/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_20 = (arr_0 [i_0] [i_1]);
                var_21 = (arr_5 [1]);
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_22 = ((((arr_10 [i_4 + 3] [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [1] [i_3] [i_4]) : (arr_6 [i_4] [i_3] [i_0] [i_0]))));
                    arr_13 [i_1] = -3966105392996887925;
                    arr_14 [i_0] [i_1] [i_1] = (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_18 [i_1] = ((arr_6 [i_0] [13] [i_0] [i_0 - 1]) ? (arr_10 [i_0] [i_0] [11] [i_0 + 1]) : (arr_6 [i_0 - 1] [i_5] [i_3] [i_0 - 1]));
                    arr_19 [i_5] [i_1] [i_3] [i_1] [i_0 - 1] = (((arr_7 [i_0] [0] [i_0] [i_1]) ? (arr_2 [i_1]) : (arr_7 [i_0] [i_0] [i_0] [i_1])));
                }
                arr_20 [i_1] [i_1] = arr_3 [i_1] [i_1];
            }
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                var_23 = (-var_17 <= ((1053802140 ? (arr_12 [i_1] [15]) : (arr_22 [i_0] [12] [i_6 + 3]))));
                arr_23 [4] [i_1] [i_1] = ((arr_1 [i_0 + 1]) ? (arr_8 [0] [i_6 + 1]) : (arr_21 [i_0] [i_6]));
                var_24 = 62;
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_25 = (i_1 % 2 == zero) ? (((24407 << (((((arr_15 [i_1] [i_1] [i_7]) & -1053802154)) + 1070596012))))) : (((24407 << (((((((((arr_15 [i_1] [i_1] [i_7]) & -1053802154)) + 1070596012)) + 2096934)) - 13)))));
                        var_26 = (arr_11 [i_0 - 1]);
                        arr_29 [i_1] [i_7] [i_7] [i_1] [i_1] = (arr_28 [i_1] [i_1] [i_7] [i_8]);
                    }
                }
            }
            arr_30 [i_1] [1] [i_1] = ((28 ? -var_8 : -var_15));
            arr_31 [i_0 + 1] [i_1] [i_0 + 1] = (46 | 2430475801947541326);
        }
        var_27 = (((((-(arr_15 [4] [i_0 - 1] [i_0])))) ? (arr_25 [6] [6] [i_0 + 1] [i_0]) : ((~(arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [0])))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_28 = ((!(arr_32 [i_9])));
        var_29 = ((66 ^ (arr_34 [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_30 = ((((~(min(var_10, (arr_34 [i_10] [i_10]))))) ^ (((((min((arr_33 [i_10]), 111))) ^ (~221))))));
        var_31 = ((9 ? 1867451766 : (((~(arr_34 [i_10] [i_10]))))));
        arr_38 [i_10] = ((~((((-(arr_33 [i_10])))))));

        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {
            arr_41 [i_10] [i_10] = ((~(30057 + 524272)));
            var_32 = (arr_40 [i_10]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
        {
            arr_44 [i_10] [i_10] = (((arr_34 [i_10] [i_10]) ? (arr_36 [i_10] [i_12]) : (!var_1)));
            arr_45 [i_10] [i_12] = (arr_42 [i_10] [i_10]);
            arr_46 [i_10] = (((arr_35 [i_10] [i_10]) ? (arr_37 [i_10]) : (arr_39 [i_10])));
        }
    }
    #pragma endscop
}
