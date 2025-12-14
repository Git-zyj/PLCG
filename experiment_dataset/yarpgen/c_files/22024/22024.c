/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_15, -1838590672392701839));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_17 = (arr_0 [i_0 - 1] [i_0]);
        var_18 *= (~((18446744073709551615 - (arr_0 [i_0] [i_0 - 2]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_1] [i_0]);
                                arr_16 [i_3] = 4135666560;
                                arr_17 [10] [0] [i_2 - 1] [i_2] [i_1] [i_2] [i_4] = (arr_13 [i_2] [i_2] [i_2]);
                                var_19 *= ((!((((arr_2 [7] [9]) << (((arr_0 [i_4] [0]) - 3614427495)))))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_0 - 1] = ((~(((arr_6 [i_0 - 3] [i_0 - 3] [i_2]) << ((((65535 ? -8177654435233178531 : (arr_14 [i_0] [2] [i_0] [i_1] [1]))) + 8177654435233178558))))));
                    arr_19 [i_2 - 1] [i_2 - 1] [i_0] [i_0] = 15853;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    arr_27 [i_6] = ((60 - (arr_1 [i_6 - 1] [i_0 - 2])));
                    arr_28 [i_6] [i_5] [i_6 + 1] [i_6 + 1] = (max(((((arr_9 [i_0 - 4] [i_0 - 3] [i_6 + 1]) && (arr_9 [i_0 + 1] [i_0 - 3] [i_6 + 1])))), (arr_9 [i_0 + 1] [i_0 - 1] [i_6 + 2])));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_33 [i_7] = (arr_30 [i_7 + 2]);
        var_20 -= (((arr_30 [i_7]) || (((-1 ? (((arr_31 [4]) ? (arr_30 [i_7]) : 12376)) : (arr_29 [4]))))));
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 = (((!(arr_30 [i_7]))));
                        arr_42 [i_7] [i_7] [i_7] = (((!((((arr_41 [i_7] [i_7]) ? 929732428 : (arr_38 [i_7] [i_7] [i_7] [i_10])))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        arr_45 [i_11] = (~-13847426144007398644);
        arr_46 [i_11] = (min((arr_44 [i_11 + 2]), ((!(arr_44 [i_11])))));
        var_22 = (arr_43 [i_11] [9]);
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            {
                arr_51 [i_13] = -8177654435233178531;
                arr_52 [i_13] = var_12;
                arr_53 [i_13] [i_13] = ((~(((arr_36 [i_12] [i_12] [i_12] [i_13 - 1]) ^ (arr_36 [i_12] [i_12] [i_13] [i_13 + 1])))));
                var_23 = (max(var_23, (((((((!(arr_50 [4] [i_12]))))) || 466744615)))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_24 = ((var_2 + (arr_40 [i_13])));
                                var_25 *= (arr_54 [i_12] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 128;
    #pragma endscop
}
