/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(2596723016, 2596723016)))));
    var_12 = var_10;
    var_13 = (2069044682 % 61440);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [4] = ((var_6 ? (((!2596723016) ? (max((arr_5 [i_0 + 1] [i_1]), var_2)) : (((2596723019 ? 13 : var_5))))) : (arr_2 [i_1])));
                arr_7 [i_0] [i_0] [i_0] = (((arr_4 [i_0 - 1] [12]) ? (arr_4 [i_0 + 1] [i_1 + 1]) : ((var_3 - (arr_4 [i_1 - 1] [i_0 + 2])))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_14 = (max(7325, 32763));
            var_15 = (max((((5506217809077504733 ? (max(1084890555, var_9)) : (!5137062175816304126)))), ((((var_7 ? var_8 : var_6)) * (((((arr_9 [i_3]) >= (arr_11 [i_3])))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_19 [i_2] [i_5] [i_5] [i_2] [i_2] [i_2] = ((426332343 ? 28 : 28));
                            var_16 = (max(var_16, ((min((arr_1 [i_5 - 1]), (((arr_1 [i_5 - 1]) ? (arr_1 [i_5 - 1]) : (arr_1 [i_5 - 1]))))))));
                            var_17 = var_3;
                            var_18 = (max(var_18, (((((max((arr_3 [i_2]), 109))) ? (arr_12 [i_4] [i_3]) : (!5506217809077504733))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_19 = (max(var_19, (!3920819603183589131)));
                            arr_31 [i_9] [i_7] = arr_5 [i_2 + 1] [i_7 - 2];
                        }
                    }
                }
                var_20 = (!var_3);
                var_21 = (-8552 / 5506217809077504733);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_36 [i_2] [i_3] [16] [i_7] [i_2 - 2] [i_2] [i_2 + 1] = 5757688110994395798;
                            var_22 |= (((arr_3 [i_7]) ? (arr_17 [12] [i_2 + 1] [i_2 - 2] [i_7 + 2] [i_11]) : (arr_12 [i_7 + 3] [i_7 + 2])));
                            var_23 = (min(var_23, (arr_25 [i_2 + 1] [8] [8] [i_11])));
                            arr_37 [i_2] [i_2] [i_2] [13] [i_7] [i_11] [i_11] = (arr_12 [i_2 - 2] [i_2 - 2]);
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_24 += 4294967295;
                arr_41 [3] [3] [i_12 + 2] = (max(((min((max(var_4, var_6)), (((var_1 ? var_1 : (arr_26 [i_12] [i_3] [i_2 + 1] [i_2]))))))), ((var_0 ? ((var_3 ? (arr_11 [i_2 - 1]) : var_9)) : (arr_32 [i_12 - 1] [i_12 - 1] [9] [9] [i_2 + 1] [i_2 - 1])))));
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_25 = (max(var_25, (arr_4 [i_2 - 2] [i_2 - 2])));
            var_26 = var_10;
        }
        var_27 *= var_5;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    var_28 = (min(var_28, var_9));
                    arr_48 [i_15] [5] [i_14] [i_15] = max((max((arr_8 [i_2 - 1] [i_2 - 2]), var_2)), (((!(arr_20 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1])))));
                }
            }
        }
        arr_49 [i_2] = ((((((((arr_40 [i_2]) ? (arr_21 [i_2] [i_2] [i_2] [i_2]) : var_7))) && (var_8 < var_10))) ? (max(102, ((var_1 ? (arr_3 [i_2]) : var_1)))) : ((((var_0 < (arr_23 [i_2 + 2])))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 18;i_18 += 1)
                {
                    {
                        var_29 = (((arr_46 [i_2 - 1] [i_2 - 1] [i_17 + 1] [i_18 - 3]) ? var_5 : (arr_32 [i_2] [i_2 + 2] [i_18 - 2] [i_18 - 1] [i_17 - 1] [i_16])));
                        var_30 = (max(var_30, ((((arr_43 [i_17 + 3]) != ((var_9 ? (arr_56 [i_2] [i_2] [i_16] [i_17] [i_18]) : 7751)))))));
                    }
                }
            }
            var_31 = ((((arr_30 [i_2] [i_16] [i_16] [4] [i_16] [1] [i_2 + 2]) > var_1)));
            arr_57 [i_16] [i_2] [i_2] = ((var_7 ? var_4 : 3638079526));
            arr_58 [i_2] [i_16] [i_16] = (((arr_46 [i_2] [i_2] [20] [i_2]) ? (arr_20 [i_2 + 1] [i_2 + 1] [9] [i_2]) : var_3));
        }
    }
    #pragma endscop
}
