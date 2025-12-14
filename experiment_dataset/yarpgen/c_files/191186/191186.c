/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = min(32768, 32769);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_12 = (((arr_5 [i_1 - 2] [i_1 + 1] [i_2 - 1]) ? var_5 : var_6));
                arr_9 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
            }
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_13 = var_8;
                        arr_14 [i_0] [i_0] [i_1 - 1] [i_3] [i_0] = ((-32769 ? (~var_5) : (-32767 - 1)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_14 = (min(var_14, (((((var_9 ^ (arr_19 [10] [i_6 + 1] [i_6] [i_6] [i_6]))) / ((-(arr_19 [i_0] [i_6 - 1] [i_6] [i_6] [i_6]))))))));

                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [5] [i_5] [i_5] [i_0] [i_0] = ((((min(53539, 5810391257194138071))) ? (arr_2 [i_0] [i_0]) : ((var_10 ? var_9 : (arr_2 [i_0] [i_0])))));
                            arr_25 [i_0] = (min(((18500 ? (arr_19 [i_0] [i_5] [i_5] [i_7] [i_0]) : var_10)), (((var_9 >> (arr_19 [i_0] [i_0] [i_0] [i_7] [i_0]))))));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] [i_0] [i_9] [i_0] = min((max(1, 0)), (arr_1 [i_5] [i_5]));
                            arr_29 [i_0] [i_6] [i_6] [i_7] [i_9] [i_7] [i_0] |= ((-(32767 <= 1)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_15 ^= -1;
                            var_16 = (max((((-var_3 && (((35422 | (arr_31 [6] [6] [i_6] [i_7] [i_10]))))))), var_8));
                        }
                        var_17 = ((((max((var_3 | 1), 1))) ? (~-24218) : (~4030208391)));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_35 [i_0] [i_5] [i_6] [i_7] [i_0] = (min((11985 & 128), ((1 ? 32776 : 2137168623))));
                            var_18 = var_4;
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_19 &= (((((53513 ? 35437 : 32768))) ? 3674096008 : var_7));
                            var_20 += (!30113);
                            arr_38 [i_0] [i_0] [i_6] [i_6] [i_0] [i_12 + 1] [i_7] = ((((((arr_7 [i_0]) == (arr_7 [i_0])))) >= 32768));
                            var_21 = (2028533952 + var_5);
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_22 += (max(var_2, ((max(((var_3 ? var_5 : var_11)), (arr_40 [i_13] [i_13]))))));
        arr_42 [i_13] [i_13] = var_8;
        arr_43 [i_13] = ((7 ? 32768 : 3674096008));
        arr_44 [i_13] = ((18446744073709551615 / 11996) && -125);
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            arr_50 [i_14] [i_15] = ((~(arr_47 [i_14] [i_14] [i_14])));
            arr_51 [i_14] [i_14] = (((arr_40 [i_14] [i_15]) ^ var_0));
            arr_52 [i_15] [i_15] [i_14] &= var_6;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        arr_60 [i_14] = var_8;
                        arr_61 [i_14] [i_15] [i_15] [i_17] [i_15] [i_16] = (arr_47 [i_14] [i_14] [i_14]);
                        arr_62 [i_17] [i_16] [i_14] [i_15] [i_14] = (((~var_0) ? 44213 : ((max(32794, 149)))));
                    }
                }
            }
        }
        arr_63 [i_14] = min((189482527 | 9223372036854775807), ((var_4 ? var_10 : (arr_46 [i_14]))));
    }

    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_68 [0] [0] = (arr_47 [i_18] [i_18] [i_18]);
        arr_69 [i_18] = (32763 | 9223372036854775807);
    }
    #pragma endscop
}
