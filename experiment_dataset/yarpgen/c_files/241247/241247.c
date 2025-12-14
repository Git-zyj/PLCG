/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_14, ((min((max(-1552706535, (min(var_10, var_7)))), (((arr_0 [i_0 + 3] [i_0]) | (arr_0 [i_0] [i_0 + 3]))))))));
        var_15 = (((arr_0 [i_0 - 1] [i_0]) != ((~(max((arr_1 [i_0 - 1]), var_7))))));
        arr_2 [i_0] [i_0] = (max((((~923183643993757586) & (!var_3))), (((var_0 & (var_8 / 1552706553))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] |= (max((arr_4 [21] [21]), (arr_5 [i_0 + 2] [i_0])));
            arr_7 [i_0] [i_0] = 54;
            var_16 = (max(var_16, (((-(arr_4 [i_1 - 1] [i_1 - 1]))))));
            var_17 ^= (min((arr_1 [i_0 + 3]), 1785801104));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min(var_18, (((max((!var_2), -36))))));
        arr_11 [i_2] [i_2] = var_9;
        arr_12 [i_2] = (min(var_3, ((~(arr_5 [i_2] [i_2])))));
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_17 [i_3] = (((((-(((8153822372007798922 <= (arr_8 [10]))))))) & (max(((min(var_5, var_12))), 17038823969615712099))));
        var_19 = 117;
        arr_18 [i_3] = (arr_8 [i_3]);
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_25 [i_4] [i_4] = (!(!var_8));
            var_20 -= (max(var_4, (arr_1 [i_4 - 3])));
            var_21 = (((arr_3 [i_4 - 2] [i_4 - 1]) <= 4179796141));
        }
        var_22 = ((min((arr_20 [i_4 - 2]), -55)));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 = var_9;
            var_24 = (((((arr_5 [i_4 - 3] [i_4 - 1]) <= (!var_7))) ? (~94) : ((((((arr_26 [i_4 - 2] [i_4 - 3] [i_4 + 1]) < var_11))) & (arr_21 [i_4 - 3] [i_4])))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_25 = (min(var_25, (((~(arr_0 [i_4] [i_4]))))));
            var_26 = (max(var_26, 63));
        }

        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (((((!(((~(arr_30 [i_4] [8])))))))))));

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_28 = (-var_3 * 4397509640192);

                for (int i_10 = 3; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, (arr_23 [i_4 - 2] [i_4] [i_4 - 1])));
                    arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] = ((min((arr_34 [i_4 + 1] [i_4 + 1] [i_4] [i_4]), (arr_34 [i_4 - 2] [i_4 - 2] [i_4 - 1] [21]))));
                    var_30 = (max(var_30, (((!((min((arr_0 [i_4] [i_4]), (arr_39 [i_10] [i_10 + 1] [i_10 - 3] [1] [1] [i_10])))))))));

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_31 = var_0;
                        var_32 = (max(var_32, (arr_44 [i_4] [i_4] [i_4] [i_4] [i_4])));
                        arr_45 [i_4] [i_4 - 2] [i_4] [i_4 - 3] [1] = (((~(min(var_8, (arr_33 [i_4] [i_4] [i_4]))))));
                        arr_46 [i_9] [i_9] [i_9] [i_9] [1] [i_9] [i_9] = (~var_2);
                    }
                    var_33 = (((((arr_0 [i_4 - 2] [i_4 + 1]) ? (arr_0 [i_4 - 2] [i_4 - 1]) : var_0)) * (arr_0 [i_4 - 2] [i_4 + 1])));
                }
                for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, (((!(arr_1 [i_8]))))));
                    var_35 = ((~(((!(arr_20 [i_4]))))));
                    arr_49 [i_12] [i_12] [i_12] [i_12 - 1] = ((!((min((arr_32 [i_4]), (arr_28 [20]))))));
                    arr_50 [i_12] [i_8] = (max((min((arr_38 [i_4] [20] [i_4 - 3] [i_4]), (var_8 & 157))), (((~var_10) ? (arr_34 [i_9] [3] [1] [i_9]) : (arr_28 [3])))));
                }
                arr_51 [i_4] [i_4] [i_4 + 1] &= (min(((~(arr_48 [i_4] [i_4 - 1] [i_9] [i_4 + 1]))), ((((!var_13) ? (arr_0 [i_4] [i_4]) : (arr_36 [11] [i_8]))))));
                arr_52 [i_4] [i_4] [i_4] = ((-(arr_21 [i_4] [i_4 - 3])));
            }
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_36 = (max(var_36, var_1));
            var_37 = (min((((min((arr_22 [i_4 + 1]), 3237926411)) & (((~(arr_29 [i_4])))))), ((((!(arr_3 [i_4 + 1] [i_4 + 1])))))));
            arr_55 [i_4 + 1] = -113;
        }
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        arr_60 [i_14] = (((arr_58 [i_14] [i_14]) || ((max((min((arr_58 [i_14] [i_14]), 3150936656)), ((min(-1369089881, 56))))))));
        arr_61 [i_14] = ((~((-(arr_59 [i_14])))));
        var_38 = (min(var_38, (((max(-1552706543, var_4))))));
        var_39 = (max(var_39, (((((~(arr_57 [1]))) | var_3)))));
    }
    #pragma endscop
}
