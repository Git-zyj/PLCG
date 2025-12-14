/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (((min(5329105337290487171, (arr_0 [i_0] [i_0])))) ? var_4 : 15333);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((!(((((arr_1 [i_0]) << (((arr_0 [i_0] [4]) - 17795670228905926907)))))))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((var_5 ? ((((var_4 ? var_2 : -2558)))) : (max((max(var_12, var_0)), ((max(var_3, (arr_4 [i_2] [i_1] [i_0]))))))));
                    var_16 = (((arr_0 [i_0] [i_1]) ? ((((-var_12 != (arr_6 [i_0] [i_1] [i_1] [i_0]))))) : ((max(var_2, var_4)))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_17 = (min(var_17, (((!(((max(var_12, var_6)))))))));
        arr_10 [i_3] = (arr_9 [i_3 - 1]);

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_13 [i_3] = min(((((arr_12 [i_3]) ? var_4 : var_3))), (2557 || var_2));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_17 [i_4] [i_4] [i_4] [i_4] = ((-(((arr_11 [i_3] [i_3] [i_5]) ? (arr_16 [i_3 - 2] [i_5] [i_3 - 2] [i_4]) : 0))));
                var_18 += (!var_4);
                var_19 = var_5;
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_20 -= arr_9 [i_3 - 1];
                arr_21 [i_6] [i_3] [i_3] [i_6] = var_10;
                var_21 = (-(arr_8 [i_6]));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_22 = (min(((((((var_11 < (arr_27 [i_8] [i_4] [i_8] [i_3] [i_9])))) != (~var_10)))), ((((max((arr_12 [i_3]), var_3))) ? (arr_27 [i_3] [i_3] [i_7] [i_3] [4]) : (((arr_14 [i_7] [i_4]) ? (arr_28 [i_3 - 3]) : (arr_23 [i_4] [i_4])))))));
                            var_23 = (min(var_23, ((+(min((arr_24 [i_3] [i_3] [i_7] [i_7]), (arr_24 [i_9 - 1] [i_8] [i_3 - 1] [i_3 - 1])))))));
                        }
                    }
                }
                arr_30 [i_3] [i_7] [i_7] = (((arr_22 [i_7] [i_7]) >= (((arr_18 [i_7] [i_3 - 2] [i_7]) & ((var_1 ? (arr_8 [i_4]) : (arr_20 [i_3] [i_3] [i_3])))))));
                var_24 = (((arr_19 [i_7] [i_4] [i_3] [i_3]) != (((arr_9 [i_3 - 2]) ? (arr_9 [i_3 - 2]) : 5329105337290487181))));
                arr_31 [i_3] [i_4] [i_3] [i_7] = ((max((~-111093626), (arr_8 [i_3 - 2]))));
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
            {
                arr_35 [1] [i_10] [i_3] = ((-((+((min((arr_27 [i_3 - 1] [i_4] [i_3 - 1] [i_3] [i_4]), var_5)))))));
                arr_36 [i_10] [i_4] [i_10] = ((~(min(var_12, (arr_34 [i_10] [i_10])))));
                arr_37 [i_3] [i_10] [i_10] [i_10] = (((var_13 ? (arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10]) : (arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4]))));
                var_25 = (min(var_25, -31788));
            }
            var_26 = (min(var_26, (arr_14 [i_4] [i_3])));
            arr_38 [i_3] [i_4] [i_3 - 3] = max((((((-2558 ? (arr_23 [i_4] [i_3]) : (arr_9 [i_3])))) ? 10004475210032797099 : ((((arr_20 [i_3] [i_3] [i_3]) / 2543))))), ((min(15333, -var_4))));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_27 -= (((((-(arr_27 [i_3] [i_11] [i_3 + 1] [i_3] [i_3])))) - (arr_8 [i_11])));
            arr_42 [i_3] [i_11] = (((arr_11 [5] [i_3 + 1] [i_11]) ? (arr_11 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_3] [i_3 - 3] [i_11])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_45 [i_3] [i_3] [i_12] = var_11;
            arr_46 [i_3] = (-270119165 <= 13117638736419064466);
            var_28 = ((~(arr_40 [i_3 - 2] [i_3 - 2])));

            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_29 = 2147483639;
                arr_49 [i_3] [i_3] = -18446744073709551615;
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_30 += (var_11 & (arr_27 [i_3] [i_12] [i_12] [i_14] [i_14]));
                var_31 = (~var_7);
                var_32 = (-2147483647 - 1);
            }
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_33 = (min(var_33, (((~(arr_16 [i_3 - 1] [i_15 + 2] [i_15] [i_15]))))));
                    var_34 *= ((var_10 != (arr_51 [i_15 + 2] [i_3 - 2])));
                    arr_57 [i_16] [i_16] [i_16] [i_3] = arr_39 [i_3] [i_3 - 2];
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_61 [i_3] [i_3] [i_15] [i_12] [i_15 - 1] = (((arr_34 [i_3] [2]) ? var_11 : (((arr_25 [6] [6] [6] [i_3]) ? var_5 : (arr_15 [i_17] [i_15] [i_12] [i_3])))));
                    arr_62 [i_17] [i_12] [i_12] [i_3] = (arr_14 [i_15] [i_12]);
                    var_35 = (((~var_3) | ((-(arr_27 [i_3] [i_12] [i_15] [i_15] [i_15])))));
                }
                for (int i_18 = 4; i_18 < 13;i_18 += 1)
                {

                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        arr_70 [i_19 - 1] [i_18] [i_18] [i_12] [i_3] = ((((var_2 > (arr_8 [i_3]))) ? ((var_7 ? 0 : (arr_12 [i_15]))) : (~var_2)));
                        var_36 = var_4;
                    }
                    var_37 += (((5329105337290487173 != 1871077247) >= ((-(arr_54 [i_12] [i_12] [i_18 - 2])))));
                    var_38 = ((var_6 - (arr_11 [i_18] [i_3] [i_3 - 3])));
                    arr_71 [i_12] [i_18] [8] [i_18 - 1] = 557166606;
                }
                var_39 = 5113764324362416281;
            }
            arr_72 [i_3] [i_3] = (!-1523497950);
        }

        /* vectorizable */
        for (int i_20 = 3; i_20 < 14;i_20 += 1)
        {
            var_40 = (min(var_40, 3359322663054674096));
            arr_75 [6] [i_20] [i_20] |= -15334;
        }
        var_41 = var_12;
    }
    for (int i_21 = 0; i_21 < 18;i_21 += 1)
    {
        arr_78 [i_21] = ((~(max((arr_76 [i_21]), (-2147483647 - 1)))));
        var_42 = (min(var_42, ((((((var_12 ? var_2 : (arr_77 [i_21] [i_21])))) ? (var_8 ^ 4051183387105211383) : (-30485 ^ var_5))))));
    }
    var_43 = var_11;
    #pragma endscop
}
