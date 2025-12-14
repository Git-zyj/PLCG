/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_20 ^= arr_1 [i_3];

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = (!(arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]));
                        var_21 = (max(var_21, (arr_5 [0] [i_3])));
                        var_22 *= arr_0 [i_3];
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 -= (arr_15 [1] [i_1 - 1] [i_1] [i_1 + 2] [i_1]);
                        var_24 = (max(var_24, (((~(arr_10 [0] [0] [i_3] [i_1 + 1] [1] [i_0] [i_0]))))));
                    }
                    var_25 &= 112;
                }
                var_26 = (max(var_26, 1));
            }
            arr_16 [i_0] [i_0] = 1;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_27 = 117;
                var_28 |= 1;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 = (arr_17 [7] [7]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_30 += (arr_18 [i_1 - 1] [4] [i_1 + 2]);
                    var_31 |= 1;
                    var_32 = arr_6 [i_0] [1] [i_1] [i_0] [i_1] [i_0];
                }
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_33 &= ((((!(arr_3 [i_1 - 1] [i_9 - 1] [i_9])))));
                var_34 = (arr_15 [i_0] [i_0] [i_1] [i_0] [2]);
                var_35 = (arr_28 [i_0] [i_1 - 1] [i_1 + 2] [i_9 - 1]);

                for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_36 += -12;
                    arr_32 [i_0] [i_0] = 44;
                    var_37 = 1;
                }
                for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_1 + 1] [i_9] [i_0] = (~1);
                    var_38 *= arr_9 [1] [i_1 + 1] [i_1 + 1] [i_11];
                }
                var_39 -= (arr_23 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_1 - 1] [i_1]);
            }

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_40 += ((~(arr_5 [i_1] [1])));
                        var_41 -= 3;
                    }
                    var_42 = (arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                }
                var_43 = (min(var_43, (arr_6 [1] [i_1 + 2] [0] [i_1] [1] [1])));
                var_44 = (max(var_44, (arr_18 [i_0] [1] [1])));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                arr_45 [i_0] [i_1] [i_0] [i_15] = (arr_10 [i_1 + 2] [1] [i_1 + 1] [1] [i_1 + 2] [i_1 - 1] [6]);
                var_45 = (min(var_45, (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [1] [i_1 + 1] [i_1 + 2] [i_1 - 1])));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_46 = (max(var_46, 1));

                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    var_47 = arr_25 [i_1 + 2] [i_17 - 1];

                    for (int i_18 = 1; i_18 < 16;i_18 += 1)
                    {
                        arr_53 [1] [i_17] [i_16] [i_1 - 1] [1] &= arr_1 [1];
                        arr_54 [i_0] [1] = 1;
                    }
                    var_48 = (arr_3 [i_17 + 1] [i_17 + 2] [i_17 + 2]);
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_49 = (max(var_49, 127));
                    var_50 ^= -1;
                    var_51 = (max(var_51, (((-(arr_24 [i_0] [i_0] [i_1] [i_1 + 1]))))));
                    var_52 = arr_47 [i_0] [i_1 + 2] [i_16] [i_1 - 1];
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        arr_61 [i_1] [i_1] [i_1] [i_20] [i_1] [i_0] = arr_57 [i_1 - 1] [i_0] [i_0] [i_1] [i_1 - 1] [i_1 - 1];
                        var_53 = (max(var_53, -1));
                        var_54 = 1;
                    }

                    for (int i_22 = 3; i_22 < 17;i_22 += 1)
                    {
                        var_55 = (min(var_55, (arr_20 [i_1 - 1] [i_22 - 3] [i_22 - 1] [i_22 + 2])));
                        arr_64 [i_0] [i_1] [1] [i_0] [i_20] [i_22] = (!(arr_21 [i_1 + 1] [i_22 + 1] [i_22]));
                        var_56 -= arr_5 [i_1 - 1] [1];
                        var_57 = (min(var_57, (arr_19 [i_1 - 1] [i_1 - 1] [i_22 - 3])));
                    }
                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        arr_68 [0] [0] [1] [0] [i_0] [i_23] = (arr_1 [i_0]);
                        var_58 -= 9;
                        arr_69 [1] [i_23] [i_16] [i_20] [i_23] [i_0] [1] = -81;
                    }
                    for (int i_24 = 1; i_24 < 17;i_24 += 1)
                    {
                        var_59 ^= 1;
                        arr_72 [i_0] [1] [i_0] = (arr_27 [i_0] [1] [i_0]);
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_60 = 1;
                        arr_76 [i_25] [i_0] [i_16] [i_16] [i_0] [i_0] = arr_39 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2];
                        var_61 = (arr_18 [16] [i_0] [i_0]);
                        var_62 = (max(var_62, (arr_11 [i_0] [i_0] [i_16] [i_1] [i_20] [1] [i_20])));
                    }
                    arr_77 [1] [i_0] [i_16] = (!(arr_43 [i_1 + 2] [i_1 + 1] [i_1 - 1]));
                    var_63 -= (arr_42 [1] [i_16] [i_16] [i_1] [i_1 + 2] [i_0]);
                    arr_78 [i_20] [i_0] [i_0] [1] = arr_75 [i_0] [i_0] [i_0] [i_0];
                }
                for (int i_26 = 1; i_26 < 18;i_26 += 1)
                {
                    var_64 = (max(var_64, 0));
                    var_65 ^= 1;
                    var_66 = (max(var_66, (arr_14 [i_1] [1] [i_1 - 1] [i_1] [1])));
                }
                arr_81 [i_0] = (arr_47 [i_0] [9] [9] [i_16]);
            }
        }
        for (int i_27 = 1; i_27 < 17;i_27 += 1) /* same iter space */
        {
            var_67 &= ((-(arr_1 [14])));

            /* vectorizable */
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                var_68 ^= 1;

                for (int i_29 = 1; i_29 < 1;i_29 += 1)
                {
                    var_69 &= -1;
                    var_70 = (min(var_70, (arr_73 [i_0] [i_27 - 1] [i_27] [i_29 - 1])));
                }
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    var_71 = (min(var_71, (arr_33 [i_27] [i_27] [i_27] [4])));
                    arr_96 [i_0] [i_27] [i_28] [i_0] = (~0);
                    var_72 = (min(var_72, (arr_36 [i_27] [i_28])));
                    arr_97 [i_0] [i_0] [i_28] [i_30] = -25;
                }
            }
            arr_98 [i_0] [i_0] [i_27] = (arr_57 [i_0] [i_0] [i_27 - 1] [i_27] [i_27] [i_27 - 1]);
        }
        for (int i_31 = 1; i_31 < 17;i_31 += 1) /* same iter space */
        {
            var_73 -= (arr_17 [i_31 + 1] [i_31]);
            var_74 = (arr_83 [7] [i_31 - 1] [i_0]);
            arr_102 [1] [i_0] [i_31] = ((~(arr_31 [i_0] [i_0] [i_31] [i_31] [i_31 + 2] [i_0])));
        }
    }
    var_75 *= var_13;
    #pragma endscop
}
