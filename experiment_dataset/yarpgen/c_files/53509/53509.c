/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 ? ((max(var_4, (min(var_8, var_2))))) : (min(((min(var_4, var_10))), -16571560955448287304))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-((-(min((arr_1 [i_0] [i_0]), 13695093842746695160))))));
        arr_3 [i_0] [i_0] = (((min(144115188075855872, 48)) | var_5));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_18 = var_0;
        arr_6 [i_1] [i_1] = -635172469;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_19 = (max(var_19, var_7));
        var_20 = ((247966298 ? (arr_8 [i_2 + 1] [i_2 + 1]) : (arr_5 [i_2 + 1])));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_21 = (min(var_21, (((63 ? 4751650230962856455 : 979712661)))));

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = var_16;
            arr_15 [i_3] [i_3] = ((((((1103783282 ? -48 : 0)) + 2147483647)) >> (((((arr_9 [3] [3]) ? var_11 : 2378063060)) - 11031325513472132982))));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_5] [i_5] = (arr_4 [i_3 - 3]);

            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                arr_22 [i_3] [i_5] = ((!((((arr_11 [i_5]) ? (arr_16 [i_3]) : 1562026395)))));
                arr_23 [16] [i_5] = (((arr_10 [i_5 - 1]) ? var_13 : (arr_10 [i_5 - 1])));
                var_22 = 1;
            }
            arr_24 [i_5] [i_3] [i_5] = (65535 * 3051597083);
            var_23 += (~var_13);
            var_24 = (arr_5 [i_3]);
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_29 [i_7] = arr_20 [i_7 + 1] [i_7 + 1] [i_7];
            arr_30 [0] [i_7] [i_7] = var_12;

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_25 = ((arr_32 [i_7] [i_7] [i_9]) ? (arr_32 [i_10] [i_7] [i_3 - 1]) : (arr_32 [i_3] [i_3 - 2] [i_8 - 1]));
                            arr_40 [i_7] [i_9] [i_8 - 1] [i_7] [i_7] = (~-40);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_47 [i_7] [i_7] [i_8] [i_7] [i_7] = (-48 * 48);
                            var_26 = 13695093842746695160;
                        }
                    }
                }
                arr_48 [i_7] [i_7] [i_7] [i_7] = (((arr_43 [i_3 - 1] [i_7 + 1] [i_8 - 1]) ? (arr_44 [i_8] [i_8] [i_8] [i_7] [i_3]) : (arr_34 [10] [16] [i_8])));
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_27 = (arr_5 [i_3 + 3]);
                arr_53 [i_3 - 1] [i_7] [i_13] = (((var_4 && (arr_17 [i_13]))) ? (arr_46 [i_3] [i_3] [i_13] [i_7 - 1] [i_13] [i_13]) : (arr_9 [i_3 + 2] [i_3 + 1]));
                var_28 = ((-(((0 <= (arr_37 [i_3] [i_3] [i_3] [i_13] [i_13]))))));
            }
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                var_29 = var_5;
                arr_58 [i_3] [i_7] = (arr_20 [i_7] [i_7 + 1] [i_7]);
                arr_59 [i_7] [i_7] = (((((arr_5 [i_14]) ? var_15 : (arr_37 [9] [i_7] [i_7] [i_3] [i_3]))) * (var_8 - 5921)));
                var_30 = (min(var_30, (arr_35 [2] [6] [i_14] [i_3 + 2])));
            }
        }
        for (int i_15 = 4; i_15 < 15;i_15 += 1)
        {
            arr_62 [i_3] = (~((-33 ? 0 : 65535)));
            var_31 = (min(var_31, (((((var_15 && (arr_10 [i_3]))) ? -var_1 : ((-(arr_38 [i_3] [2] [i_3] [i_3 + 3] [i_3] [4] [2]))))))));
        }
        arr_63 [i_3] = (((arr_12 [i_3 - 4]) ? ((var_8 >> (((arr_44 [i_3] [i_3] [i_3] [i_3] [2]) + 137)))) : (((!(arr_9 [i_3] [i_3]))))));
    }
    #pragma endscop
}
