/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_2, var_11);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [8] [i_1] [i_0] = var_1;

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_2] [7] [7] = ((-(arr_2 [i_0] [i_0] [i_2])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((var_9 / (arr_3 [i_2])))))));
                            arr_16 [i_4] [i_3] = ((-(arr_5 [i_4] [i_0] [i_0])));
                            var_22 = 3371221852869497602;
                        }
                    }
                }
            }
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, (arr_5 [i_6] [i_6] [i_6 - 1])));
                            var_24 = (!((((arr_19 [i_1] [i_5] [6] [i_7]) / (arr_2 [2] [i_1] [i_1])))));
                        }
                    }
                }
                arr_29 [16] [11] = (arr_22 [4] [i_1] [i_1] [i_1]);
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_25 = (((arr_26 [13] [i_8 - 2] [i_8 - 2] [i_8] [i_8]) ? (((arr_20 [i_0] [i_1]) ^ (arr_15 [i_0] [i_0] [i_0]))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])));
                arr_33 [i_8] [i_8] [i_8] = (-715202451 & -715202443);
                arr_34 [i_0] [11] [i_8] [i_8] = (arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [16]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_26 = ((!(((-4 ? 48 : -975719972)))));
                            var_27 = (min(var_27, var_18));
                            arr_43 [i_0] [i_1] [i_8] [i_9] [i_8] = (((arr_39 [i_0] [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2] [i_0] [i_10]) && (arr_20 [i_0] [i_0])));
                            var_28 = (max(var_28, 975719972));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_46 [i_0] [i_1] = arr_37 [i_0] [8] [i_11] [i_0] [i_11];
                arr_47 [7] [i_1] [i_11] = (var_8 / var_2);
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_29 = (min(var_29, (arr_35 [i_0])));
            arr_51 [i_0] = (((arr_15 [i_0] [i_0] [i_12]) ? (arr_28 [i_0] [i_12] [i_12] [i_12] [i_12]) : (~-1820872919)));
            arr_52 [i_0] [i_12] = (((arr_38 [2] [i_12] [i_0]) < (arr_12 [i_0] [i_0] [i_12] [7])));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_55 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
            arr_56 [i_0] [i_0] [i_0] = (((5596128516162262029 ? 4 : (arr_19 [i_0] [i_13] [i_13] [i_13]))));
        }
        arr_57 [i_0] [1] = (arr_32 [8] [i_0] [i_0]);
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        arr_60 [i_14] = -818420405533091616;

        for (int i_15 = 1; i_15 < 6;i_15 += 1)
        {
            var_30 = (arr_58 [i_14]);
            var_31 = (min(var_0, 7029087866418098593));
            arr_63 [i_14] |= ((((min((arr_41 [i_15 + 3] [6] [i_15 + 4] [i_15 + 2] [i_15 + 2]), (arr_41 [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 3] [i_15 + 2])))) || ((min((~var_2), ((4016379243576297339 ? (arr_37 [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_41 [i_14] [i_15] [i_14] [i_15 - 1] [i_14]))))))));
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_32 = (max(var_15, ((min(((max(var_12, (arr_7 [i_14] [i_14] [i_14] [i_14])))), (arr_39 [i_14] [i_14] [i_14] [i_16] [i_14] [i_16] [i_14]))))));
            arr_68 [i_14] [i_16] [i_16] = (arr_54 [i_14] [i_14]);
            arr_69 [i_14] [i_16] [i_14] &= var_0;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        {
                            var_33 = (arr_1 [i_14] [i_14]);
                            arr_78 [i_14] [7] [i_17] [9] = ((~((((arr_76 [i_17] [0] [i_19 - 2] [i_19 + 1] [i_19]) || var_17)))));
                            arr_79 [i_14] [1] [i_17] [i_14] [i_19] |= ((~(arr_77 [i_17] [i_17] [i_14] [i_18] [i_14] [i_19 - 1])));
                            arr_80 [i_14] = (max((max(var_0, (((arr_10 [i_14] [i_16] [i_17] [i_14] [i_19]) ? (arr_41 [i_14] [i_14] [i_17] [i_18] [i_18]) : 111)))), (((!(((arr_35 [i_18]) || var_8)))))));
                        }
                    }
                }
            }
        }
    }
    var_34 = (max(var_34, (((~(min(((var_13 ? var_14 : var_16)), (var_14 * var_9))))))));
    #pragma endscop
}
