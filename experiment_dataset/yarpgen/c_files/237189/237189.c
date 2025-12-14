/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_20 = var_5;
        var_21 = ((-(arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (min(var_22, (var_12 & 168)));
        var_23 = ((~(~var_17)));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_24 = 1;
        arr_9 [4] |= -1;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] = (arr_6 [1] [i_3]);
        var_25 = arr_2 [i_3];
        var_26 = 1152851672;
        var_27 = ((+(min((var_17 || var_9), (1 & var_5)))));
    }
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_28 = arr_14 [15];
                            arr_25 [i_4] [i_5] [1] = (max((arr_17 [i_4]), ((((!var_1) != (!14))))));
                            var_29 = (arr_22 [i_7] [12] [20] [i_7] [i_8] [i_8]);
                        }
                        var_30 |= ((!(arr_22 [i_4] [i_4] [i_6] [i_7] [i_7] [i_7])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = ((((((arr_16 [i_4 + 1]) & (((!(arr_16 [i_4]))))))) && (((~(((arr_32 [23] [0] [i_10]) % 1)))))));
                            var_32 = -1152851673;
                            var_33 = ((arr_31 [i_5] [i_5] [i_10] [i_11]) < (((((var_2 << (-7790744581441507666 + 7790744581441507692)))) ? (min((arr_29 [i_9] [i_5] [i_9] [i_10] [i_11]), var_3)) : var_5)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_34 = (arr_21 [6] [i_5] [i_12] [i_13] [i_5] [1]);
                            var_35 = (arr_22 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4]);
                            var_36 |= 1;
                            arr_42 [i_4] [i_4] [i_12] [i_13] [i_4] [i_5] = (min(((2047089173 | (arr_24 [i_5] [i_13] [i_14]))), (~-1152851689)));
                            var_37 = arr_41 [i_12 - 1] [i_12 - 1] [i_12 - 1] [8] [i_14] [i_14] [i_14];
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            var_38 = (((((-(!1)))) ? -185 : 0));
            arr_46 [0] [i_15] [1] = ((~(arr_18 [i_4] [15] [i_15] [i_15])));
            arr_47 [i_15] = ((~(arr_33 [i_4 + 4] [i_15] [i_4])));
        }
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        var_39 = (min((max((arr_30 [i_18] [i_16 + 1] [i_17] [i_18] [9]), 83)), (arr_48 [i_16])));
                        arr_55 [i_4] [i_4] [i_17] [i_17] [i_18] = -7790744581441507666;
                        arr_56 [i_4] [i_4] [i_4] [i_18] [i_4] [i_17] = (((((3865727968 >> (((arr_39 [0] [i_18] [i_17] [i_16] [23]) - 11942020036166079700))))) && var_9));
                        arr_57 [20] [20] [i_17] [i_18] [i_17] [i_17] = var_10;
                        var_40 = ((-(arr_51 [i_4] [i_16] [1] [i_17])));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_41 = var_3;
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    {
                        arr_66 [i_19] [i_20] [i_20] [i_22] [1] |= (~var_8);

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_42 = (((((((max(var_3, (arr_67 [i_20] [1] [9] [i_20] [i_20])))) | (arr_67 [i_19] [5] [1] [i_22] [i_20])))) & ((var_11 ? (arr_58 [i_21 - 1]) : (((((arr_69 [7]) <= var_13))))))));
                            var_43 = (arr_65 [10] [i_20] [i_21] [10]);
                        }
                        for (int i_24 = 0; i_24 < 25;i_24 += 1)
                        {
                            var_44 |= (((((arr_69 [i_19]) & (arr_69 [i_20 + 2]))) != ((max((arr_70 [i_22]), (arr_63 [i_19] [i_22] [i_24]))))));
                            var_45 = var_2;
                            var_46 = (arr_61 [i_21]);
                            var_47 = var_2;
                            var_48 = var_2;
                        }
                    }
                }
            }
        }
    }
    var_49 -= ((1 << (18446744073709551615 - 18446744073709551599)));
    #pragma endscop
}
