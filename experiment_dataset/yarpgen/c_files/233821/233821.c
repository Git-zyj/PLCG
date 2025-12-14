/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 ^= (min(4, -10));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = (max((!-20), ((~(~17)))));
        arr_3 [i_0] [i_0] = (max(4, 20));
        var_17 = -var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-(arr_5 [i_1])));
        var_18 = (((((!(arr_6 [15]))))) ^ var_4);
        var_19 = (arr_4 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_20 &= (20541 < -4);
            var_21 = (arr_9 [i_1] [i_1]);
            var_22 = (max(var_22, ((((arr_6 [i_2 - 1]) != (arr_6 [i_2 + 1]))))));
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_23 = (((arr_10 [3] [i_3 - 1] [23]) != (arr_11 [i_3 - 1] [i_3 + 1] [i_3 - 1])));
            var_24 = (~var_0);
            var_25 = (arr_8 [i_3 + 1]);
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_26 = var_14;
                    var_27 = (((max(251, -1559161025))) | (max((170 && 16474481162177528928), ((21 ? var_11 : -16)))));
                    var_28 = (min(((((~var_5) && ((max(var_4, 20)))))), ((var_12 ? (min(4, 20)) : (((((arr_12 [i_4] [11] [i_4]) != (arr_12 [i_4] [i_4] [i_4])))))))));
                    var_29 = ((var_0 % (arr_4 [i_6 - 1] [i_6 - 2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            {
                var_30 = -var_14;

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_31 = (min((!44994), ((~(arr_25 [i_8 + 1] [i_8 + 1])))));
                        var_32 = arr_23 [i_8 - 3] [i_8 - 4];
                        var_33 = (max((min((arr_23 [4] [i_8]), var_4)), ((44980 ? 14 : 511))));
                        arr_32 [i_7] [2] = ((229 ? 4177920 : 6629480207136789191));
                    }
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] = 182;
                        var_34 = (((((~(arr_27 [i_8] [i_8] [i_8 - 2] [i_8 + 1])))) & (min((-8 | -4177921), 640246870))));
                        var_35 = (max(var_35, ((max(var_7, (arr_30 [i_7] [i_8 - 4] [12] [i_11]))))));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 13;i_13 += 1)
                        {
                            arr_40 [i_7] [i_8] [8] [8] [1] = (var_6 && var_11);
                            var_36 |= ((47 ? 17979214137393152 : -10));
                            var_37 = (min(var_37, 3235085311));
                            var_38 = var_11;
                            var_39 = ((((arr_37 [i_7] [11] [6] [11] [i_7]) % (arr_19 [i_7]))));
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_40 = ((!((max((arr_9 [i_8 - 3] [i_8 - 3]), (arr_43 [i_8 + 1] [i_8 - 1]))))));
                            var_41 ^= ((18428764859572158463 ? 20935 : 44989));
                        }
                        arr_44 [8] [15] [15] [i_7] = (~var_12);
                        var_42 = (min(17979214137393179, var_6));
                        var_43 = (arr_36 [2] [2] [2] [2]);
                        var_44 = (0 << 0);
                    }
                    var_45 -= (((((((20542 ? -119 : 2609960361016527031))) ? var_11 : (((arr_23 [i_7] [10]) ? (arr_41 [14] [i_7] [8] [14] [0]) : (arr_34 [12] [16] [i_7] [i_7]))))) - 226));
                }
                var_46 += (!var_7);
                var_47 = (((((var_14 >> (((118 - 8384854097149364994) + 8384854097149364901))))) ? (((arr_0 [i_8 - 4] [i_8 - 4]) | -var_1)) : ((~(var_1 != var_14)))));
            }
        }
    }
    #pragma endscop
}
