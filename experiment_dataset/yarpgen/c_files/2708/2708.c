/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = min((max(-1336598851, (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]));
        var_21 = var_13;
        var_22 *= (((arr_2 [i_0]) == ((((arr_2 [i_0]) >= (arr_2 [i_0]))))));
        arr_3 [1] = ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_23 = -41;
                            var_24 = ((~(max(-16, (var_10 * var_11)))));
                            var_25 = (max(26965, (((~var_11) ? (arr_9 [i_1 - 1]) : var_1))));

                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_17 [i_1 - 3] [11] [i_2] [i_3] [i_4] [16] [i_3] = (((arr_8 [i_1 - 3] [i_1 - 3] [i_4]) ? ((min(var_10, var_18))) : ((max((arr_8 [i_1 - 3] [i_1 - 3] [10]), (arr_8 [i_1 - 3] [10] [10]))))));
                                var_26 = (((max(((~(arr_16 [i_1] [i_2] [i_3] [14] [i_4] [i_5] [i_5]))), ((max((arr_6 [i_1 - 2]), var_3))))) >> (((26949 >> (((arr_12 [i_1 - 1] [i_1 - 1]) - 1915400694554227412)))))));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_27 = (arr_12 [i_6] [17]);
                                var_28 -= (arr_8 [i_1 - 3] [15] [i_6]);
                                var_29 = ((var_16 ? (((arr_6 [i_4]) ? ((var_1 << (((arr_16 [i_6] [0] [i_3] [i_1] [i_2] [i_1] [i_1]) - 15496679057920644070)))) : (arr_6 [i_4]))) : ((min((var_12 ^ var_13), 38571)))));
                            }
                        }
                    }
                }
                var_30 = (((max(var_10, (arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))));
                var_31 = (max(((((min(38591, -31))) || 1)), ((!((max(1, (arr_8 [i_1] [i_1 - 3] [i_1]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_32 = ((9 ? 2864335886 : 26964));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_33 = var_19;
            var_34 = var_18;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_35 = 20499;
                            var_36 = (((arr_31 [i_10 + 1] [i_7] [i_9]) ? (arr_30 [i_7] [i_10 - 1] [i_9] [i_7 - 1] [i_9] [i_9]) : (arr_30 [i_7] [i_10 + 1] [5] [i_7 + 2] [i_10 + 1] [i_7 + 2])));
                            var_37 = -var_8;
                            var_38 = (arr_33 [i_7]);
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 20;i_15 += 1)
                        {
                            arr_47 [i_7] [i_15] = ((arr_32 [i_15 + 1] [i_12] [i_7] [i_14] [i_15] [i_14] [i_15]) ? (arr_32 [i_15 + 1] [i_12] [i_7] [i_14] [i_13] [i_14] [i_7 - 1]) : (arr_32 [i_15 + 1] [i_15 + 1] [i_7] [i_15 + 1] [i_15 + 1] [i_13] [i_15 + 1]));
                            var_39 = (max(var_39, ((((arr_23 [i_7 + 1]) < (arr_23 [i_7 + 2]))))));
                            var_40 = (((arr_23 [i_7 - 1]) && (arr_23 [i_7 + 1])));
                        }
                        var_41 = (((arr_25 [i_7] [i_7 - 1]) >> 60));
                        arr_48 [i_7] [i_7] [i_7] [i_7] = (3116725216 ? 18905 : -1);
                    }
                }
            }
            var_42 = (min(var_42, (arr_35 [18] [i_7 + 2] [18])));
        }
        for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
        {
            var_43 = var_4;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    {
                        arr_56 [i_18] [14] [i_7] [i_7] [i_16] [i_7] = var_5;
                        var_44 = (((arr_49 [i_7]) ? -3395175756245000607 : (arr_49 [i_7])));

                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            arr_59 [i_7] [0] [i_7] [i_18] [i_19] [i_7] = (((arr_52 [i_16] [i_7] [i_16 + 1] [i_16 + 1]) >= var_11));
                            var_45 = 1823422520;
                        }
                    }
                }
            }

            for (int i_20 = 0; i_20 < 0;i_20 += 1)
            {
                var_46 *= (((arr_32 [i_20] [i_20 + 1] [14] [i_7 + 1] [14] [i_7 + 1] [i_7 + 1]) != (arr_53 [20] [i_20 + 1] [i_20])));
                arr_62 [i_7] = (arr_35 [i_7] [i_16 + 2] [i_7]);
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                var_47 = (((arr_58 [i_16] [i_16 + 1] [i_16] [i_16 + 1]) < 70));
                var_48 -= ((~(arr_55 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1] [i_16 + 1])));
            }
        }
        for (int i_22 = 1; i_22 < 20;i_22 += 1) /* same iter space */
        {
            arr_69 [i_7 + 2] [i_7] [i_7 - 1] = (var_9 / -64);
            var_49 = (arr_43 [i_7] [1] [i_7] [i_22 - 1]);
        }
    }
    /* vectorizable */
    for (int i_23 = 1; i_23 < 20;i_23 += 1) /* same iter space */
    {
        var_50 = ((~(arr_65 [i_23])));
        var_51 = (((arr_61 [i_23] [19] [19]) ? (arr_21 [i_23 + 2] [i_23]) : var_8));
        var_52 = var_11;
    }
    for (int i_24 = 1; i_24 < 20;i_24 += 1) /* same iter space */
    {
        var_53 = (min(((max((arr_64 [i_24 + 2]), (arr_64 [i_24 - 1])))), (((arr_64 [i_24 + 2]) + (arr_45 [i_24 + 1] [12] [12])))));
        var_54 = max((((((var_14 <= (arr_33 [i_24])))) % 5964)), var_9);
    }
    #pragma endscop
}
