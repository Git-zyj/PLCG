/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_15);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 36028797018962944;
        arr_3 [1] = max(((~(arr_0 [i_0 - 1] [i_0 - 1]))), (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 - 1]))));
        arr_4 [i_0] [i_0] = (-(arr_0 [i_0 - 1] [i_0 - 1]));
        arr_5 [i_0] [i_0] = (((arr_1 [i_0] [19]) ? ((var_14 | (((arr_0 [i_0 - 1] [i_0]) | (arr_0 [i_0] [5]))))) : -27640));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_13 [i_2] [12] [i_2] = ((((var_2 / var_7) / (-27640 / var_7))));
                    arr_14 [0] [i_2] [i_1] = var_14;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_18 [6] [i_3] = ((!((((((arr_15 [i_3]) + 2147483647)) << (((((arr_15 [i_3]) + 126)) - 19)))))));
        arr_19 [15] [15] = (((arr_8 [i_3]) ? (14336 % -41) : (((!(~var_11))))));
        arr_20 [i_3] = ((((((-27636 - var_4) / (arr_7 [i_3] [5] [3])))) ? (((max((arr_12 [i_3]), (arr_12 [i_3]))))) : (((((var_13 * (arr_17 [i_3])))) ? var_0 : (min(54, (arr_6 [8] [i_3] [i_3])))))));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_23 [i_3] [i_3] [i_3] = (((((((arr_1 [i_3] [i_3]) <= (127 - -27640))))) != (((arr_7 [i_3] [i_3] [i_3]) ? (arr_11 [i_3]) : ((((37 && (arr_22 [i_3])))))))));
            arr_24 [i_3] = ((-27640 - (~-1552255426994656124)));
            arr_25 [i_3] = ((!(((~(!var_13))))));
            arr_26 [i_3] = var_5;
        }
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_30 [18] [i_5] &= (arr_27 [10]);

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_33 [16] [16] = (arr_29 [i_5]);
            arr_34 [i_5] = 28;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_37 [i_5] [i_5] [i_5] = (!(arr_29 [i_5 + 1]));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_42 [i_5 + 1] [i_5 + 1] [i_8] [i_5] = 1044480;
                        arr_43 [i_5] [i_9] [i_8] [i_9] [i_9] = (((((-(arr_41 [i_5]))))) + ((27645 ? (arr_39 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_39 [i_5] [6] [i_5] [i_9]))));
                        arr_44 [i_5] [i_7] [i_7] [i_7] [i_9] [i_5] = (arr_36 [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                        arr_45 [i_9] = (((((((arr_27 [i_9]) ? (arr_36 [i_5] [i_8 - 1] [i_9]) : -97)))) != (arr_28 [i_9])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_48 [i_5] [i_10] [i_5] = ((-4 != (arr_39 [i_5] [i_10] [i_10] [i_10])));
            arr_49 [i_5] [i_5] = (0 != 1);
            arr_50 [i_5] = 1;
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_55 [i_5 + 1] [i_5 + 1] [i_10] [i_12] [i_12 + 3] = (!-827187884);
                        arr_56 [i_10] [i_12] = (((arr_51 [i_5 + 1] [i_10] [16] [i_12 - 1]) ? 8945400989272458816 : var_14));
                        arr_57 [i_5] = 35707;
                    }
                }
            }
            arr_58 [i_5] [i_5] [i_5] = (arr_54 [i_5 + 1] [i_5] [i_5] [13]);
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        arr_61 [i_13] [i_13] = ((1048 + (arr_59 [i_13 + 3])));
        arr_62 [i_13] = ((-(arr_60 [i_13 + 3])));
    }

    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_65 [i_14] = 32764;
        arr_66 [i_14] = ((~(arr_27 [i_14])));
        arr_67 [i_14] = ((-(((arr_60 [i_14]) + var_6))));
    }
    var_17 = (var_13 <= var_13);
    #pragma endscop
}
