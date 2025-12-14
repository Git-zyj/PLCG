/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_3 ? var_2 : (((3238764888981500789 | var_1) ? 123 : ((15207979184728050827 << (var_5 - 7866298950166109336))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = -1252345466;
        var_12 = (min(2919350959, (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_13 = (((max((11549779482559435674 & -123), (arr_0 [i_0]))) < (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((((24306 != (arr_1 [i_1])))) % 63)) > (((((arr_5 [i_1]) << 0))))));
        var_14 += (((((arr_1 [i_1]) > (arr_1 [i_1]))) ? (arr_2 [i_1]) : (arr_0 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 = (((arr_4 [i_1]) ? 181 : (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_2])))));
                        var_16 = (arr_2 [i_1]);
                        var_17 = (min(7, -113));
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_18 = ((((max(((max((arr_15 [i_1] [i_5]), (arr_15 [i_1] [i_1])))), 24262))) ? (arr_13 [i_1] [i_1]) : 1674756954));

            /* vectorizable */
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                arr_18 [i_1] [i_1] [i_6] = ((((((arr_1 [i_5]) ? -1 : (arr_8 [i_1])))) ? (arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]) : 255));

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_21 [i_1] [i_5] = (((84 + -127) ? (arr_20 [i_5 + 2] [i_5] [i_6] [i_6 - 1]) : 83));
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_7 [i_5 + 1] [i_5]) ? ((((arr_5 [i_1]) || 54268))) : (arr_15 [i_7] [i_5 + 1])));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_6] [i_6] [i_6] = (arr_3 [i_6]);
                    arr_27 [i_8] [i_6] [i_5] [i_1] = (arr_4 [i_1]);
                    var_19 = ((((arr_9 [i_5] [i_5] [i_6 - 1] [i_6 - 1]) != (arr_11 [i_1] [i_1] [i_1] [i_1]))));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_20 *= 12499282680461589918;
                        var_21 = (arr_12 [i_5]);
                        arr_34 [i_1] [i_1] [i_1] [i_9] [i_1] = arr_33 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10];
                        arr_35 [i_1] [i_5 - 1] [i_5 + 1] [i_9] = ((-1805390037 ? (arr_29 [i_1] [i_5 + 1] [i_1] [i_9] [i_9] [i_9]) : (arr_17 [i_5] [i_5 - 1] [i_6 + 1] [i_6])));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_22 = (((arr_12 [i_11]) + (arr_28 [i_5 - 1] [i_5 - 1] [i_6 + 1] [i_6 + 1])));
                        arr_38 [i_1] [i_5] [i_6] [i_9] [i_6] &= (((arr_3 [i_11]) ? (arr_12 [i_6 - 1]) : (37 >= 15207979184728050825)));
                        var_23 = -19;
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_1] [i_6] = -1;
                        arr_42 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] = (arr_13 [i_5] [i_9]);
                        var_24 = 7;
                        arr_43 [i_9] [i_12] = -90;
                        var_25 = (arr_4 [i_1]);
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((12499282680461589918 + (arr_10 [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 1])));
                        arr_48 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = 24307;
                        var_26 ^= (((arr_10 [i_5] [i_5 - 1] [i_6 + 1] [i_13]) & (arr_24 [i_1] [i_5 + 2])));
                    }
                    var_27 += (arr_46 [i_5 + 2] [i_5 + 2]);
                }
                arr_49 [i_1] [i_5] [i_5] [i_6] = (((((arr_15 [i_1] [i_1]) / 79)) >> 7));
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_28 ^= (arr_10 [i_1] [i_5] [i_14] [i_5 + 2]);
                var_29 = (max(var_29, (arr_2 [i_1])));
            }
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                var_30 *= -8;
                var_31 = (arr_5 [i_5 - 1]);
            }
            var_32 = (((((min((arr_28 [i_1] [i_5] [i_5] [i_5]), (arr_40 [i_1] [i_5] [i_5] [i_5] [i_5]))))) || (arr_1 [i_5 - 1])));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    {
                        arr_62 [i_1] [i_16] [i_16] [i_16] [i_18] = -129889865;
                        var_33 = ((((18259982813708230300 ? 308709698 : (arr_25 [i_1] [i_16 + 2] [i_16 + 2] [i_1]))) >> ((((11267 ? -1 : -19)) + 2))));
                    }
                }
            }
            var_34 *= (arr_29 [i_16] [i_16 + 2] [i_16] [i_1] [i_1] [i_1]);
        }

        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            var_35 = (min(var_35, (((65 ? ((min((arr_37 [i_1] [i_1] [i_19] [i_1] [i_19]), (arr_31 [i_19])))) : (((arr_4 [i_1]) ? (arr_57 [i_1] [i_1] [i_19] [i_1]) : (arr_61 [i_1] [i_1] [i_1] [i_19]))))))));
            var_36 -= max(191, 16383);
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 16;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 14;i_21 += 1)
        {
            {
                arr_72 [i_20] = (arr_53 [i_20] [i_21]);
                var_37 = 1;
                var_38 = 15;
                var_39 += min((((arr_53 [i_21 + 1] [i_21 + 1]) ? (arr_53 [i_21 + 1] [i_21]) : 127)), ((max((arr_53 [i_21 + 1] [i_21]), (arr_53 [i_21 + 1] [i_21 + 1])))));
                arr_73 [i_20] [i_21] [i_20] = 63;
            }
        }
    }
    #pragma endscop
}
