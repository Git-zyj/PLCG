/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((max(var_7, var_7))) ? (min(var_4, var_6)) : (var_3 || var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) || (arr_2 [i_0] [i_0])));
        var_12 = (max(var_12, (((((arr_1 [i_0]) ? var_1 : var_9))))));
        var_13 = ((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = var_0;
            arr_8 [i_0] [i_1] = (((arr_5 [i_0] [i_0]) ^ (4027053259878215795 / 654536461)));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = (arr_9 [i_1] [i_2 + 1]);
                            arr_18 [i_1] [i_1] [i_3] = ((((((arr_11 [1] [i_1] [i_1] [i_1]) / (arr_3 [i_0])))) * ((var_6 ? (arr_6 [i_0] [i_2]) : (arr_13 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_15 = (arr_19 [i_5 + 2] [i_5 + 2] [i_5 + 2]);

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_6] [9] [9] [i_7] = (arr_25 [i_0] [i_7] [i_8]);
                            arr_30 [i_0] [i_6] [i_6] [2] [i_7] [13] = ((var_10 ? var_6 : (arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_6] [i_5 + 1] [i_5 + 2] [i_5 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_0] [i_5] [i_6] [1] [i_7] &= var_6;
                            var_16 = (min(var_16, ((((~var_1) & (arr_14 [i_0] [i_0] [i_6]))))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_6] [i_7] [i_10] = (((((var_5 ? (arr_14 [i_10] [i_6] [i_6]) : var_8))) ? (!var_4) : var_6));
                            arr_39 [i_0] [i_6] [i_6] [i_7] [i_10] = (arr_37 [i_0] [i_0] [19] [i_6] [i_6] [19] [i_10]);
                        }
                        for (int i_11 = 4; i_11 < 18;i_11 += 1)
                        {
                            arr_44 [i_0] [i_5 - 1] [i_7] [i_6] [5] [19] [18] = (arr_7 [i_0] [i_6]);
                            var_17 = (max(var_17, var_3));
                            arr_45 [i_0] [i_5] [1] [i_6] [i_11 + 2] = arr_28 [i_6];
                            arr_46 [i_6] [i_7] [i_6] [i_5] [i_6] = ((~(~var_6)));
                            arr_47 [i_6] = (((!var_5) ^ (arr_16 [i_0] [i_5] [i_5 + 1] [i_6] [8] [i_11] [i_11])));
                        }
                    }
                }
            }
            arr_48 [i_0] [i_0] = (((arr_15 [i_0] [i_5 + 2]) & (arr_15 [i_0] [i_5 + 1])));

            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                var_18 = (max(var_18, (((~((var_3 ? (arr_22 [i_12] [i_0] [i_0] [8]) : (arr_41 [i_0] [i_5] [i_0]))))))));

                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    arr_53 [16] [16] [i_12] [i_13] [9] = (arr_3 [i_12]);
                    var_19 = var_3;
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_20 ^= (2067085448 & 2067085448);
                    arr_57 [i_0] [i_5] [5] [i_0] = (arr_7 [i_0] [i_14]);
                    var_21 = (((arr_15 [i_0] [i_12 - 2]) ? var_10 : (arr_15 [i_0] [i_0])));
                    arr_58 [i_5] [i_5] [i_5] [i_5] = (arr_21 [i_0] [i_0] [i_14]);
                }
                arr_59 [i_0] [i_5] [i_12] [i_0] = ((var_9 ? ((var_0 ? (arr_14 [i_0] [i_0] [i_12]) : var_3)) : (arr_26 [i_5 - 1] [i_5 + 2] [i_12 - 2] [i_12 - 2])));
                var_22 = (max(var_22, (arr_54 [i_0] [i_5 + 1] [i_5] [i_0] [i_12] [1])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_23 -= ((~((var_10 ? var_9 : (arr_20 [i_5 + 2] [8] [i_15])))));
                            var_24 = (min(var_24, (~var_4)));
                            var_25 |= ((~(arr_65 [i_0] [i_5 + 1])));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {

                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    var_26 = (arr_16 [i_18 + 2] [i_5 + 2] [i_17 + 1] [i_0] [18] [i_5 + 2] [i_0]);
                    var_27 += (((arr_41 [i_17 + 1] [i_17 + 1] [i_0]) ? (arr_41 [i_17 + 1] [i_18 - 1] [i_0]) : (arr_41 [i_17 + 1] [i_18] [i_0])));
                    arr_73 [18] = (arr_15 [i_5 + 2] [i_0]);
                    arr_74 [i_0] [i_0] [i_0] [19] [i_0] [i_0] = (((((var_6 ? (arr_1 [i_17]) : var_9))) ? (((arr_63 [6] [i_17 + 1] [i_0]) ? var_5 : var_4)) : (arr_23 [i_17 + 1] [i_17 + 1] [i_17] [i_17])));
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_28 = (min(var_28, (~var_5)));
                    var_29 = (max(var_29, (arr_0 [i_5 - 1] [i_5 + 1])));

                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        var_30 = (max(var_30, (arr_33 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] [i_0])));
                        arr_82 [i_0] [5] [i_17] [i_19] [1] [2] [i_0] = (arr_75 [17] [i_5] [1] [15] [i_5] [13]);
                    }
                }

                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    arr_85 [i_0] [i_5] [i_17 + 1] [i_0] |= (((!var_7) ? (((var_3 ? (arr_83 [i_5 + 2]) : (arr_50 [i_0] [i_5] [i_17 + 1])))) : var_2));
                    arr_86 [i_21] [i_17] [i_17] = var_4;
                    arr_87 [i_5] [i_21] = ((-(arr_65 [i_17 + 1] [i_5 - 1])));
                }
                var_31 += var_3;
            }
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                var_32 -= (arr_49 [i_5 + 2] [i_22]);
                arr_90 [6] [i_5] [i_5 + 1] [1] = (((arr_41 [i_0] [i_5] [i_0]) ? (arr_41 [i_0] [i_5] [i_0]) : (arr_41 [i_0] [14] [i_0])));
                var_33 = (((arr_40 [i_5 - 1] [i_5 - 1] [9] [i_5 + 2] [i_5 + 1] [i_5 - 1]) ^ var_0));
            }
        }
        var_34 = ((((arr_2 [i_0] [i_0]) >> (((arr_71 [15] [i_0]) + 1036753547)))));
    }
    for (int i_23 = 0; i_23 < 21;i_23 += 1)
    {
        arr_95 [i_23] = ((((((((var_8 ? var_5 : var_3))) ? (min(var_7, var_6)) : (arr_92 [i_23])))) || ((max((arr_94 [20]), var_7)))));
        arr_96 [i_23] [i_23] = var_10;
    }
    var_35 ^= ((-((max(var_7, var_5)))));
    var_36 &= var_1;
    #pragma endscop
}
