/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((~((12420679029773238303 >> (127 - 80)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = (((-19690 && -21803) ? (((1 ? 323759531 : var_9))) : -881697500526443891));
            arr_6 [i_1] [i_0 - 1] = (((arr_2 [i_1]) | (arr_2 [i_0 + 3])));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_17 ^= ((arr_7 [i_0 + 1] [i_1] [i_0 - 2]) ? -19690 : (arr_0 [i_0 - 1]));
                arr_10 [i_2] = (((arr_7 [i_0] [i_2] [i_0 + 1]) ? (arr_7 [i_0] [i_2] [i_0 + 2]) : (arr_7 [1] [i_2] [i_0 - 2])));
            }
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                arr_14 [i_0 + 2] [i_3] = var_8;
                arr_15 [i_3] = (arr_5 [i_3 + 1] [i_1] [i_0 + 2]);
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_18 &= -51;
                var_19 = (!-32760);
                arr_18 [i_0] [6] [6] = ((var_10 ? (((arr_8 [i_4] [i_1] [i_1] [4]) - (arr_12 [i_0] [i_4]))) : (arr_0 [i_1])));
            }
            arr_19 [3] = (arr_11 [i_0 + 2] [i_0 + 2] [i_1] [i_1]);
            var_20 = ((-44 ? ((((arr_1 [i_0] [i_1]) && var_6))) : (arr_4 [i_0 + 1])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_21 = (max(var_21, (arr_17 [i_5] [i_5] [11])));
            var_22 -= var_4;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_23 = (((arr_8 [i_0 - 1] [13] [i_6] [i_7]) != (10533 != var_14)));

                        for (int i_8 = 4; i_8 < 24;i_8 += 1)
                        {
                            arr_31 [i_5] = (((62 ^ var_11) > (((((arr_25 [i_0 + 1] [i_5] [i_5]) != -32748))))));
                            var_24 = ((arr_0 [i_8 - 4]) ^ ((123 ? (arr_5 [i_7] [20] [i_6]) : (arr_1 [10] [i_6]))));
                            var_25 = (((((1 ? -21803 : 19690))) ? -20466 : (arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 3])));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_22 [i_0 + 2] [i_0 - 1] [i_0 - 1]) ? -19701 : (arr_16 [i_0] [i_0 - 2] [i_0]))))));
                            var_27 = 323759524;
                            var_28 = (max(var_28, (((((-62 ? 20466 : (arr_23 [16] [1] [i_9])))) ? 9223372036854775807 : (((var_13 ? (arr_5 [i_7] [i_6] [i_5]) : var_4)))))));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_5] [i_5] [21] [14] [i_6] = (arr_7 [i_0] [i_5] [i_5]);
                            var_29 = (((arr_35 [i_5] [i_0 - 1]) + (arr_35 [i_5] [i_0])));
                            var_30 = (min(var_30, var_11));
                            var_31 = 74;
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_6] [i_6] [i_6] [i_6] = ((((34755 ? (arr_23 [i_5] [i_5] [i_11]) : var_1))) ? ((~(arr_22 [i_0] [i_0] [i_7]))) : (arr_39 [i_5] [i_5]));
                            arr_42 [i_5] [i_7] [i_5] [i_5] [i_5] [3] = var_10;
                            arr_43 [i_5] [17] [17] [i_7] [i_7] [i_7] [16] = (((((arr_5 [i_11] [i_7] [i_5]) >= -3600768924921485021)) ? (arr_33 [i_0] [i_0] [i_0 + 2] [i_11]) : (arr_8 [i_0] [i_0 - 2] [23] [i_0 + 3])));
                        }
                    }
                }
            }
            arr_44 [i_0] [8] [i_5] &= ((((!(arr_23 [i_0] [10] [i_5])))) >> (45 - 34));
        }
        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            arr_48 [i_0] [i_12] [i_12 + 1] = ((-(arr_1 [i_0 + 1] [i_0 + 3])));
            arr_49 [i_0 + 1] = (((arr_24 [i_0 - 2] [4] [i_0 - 2]) ? (arr_24 [i_0] [14] [i_0 - 1]) : -4));
            var_32 &= -1168496446;
        }
    }
    var_33 = (((((var_9 ? 23988 : var_10)))) ? (((((var_10 ? var_10 : -123)) > var_7))) : var_2);
    var_34 = var_0;
    var_35 = -3600768924921485021;
    #pragma endscop
}
