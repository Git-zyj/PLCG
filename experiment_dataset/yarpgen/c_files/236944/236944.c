/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -var_1;
        arr_4 [i_0] [i_0] = ((!((!((((arr_2 [i_0] [i_0]) ? var_18 : var_13)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((~((~(-9223372036854775807 - 1)))));
            var_20 = (((((max(0, 263394169664129117)) + 1)) > var_2));
            var_21 = ((((var_2 * -263394169664129121) * (((var_3 / (arr_5 [i_0] [i_0] [i_0])))))) * var_10);
        }
        var_22 = var_16;
        var_23 *= var_14;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (min((max((min(var_6, var_16)), (min(var_1, var_6)))), (((-((var_6 ? (arr_8 [9] [i_2]) : var_5)))))));
        arr_13 [i_2] [i_2] = (min((min(-1, -4206)), ((min((min(var_8, var_16)), var_8)))));
        var_24 = (min(var_24, (((~(max((min(1239193045, 22429)), (arr_2 [i_2] [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_25 -= ((!(arr_2 [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_3] [i_4] [i_4] [10] [i_6 + 3] [i_7] = ((((((arr_14 [i_6 + 3] [i_4 + 1]) > (arr_14 [i_6 + 4] [i_4 + 1])))) == ((max((arr_14 [i_6 + 3] [i_4 + 1]), (arr_14 [i_6 + 3] [i_4 - 1]))))));
                            var_26 = ((!(arr_0 [i_3] [i_3])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_27 = (((~((max(-4209, var_2))))));
                            var_28 = (((arr_5 [i_4 + 1] [i_4 + 3] [i_6 - 1]) != (159 && -1)));
                            var_29 = (arr_14 [i_5] [i_3]);
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_0 [i_6 + 2] [i_9]);
                            var_30 = (min((~var_9), ((3055774241 ? (arr_14 [i_5] [i_6 - 1]) : 87))));
                            arr_35 [i_3] [i_4] [i_4] [i_6] [i_9] = var_11;
                            arr_36 [i_3] [i_4] [i_5] [i_6] [i_6] [i_9] = min(var_10, (((var_4 && ((((-1639590571 + 2147483647) >> (-4206 + 4232))))))));
                        }
                        arr_37 [i_3] = ((((((arr_19 [i_3] [i_3] [i_6]) ? var_15 : var_11)) / (((max(1, 4209)))))));
                        var_31 *= (max((max((~var_2), ((1669321746523081763 / (arr_17 [i_5]))))), var_4));
                    }
                    arr_38 [i_3] = (arr_20 [i_4 - 2] [i_4 - 2] [i_4 + 3]);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_32 = (max(var_32, ((((max(var_19, (min(var_4, var_18)))) + ((((!((((arr_42 [i_4]) | var_17))))))))))));
                                arr_45 [i_4] [i_4] [i_4] [i_4] = (min((max(((min(var_8, var_7))), ((var_8 ? var_0 : (arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]))))), 3));
                                var_33 += ((4201 ? var_15 : (!-1377703404664681221)));
                            }
                        }
                    }
                    arr_46 [i_3] [16] = ((~(min(var_0, ((((arr_40 [i_3] [i_4] [i_5] [i_5]) ? 1239193019 : (arr_29 [i_3] [18] [i_5] [i_5] [i_5]))))))));
                }
            }
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_34 = ((~(max((var_11 + 4468415255281664), ((max(var_1, 48)))))));
            var_35 = (max(var_35, (((~(((arr_15 [i_12]) | (((((arr_16 [i_3] [i_12]) <= var_6)))))))))));
            var_36 = ((~((~(~var_14)))));
            arr_49 [i_3] = (((min((~-774), ((48 ? (arr_17 [i_3]) : (arr_18 [i_3] [i_3] [i_12])))))) | (((max(var_16, var_19)) / (max(1239193054, -29201)))));
        }
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            var_37 = (min(var_11, ((max(((((arr_32 [i_3] [i_3] [7] [i_3] [i_3]) && 7241026988406692044))), (max(-512, (-32767 - 1))))))));
            arr_53 [i_3] = (min((((((min((arr_29 [i_13] [i_13] [i_13 - 1] [i_3] [i_3]), (arr_11 [5])))) && (var_14 < var_13)))), (min(-106, (max((arr_5 [i_13 - 1] [i_3] [i_3]), (arr_31 [i_3] [i_3] [i_3])))))));
            var_38 += var_17;

            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_39 = ((arr_40 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1]) ? ((var_6 ? (arr_40 [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]) : (arr_40 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1]))) : (arr_40 [i_13 - 1] [i_13] [i_13] [i_13 - 1]));
                var_40 = (((!29195) > (!213)));
            }
            var_41 = var_14;
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            var_42 = (min(var_42, (((+(((arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]) | var_9)))))));
            arr_58 [i_3] [10] [i_15] = ((!((max(((((arr_18 [i_3] [14] [18]) && (arr_54 [i_15] [i_3])))), (min((arr_21 [17]), var_18)))))));
            arr_59 [i_15] = (!33);
        }
        for (int i_16 = 2; i_16 < 22;i_16 += 1)
        {
            arr_64 [i_3] [15] = ((~((((max((arr_29 [i_3] [i_16] [i_3] [i_3] [i_3]), (arr_25 [i_3] [11] [17] [i_3] [i_16])))) ? (~var_10) : 32743))));
            var_43 = (min(var_43, var_5));
        }
    }
    var_44 = -var_3;
    #pragma endscop
}
