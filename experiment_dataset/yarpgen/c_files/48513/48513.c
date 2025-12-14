/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~(~30538)))) ? (!var_10) : ((127 ? -25902 : 115))));
    var_19 += ((!(~var_16)));
    var_20 = ((~(((((var_8 ? var_7 : var_12))) ? var_0 : (~-18115)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((min(var_4, -116)))) ? ((24531 ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))) : (min((arr_1 [i_0] [i_0 + 1]), 16384))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_2] [i_1] [i_0] [i_0] = (min(-30528, (max((arr_7 [i_0 + 2] [i_0]), (arr_7 [i_0 + 2] [8])))));
                arr_10 [i_0] [i_0] [i_1 + 3] [i_2] = (arr_5 [i_0] [i_1] [i_2]);
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_21 = ((!(!1343014111)));
                var_22 = (((!65521) != ((min((arr_11 [i_0 + 2]), (arr_7 [i_0 + 2] [i_0 + 1]))))));
                var_23 = ((min(var_9, (arr_8 [i_0 - 2] [i_1] [i_1 + 2]))));
                arr_13 [i_1 + 2] = (~-1);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_16 [i_0] [i_0] [i_0] [i_4] = (+-20912);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (((arr_4 [i_1 - 1] [i_1]) ? (arr_18 [i_1 + 4] [i_1 + 3]) : (arr_4 [i_1 + 3] [i_1 - 1])));
                    arr_21 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0 + 2] = ((!(arr_7 [i_1 + 4] [i_4])));
                    arr_22 [i_4] [i_1] [i_1] [2] [i_1] [i_1] = ((~(arr_15 [i_0] [i_1 + 4] [i_4])));
                    var_25 = (((~(arr_14 [i_0] [i_1 + 3] [i_4] [i_5]))));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    var_26 = ((arr_1 [i_1 - 1] [i_0 + 1]) ^ (arr_1 [i_1 - 1] [i_0 + 1]));

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_27 = (~(((arr_11 [i_6]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_7 - 1]))));
                        var_28 = ((~(arr_14 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_29 = (min(var_29, ((((arr_26 [i_0] [i_4] [i_0]) / (arr_15 [11] [i_4] [i_6]))))));
                        var_30 &= ((144 ? (arr_19 [i_0 - 1]) : -32765));
                        var_31 = 127;
                    }
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_33 [i_9] &= (max(103, (((arr_25 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1] [4]) ? -30502 : (min(4294967295, (arr_11 [i_0])))))));
                    var_32 = (arr_6 [i_0]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_33 = ((~(arr_14 [i_1 + 4] [i_1] [i_1] [4])));
                    var_34 -= (arr_1 [i_0 - 2] [i_1 + 2]);
                    var_35 += -3;

                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_36 &= -1;
                        arr_39 [i_0] [i_0] [i_0] [i_0 + 2] [i_4] = (arr_4 [i_1 - 1] [i_0 + 2]);
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_37 = (arr_8 [i_1 - 1] [i_4] [i_10]);
                        arr_42 [i_10] &= ((-(arr_31 [i_0 + 2] [i_1 - 1] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [1] [i_4] [i_4] = ((-1697820306 / (arr_4 [i_1 + 2] [2])));
                        arr_47 [i_0] [i_1] [i_1] [4] [i_4] [i_13] = (arr_36 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_4] [i_0 + 1]);
                    }
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        var_38 = (min(var_38, (arr_2 [i_0])));
                        var_39 = (var_16 ? (arr_14 [i_4] [5] [i_4] [i_4]) : -103);
                    }
                }
                var_40 = (max(var_40, (arr_41 [i_0] [i_0] [i_0 - 2] [6])));
            }
            var_41 ^= ((~(min(((max(14848, 127))), 1))));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        arr_54 [i_15] [i_15] = 121;
        arr_55 [i_15] = (1 | (arr_52 [12]));
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        arr_59 [i_16] [15] = ((((-(arr_58 [i_16]))) != (arr_53 [i_16] [i_16])));
        var_42 = (min(var_42, (arr_58 [i_16])));
        var_43 = (max(var_43, (arr_53 [i_16] [i_16])));
        arr_60 [i_16] = (~231);
    }
    var_44 ^= (((max(var_15, (var_3 + 8148))) - 1));
    #pragma endscop
}
