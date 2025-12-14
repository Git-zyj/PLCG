/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(((arr_1 [i_0]) && var_2))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_16 = (min(var_16, (arr_8 [i_0] [i_1])));
                var_17 = (max(var_17, (arr_0 [1])));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_18 |= (arr_7 [i_0] [i_1] [i_2]);
                            var_19 = (((arr_3 [i_3 - 2] [i_4 + 2]) ? (arr_12 [i_4 - 1] [i_4 + 2] [i_2] [i_4 + 1] [i_4 + 2] [i_4 - 1]) : (~48469)));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_15 [i_1] = (2547162226 && var_12);
                var_20 = (!var_5);
                var_21 = (min(var_21, 2416866720));
                var_22 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) + 17059));
            }
            var_23 = ((-((3140760155 ? var_13 : var_10))));

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                arr_18 [i_6] [1] = (((arr_4 [i_0] [i_6 + 1]) ? (arr_4 [i_0] [i_1]) : 2547162227));
                arr_19 [i_0] [i_1] [i_6] = 0;
                var_24 *= (!var_1);

                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    arr_22 [i_6] [i_0] = (~10);
                    var_25 = (((((6 ? (arr_17 [i_6]) : -206088456))) ? 48485 : var_8));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_26 += ((6832 / (arr_12 [i_0] [i_1] [i_0] [i_6] [i_8] [i_8])));
                    arr_25 [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] = arr_9 [i_8] [i_6] [13] [i_1] [i_6] [i_0];
                    var_27 = var_13;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_28 = (!18446744073709551608);
                    arr_28 [i_9] [i_0] [i_9] [i_9] |= ((!(arr_16 [i_6 - 1] [i_6 - 1] [i_9])));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_29 = (((~-16681) >= ((var_2 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : var_3))));
                            var_30 += (arr_6 [i_6 - 1] [i_6] [i_6] [i_10]);
                            var_31 -= var_8;
                        }
                    }
                }
            }
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_12] [i_12] [i_0] [i_12] [i_12 + 2] [i_12 + 2]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_45 [i_0] [10] [i_12 + 1] [19] [10] = ((-(arr_14 [i_14] [i_12] [i_1])));
                            var_32 = (arr_40 [i_12 - 2]);
                            var_33 = (min(var_33, (arr_6 [i_12 + 2] [i_12 - 1] [i_12 - 2] [i_12 + 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_34 -= ((-(arr_47 [i_16 - 1] [3] [i_12 - 1] [i_15 + 2] [i_15 + 1] [i_12 - 1])));
                            var_35 = (arr_1 [i_12 - 1]);
                            arr_50 [i_0] [i_1] [i_12 - 2] [i_15 + 1] [i_16] &= (arr_29 [i_0] [i_1] [i_12 + 2] [i_15] [i_16]);
                            var_36 ^= (!var_4);
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            arr_54 [i_0] [i_0] = ((32916 ? 14945571871308218861 : -14));
            var_37 = (max(var_37, (((((!(arr_16 [i_0] [i_17] [i_17]))))))));

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_58 [i_0] [i_17] [i_17] [i_18] = (((arr_39 [4] [4] [4] [i_18]) < ((((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (var_0 | var_4))))));
                var_38 = ((-8 ? 9 : -84));
            }
        }
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        arr_62 [i_19] [i_19] = ((!((min((((arr_38 [i_19] [i_19] [i_19] [i_19] [i_19]) ? var_3 : 30641)), (!var_7))))));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    {
                        var_39 = (max(var_39, 10));
                        arr_71 [i_19] [i_20] [i_21] [i_22] = 2;
                        var_40 = (arr_32 [i_22] [i_20] [i_21] [i_22]);
                    }
                }
            }
        }
    }
    var_41 &= 1;
    var_42 &= (((((-(9 / 48477)))) ? ((-9 - (((5677540671234622917 ? 25 : var_4))))) : var_2));
    var_43 = var_8;
    #pragma endscop
}
