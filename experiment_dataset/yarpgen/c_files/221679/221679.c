/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [8] = 44529;
        arr_4 [i_0] [5] = ((((min((arr_1 [i_0]), 96))) ^ (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 - 2] [i_1 + 2] = (((arr_7 [15] [i_1 - 2]) ? ((-95 ? 3767 : -119)) : (31006 * 4379)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((4379 == ((61156 ? (arr_11 [i_5] [i_5] [i_3 - 1]) : (arr_14 [i_1 - 1])))));
                            arr_21 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1] = (max(((min((max(var_10, var_9)), var_2))), (arr_14 [i_1 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, ((min((((((31013 ? 34551 : 24374))) ? ((var_4 ? (arr_6 [i_1]) : var_9)) : var_5)), ((min(65389, (min(-40, 34524))))))))));
                            arr_25 [i_6] [i_1 + 2] = ((var_11 != (((~var_10) % (arr_16 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1])))));
                            arr_26 [i_1 + 2] [1] [1] [1] [1] [i_1 - 1] = (-1 * 63);
                            arr_27 [i_1 - 1] = (min(-25, (min((((arr_1 [i_4]) ? var_10 : var_16)), (var_1 / 57516)))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_20 = (min(((max((arr_6 [i_2 - 1]), 5))), ((((min(39, var_12))) ? (((arr_10 [i_1] [i_1] [i_1]) & (arr_0 [i_1] [i_1]))) : var_7))));
                            var_21 = (max(var_21, ((min((((-40 + 2147483647) << (((arr_6 [i_1 + 1]) - 7004)))), (arr_6 [i_1 + 2]))))));
                            arr_30 [i_7] [i_4] [1] [i_2] [i_1] = 18027;
                            arr_31 [17] [i_2] [i_2 + 2] [i_2] [i_2] = (min(42970, (arr_19 [i_1] [i_1] [i_3] [i_7])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_2 - 1] [i_1 - 1] [i_3 - 1] [13] [i_8] = ((8036 / (((arr_10 [2] [i_2] [i_2 + 2]) << (2044 - 2042)))));
                            arr_37 [i_1] [i_2] [i_8] = 127;
                        }

                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_22 = (~7680);
                            var_23 = (max(var_23, (((~((63 * (arr_35 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 2]))))))));
                        }
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            arr_42 [i_1 - 1] [i_1] [i_2 + 2] [i_3 + 1] [i_4] [i_4] [i_10] = (max(((-(((arr_23 [i_1] [i_4] [i_3 + 1] [i_2 + 1] [i_1] [i_1]) % var_13)))), (arr_28 [i_1] [i_2] [i_2] [i_4] [7])));
                            var_24 = (max(var_24, (((!(~-1))))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_45 [17] [i_2 + 2] [i_2 - 1] [i_3] [i_4] [i_2 + 2] = ((4032 ? (arr_13 [i_2 + 1] [i_1 + 1] [i_3 - 1]) : ((47904 ? 7080 : 60157))));
                            arr_46 [i_2 - 1] [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_38 [i_1] [i_1] [i_3] [i_4] [i_11]);
                            arr_47 [i_1] [i_1] = ((17621 != ((max((min(var_0, 96)), (arr_16 [i_1 + 2] [i_2 - 1] [i_4] [i_11]))))));
                            arr_48 [i_1 + 2] [19] [i_1 - 1] [6] [i_1] [i_1 - 2] [i_1 + 2] = (min(50, ((((max(2, 41172))) * var_4))));
                            arr_49 [i_1 - 1] [i_1 - 1] [i_3] [9] [i_11] [i_3] = 34535;
                        }
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            arr_52 [i_1 - 1] [i_1 - 1] [17] [i_1 - 1] [i_12] = (arr_43 [i_1] [i_2 + 1] [i_3 + 1] [i_4] [i_3 - 1] [i_4]);
                            var_25 = (max(var_25, ((max((min(54033, (65395 ^ 61298))), ((var_5 ? (arr_10 [i_2 + 2] [i_3 + 1] [i_12 + 2]) : (arr_10 [i_2 + 1] [i_3 - 1] [i_12 - 1]))))))));
                        }
                        arr_53 [i_4] [i_1] [i_1] [i_2 + 2] [i_1 - 1] [i_1] = (((var_13 ? 24391 : var_4)));
                    }
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_57 [0] = ((1 ? (min((var_2 / 16149), ((max((arr_14 [i_13]), 127))))) : (min(-64, (((arr_39 [13]) ? (arr_19 [11] [i_13] [i_13] [i_13]) : (arr_55 [i_13])))))));
        arr_58 [i_13 + 1] = 11240;
    }
    var_26 |= (((var_17 % 143) ? 41161 : (((((max(6, var_8))) >= var_6)))));
    #pragma endscop
}
