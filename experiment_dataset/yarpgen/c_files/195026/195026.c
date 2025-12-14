/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = min(((((min((arr_0 [1]), (arr_1 [i_0])))) / (arr_0 [i_0]))), ((max((((!(arr_0 [i_0])))), (max((-2147483647 - 1), (arr_0 [i_0])))))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_13 = (min(var_13, ((((min(((638583952 ^ (arr_2 [i_0] [i_1] [0]))), ((max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_3 [0])))))) + (arr_0 [i_0]))))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_14 = (((arr_2 [i_0] [i_1] [i_2]) ^ 5062861866648286937));
                    var_15 = (((2147483647 ^ ((52771 & (arr_1 [8]))))));
                    var_16 ^= 3136735098;
                    var_17 *= (arr_5 [i_0] [i_0] [i_0]);
                }
            }
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                var_18 *= (max(((11622 * (arr_6 [9] [i_0] [9] [i_4]))), (arr_6 [i_0] [i_0] [i_0] [i_0])));
                var_19 = (14661936417163797763 | (arr_6 [i_0] [i_1 - 1] [i_1] [i_4 - 1]));
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_20 *= (((arr_13 [i_5]) == (((arr_7 [i_0] [i_1 + 1] [i_1] [i_1 + 1]) ? (((arr_14 [i_0] [i_0]) * 1158232194)) : (arr_3 [i_1 + 1])))));
                var_21 = 123145302310912;
                var_22 = (((max((max((arr_10 [i_0]), (arr_9 [i_0] [i_1] [i_5]))), ((((arr_4 [i_0] [i_1 - 1] [i_0]) ? 3136735080 : (arr_3 [i_5])))))) - ((max((arr_1 [i_0]), (arr_12 [i_0] [i_0] [i_5]))))));
            }
            var_23 = (((arr_3 [i_0]) == (arr_13 [i_0])));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_24 = min((arr_6 [i_6] [i_6 + 3] [i_6] [i_6 + 3]), -20799);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_25 = (((arr_14 [i_0] [i_0]) < ((min((arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (((arr_26 [i_6] [i_8] [8] [i_6] [i_0] [8] [i_6]) ? 1 : (arr_16 [4] [i_6] [i_7]))))))));
                                var_26 = (arr_18 [i_8]);
                                var_27 = (max(var_27, ((min((((((2525033221 ? (arr_11 [i_0] [i_6] [i_9]) : (arr_10 [i_8])))) ? (arr_17 [i_8]) : ((((arr_2 [i_0] [i_6] [i_7]) == (arr_11 [i_8] [6] [i_6])))))), -17507)))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_28 = (min((max((arr_23 [i_10] [i_10] [i_7] [8] [i_0]), 18446620928407240711)), (arr_5 [i_7 + 1] [i_6] [i_7])));
                        var_29 = (arr_24 [i_10] [i_7] [i_6] [i_6] [i_0]);
                        var_30 = arr_7 [i_0] [i_6 + 3] [i_7] [i_10];
                        var_31 = (((arr_4 [i_0] [i_7] [i_10]) * (((6 ? (arr_23 [i_0] [i_6] [i_0] [i_10] [i_10]) : (arr_8 [i_7 + 1] [i_0] [i_7]))))));
                    }
                    var_32 = arr_3 [i_0];
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_33 *= (min((arr_32 [i_11]), ((min((((arr_31 [i_11]) | 0)), (arr_31 [3]))))));
        var_34 = -7276;
        var_35 = (arr_31 [i_11]);
        var_36 = (arr_31 [i_11]);
    }

    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        var_37 = (((!((min((arr_33 [i_12 - 1]), (arr_34 [i_12] [i_12])))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 12;i_14 += 1)
            {
                {
                    var_38 = ((!((((arr_34 [i_13] [i_12 + 1]) ? (arr_34 [i_14] [i_14 + 1]) : (arr_34 [i_12 - 1] [i_12]))))));
                    var_39 = (max((arr_38 [8] [i_12 - 1]), (((((arr_33 [i_13]) + 16)) / 20791))));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        var_40 = (min(var_40, ((21884 + (min((arr_42 [i_15] [i_15]), (arr_41 [i_15])))))));
        var_41 = 123145302310912;
        var_42 |= (arr_42 [i_15] [i_15]);
    }
    var_43 = var_3;
    #pragma endscop
}
