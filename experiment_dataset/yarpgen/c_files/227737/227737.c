/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -4018496621298821354;
        arr_5 [16] &= ((-3 + 8423645780832822532) ? ((2 ? ((((arr_0 [14]) ? (arr_0 [0]) : (arr_0 [6])))) : (max((arr_3 [1]), -8423645780832822532)))) : (arr_1 [i_0] [i_0]));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_14 = ((63 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
                arr_10 [i_0] [i_0] [i_1] [i_0] = (arr_9 [i_0] [i_0]);
                arr_11 [i_0] = ((9112247730504117490 ? (arr_8 [i_0]) : (arr_7 [7])));
                var_15 = 14;

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_16 = (arr_1 [i_0] [i_0]);
                    var_17 = ((+((8 ? (arr_7 [i_3]) : (arr_3 [i_0])))));
                }
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    var_18 = 4;
                    var_19 = -3;
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_20 -= (arr_21 [i_0] [i_1] [i_5]);

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_25 [i_0] [1] = (arr_2 [i_0] [i_0]);
                    arr_26 [i_0] [i_1] [i_5] [i_0] = (var_1 - (((16 >= (arr_2 [i_0] [i_0])))));
                }
                var_21 = (((arr_20 [i_0] [i_0] [i_0] [i_5]) - 0));
                var_22 -= arr_22 [i_0] [i_1] [i_5] [i_5] [4];
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_23 = ((~(arr_22 [i_0] [i_1] [i_7] [i_1] [i_0])));
                var_24 = (max(var_24, ((((arr_9 [i_1] [i_7]) >= (arr_20 [i_0] [i_1] [18] [i_7]))))));
                arr_29 [3] [i_0] = 255;
                var_25 = (arr_3 [i_0]);
            }
            for (int i_8 = 4; i_8 < 23;i_8 += 1)
            {
                arr_32 [i_0] [i_0] [i_0] [i_8] = arr_31 [i_8 - 3] [i_1] [i_0];
                arr_33 [i_0] [i_1] [i_8] [i_0] = ((!(((8423645780832822543 ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : 30136)))));
            }

            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_0] = ((~(arr_17 [i_0] [i_1])));
                var_26 = (arr_35 [i_0] [i_0]);
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_27 = (((arr_14 [i_0] [i_1] [i_10] [i_10] [i_0]) ? 1 : (arr_14 [i_0] [i_10] [i_10] [i_10] [i_0])));
                    var_28 = (max(var_28, (arr_23 [i_0] [4])));
                }
                for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_29 &= -5083225786148428544;
                        var_30 = (max(var_30, (arr_2 [i_0] [i_0])));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_31 -= (arr_43 [i_0] [i_0] [i_12 + 1] [1]);
                        var_32 -= 1;
                        arr_49 [i_0] [i_0] [i_0] [i_10] [i_12] [i_12] [i_10] = (!8423645780832822525);
                        var_33 |= (arr_22 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12]);
                    }
                    arr_50 [i_12 + 1] [i_0] [i_0] [i_0] = (arr_16 [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [i_12]);
                    var_34 += (((arr_12 [i_12 + 1] [i_0] [i_12 + 1] [i_0]) != (arr_47 [i_12 - 1] [i_10] [i_10] [i_12] [i_12] [i_10] [i_1])));
                }
                var_35 = ((-(arr_42 [i_0] [i_0] [i_10])));
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
            {
                arr_54 [i_0] [i_1] [i_15] [i_0] = (arr_18 [i_0] [i_1]);
                var_36 = (arr_51 [i_0] [i_1] [i_1] [i_1]);
                arr_55 [i_15] [i_0] [i_0] [i_0] = (arr_45 [i_0] [i_0] [i_0] [i_1] [i_15] [i_15]);
                arr_56 [i_0] [i_1] [i_0] [i_15] = 40;
                var_37 = -14;
            }

            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_38 += (!var_7);
                var_39 -= (((1 >= -126) != (arr_21 [i_16] [i_1] [i_0])));
                arr_59 [i_0] = (arr_16 [i_1] [i_1] [i_16] [i_0] [i_1] [i_1]);
                arr_60 [i_0] [i_1] [i_0] = (((arr_17 [i_0] [i_16]) || (arr_17 [i_0] [i_0])));
                var_40 = ((((!(arr_6 [i_0] [i_0] [i_0]))) ? (arr_51 [i_0] [i_0] [i_16] [i_0]) : ((~(arr_42 [i_0] [i_0] [i_1])))));
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                var_41 = (min(var_41, (140 | 18446744073709551615)));
                var_42 -= ((!(arr_34 [1] [i_1] [i_17])));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    arr_68 [i_0] = (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_19] [i_1] [i_1] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0])));
                    var_43 = (max(var_43, (arr_13 [i_0])));
                    var_44 = (arr_67 [i_0] [i_0] [i_1] [i_18] [i_0]);
                }
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    var_45 += (arr_48 [i_0] [i_0] [i_1] [i_1] [i_1] [i_18] [i_20]);
                    arr_72 [i_0] = (arr_71 [i_18] [i_0] [i_18]);
                }
                var_46 -= ((~(arr_46 [i_0] [14] [i_0])));
                arr_73 [i_18] [i_0] [i_0] [i_0] = 65504;
                var_47 = (((arr_13 [i_0]) * var_6));
            }
        }
        for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
        {
            var_48 = (max((arr_19 [i_0] [i_0] [i_0] [0]), (-1039051544 - -8423645780832822532)));
            var_49 = (arr_52 [i_0] [i_21] [i_21] [i_21]);
        }
        for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
        {
            var_50 = ((((~4228) != (arr_28 [i_0] [i_22] [i_22]))));
            var_51 = (+((~(max((arr_46 [i_0] [6] [i_22]), 934580207151402130)))));
        }
    }
    var_52 = ((-((max(var_2, var_5)))));
    #pragma endscop
}
