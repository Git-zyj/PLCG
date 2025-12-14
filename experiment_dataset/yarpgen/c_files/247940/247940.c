/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_2, var_11)))) ? (min((var_12 < var_6), (max(5560704099509421157, 8589672448)))) : var_10));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (228122099 >= 28);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] = 16384;
            var_18 = (((arr_3 [i_0] [i_0]) ? (((1 ? var_4 : 3840))) : (arr_2 [i_0 - 2])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0 - 2] [i_0 - 2] [i_0 + 1] [0] |= (arr_7 [i_2] [i_3]);
                    arr_16 [i_0] [i_1 - 1] [i_0] [i_2] [i_3 - 1] = (((((var_3 ? (arr_2 [i_0]) : (arr_10 [i_0] [i_1] [i_2])))) ? ((var_15 * (arr_10 [i_0] [5] [i_2]))) : 36));
                }
                for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_19 = (1 - var_3);
                        arr_22 [i_0] [i_0] [i_2] [i_4 - 3] [i_4] [i_5] = (((-57 + 2147483647) >> (((arr_20 [i_5 - 1] [i_2] [i_1 + 3] [i_0] [i_0 + 1]) - 806680764))));
                        arr_23 [i_0 - 1] [i_0] [i_1] [i_2] [i_0] [i_5 - 1] = (arr_17 [i_0] [i_4] [i_2] [i_1] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_4] [i_4 - 1] [i_6] = var_4;
                        var_20 ^= ((var_9 ? 1 : (arr_11 [i_0])));
                        var_21 = (var_1 + var_10);
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_22 = (((46 >> (511 - 506))));
                        arr_31 [i_0] [i_0] [i_2] = (arr_14 [i_0] [i_1] [i_1 - 1] [i_4] [i_0] [i_2]);
                    }

                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_4] [i_8 - 1] [i_4] [i_1] = ((var_11 ? (arr_33 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1]) : (arr_33 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])));
                        arr_35 [i_0] [i_1] [i_2] [i_4] = 1011102270;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_40 [i_0] [i_4] [i_0] [i_4 - 2] = var_10;
                        arr_41 [i_9] [i_0] [i_2] [i_0] [i_0] = (((arr_25 [i_0] [i_4 - 1] [4] [i_0 + 1] [i_9] [i_4]) ? var_4 : (arr_10 [i_0] [i_1 + 2] [i_4 - 3])));
                        arr_42 [i_0] [14] [i_0] [i_0] [10] [i_9] |= (-30798 / var_1);
                        var_23 ^= (((arr_32 [i_9]) ? (arr_32 [i_9]) : (arr_32 [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_24 = var_12;
                        var_25 = (arr_19 [i_0]);
                    }
                    arr_45 [i_0] [i_0] [i_2] [i_4] = (((arr_7 [i_1] [i_1]) == (((arr_24 [i_0]) ? (arr_24 [i_0]) : var_4))));

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_26 = (max(var_26, ((((18446744073709551595 | 27902) & 126)))));
                        var_27 = (3 * 1);
                    }
                }
                arr_48 [i_0 - 1] [i_0 - 1] [i_1] [6] &= (((arr_13 [i_0] [i_0] [i_0] [i_0 + 1]) % ((((var_7 != (arr_20 [i_0 - 2] [i_1] [i_2] [i_1 + 3] [i_2])))))));
                var_28 = (var_2 % var_5);
                arr_49 [i_0] = (1 / 116024869);
            }
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                var_29 = (-6202421987334799583 + 37635);
                var_30 = var_4;
                arr_52 [i_0] [i_0] [i_12] = (((arr_47 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [6] [i_0]) + var_16));
            }
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_63 [i_0] [i_1 + 1] [i_1] [i_13] [i_14] [i_15] [i_0] = var_8;
                            var_31 ^= (arr_18 [i_1]);
                            var_32 ^= var_7;
                            var_33 = (((arr_29 [i_0] [i_0] [i_15 + 2]) ? (arr_29 [i_0] [i_14] [i_15 + 2]) : (arr_29 [i_0] [i_1] [i_15 + 2])));
                        }
                    }
                }
            }
            var_34 = (((arr_14 [i_0 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_1]) ? (arr_14 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_1] [i_0] [i_1]) : (arr_44 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 + 3])));
        }
        var_35 -= ((arr_55 [4] [i_0]) * (38567 < 37633));
    }
    for (int i_16 = 3; i_16 < 21;i_16 += 1)
    {
        var_36 = (max(var_36, (arr_66 [2])));
        var_37 = ((var_13 ? (((arr_65 [i_16]) ? (arr_65 [i_16]) : (arr_65 [i_16]))) : ((((arr_66 [i_16]) < ((((((arr_64 [i_16]) + 2147483647)) >> (((arr_64 [i_16]) + 5587))))))))));
        var_38 = (arr_66 [22]);
    }
    #pragma endscop
}
