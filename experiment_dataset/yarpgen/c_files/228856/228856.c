/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = (arr_2 [i_0]);
        arr_3 [i_0] = ((((arr_0 [i_0]) < (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (arr_4 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] &= (6784218650965242686 <= -6269);
            var_15 = (arr_5 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_16 += (arr_5 [i_1]);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {
                        var_17 = (arr_15 [i_5 - 1] [i_4 + 1] [i_4 - 1]);
                        var_18 = ((arr_15 [i_1] [i_1] [i_4 - 1]) + (arr_15 [i_1] [i_3] [i_4 - 1]));
                        var_19 = (arr_9 [i_5 + 1]);
                        var_20 = (((arr_11 [i_1]) / (arr_5 [i_1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_27 [i_1] [i_8] [i_7] [i_7] [i_1] [i_1] = (arr_18 [i_7] [i_7 - 1] [i_6 + 1] [i_6 - 1]);
                            var_21 = (arr_9 [i_7]);
                            arr_28 [i_1] [i_1] [i_7] = (arr_7 [i_6 - 1] [i_7 - 1]);
                            arr_29 [i_1] [i_7] [i_3] [i_3] [i_7] [i_3] = 39;
                        }
                    }
                }
            }
            var_22 = (min(var_22, (arr_7 [i_1] [i_1])));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_32 [i_1] [i_1] = (arr_30 [i_1]);
            var_23 = (arr_20 [i_1] [i_1] [i_1]);
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_24 = -6269;
                        var_25 = (arr_11 [i_11]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            var_26 = (arr_26 [4]);
            var_27 = (arr_38 [i_14 + 1] [i_14 + 1] [i_14 + 1]);
            var_28 = (arr_4 [i_14]);
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_29 = (arr_24 [i_13] [i_15]);
            var_30 = ((((arr_21 [i_13] [i_13] [i_13] [i_13]) / (arr_17 [i_13] [i_13] [i_13] [i_13]))));
            var_31 = (arr_21 [i_13] [i_13] [i_13] [i_15]);
            var_32 = (arr_36 [i_15]);
            arr_49 [i_13] [i_13] = (arr_47 [i_13] [i_15]);
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            arr_52 [i_13] = (((arr_33 [i_16]) > (arr_33 [i_16])));
            var_33 += (arr_12 [i_13] [i_13]);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    {
                        var_34 = (((arr_17 [i_13] [i_13] [i_17] [i_18]) + (arr_50 [i_13])));
                        arr_59 [i_13] [i_16] [i_17] [i_17] [i_18] = (((arr_23 [i_16] [i_16] [i_16] [i_16]) != (arr_39 [i_13] [i_16] [i_17] [i_18])));
                    }
                }
            }
            var_35 = ((((arr_22 [i_16] [i_16] [i_16] [i_13]) ^ (arr_17 [i_13] [i_13] [i_13] [i_13]))));
            arr_60 [i_16] [i_13] = (arr_42 [i_16]);
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            var_36 = (arr_18 [i_13] [i_13] [i_19] [i_19]);
            arr_63 [i_19] = (arr_9 [i_19]);
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    {
                        var_37 = (arr_1 [i_13]);
                        arr_70 [i_13] [i_13] [i_20] = (arr_44 [i_13] [i_19] [i_20]);
                        var_38 = (min(var_38, (arr_26 [i_19])));
                        var_39 = (((arr_68 [i_13] [i_13] [i_20] [i_13] [i_21] [i_21]) != (arr_64 [i_13] [i_19] [i_20])));
                    }
                }
            }
            arr_71 [i_13] = (((arr_13 [i_13]) / (((arr_19 [i_13] [i_13]) / (arr_35 [i_13] [i_13] [i_19])))));
        }
        arr_72 [i_13] = (arr_16 [6]);
    }
    var_40 &= var_8;
    var_41 = var_0;

    for (int i_22 = 4; i_22 < 23;i_22 += 1)
    {
        arr_75 [i_22] = (arr_74 [i_22]);
        arr_76 [i_22] = (arr_73 [i_22 - 1] [i_22 - 2]);
    }
    for (int i_23 = 1; i_23 < 14;i_23 += 1)
    {
        var_42 &= (((arr_16 [4]) != ((((arr_73 [i_23] [i_23 + 1]) + (arr_50 [i_23]))))));
        var_43 = (arr_66 [i_23]);
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 15;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {
                {
                    arr_83 [i_23] [i_23] [i_24] [i_23] = (arr_51 [i_23] [i_24] [i_23]);
                    var_44 = (arr_7 [i_23] [i_23 + 1]);
                    arr_84 [i_23] [i_23] [i_24] = (arr_9 [i_23 - 1]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 10;i_26 += 1)
    {
        var_45 = (arr_37 [i_26] [i_26] [i_26]);
        arr_87 [i_26] [i_26] = (arr_66 [i_26]);

        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            var_46 = (arr_51 [i_26] [i_26] [i_26]);
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 10;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 10;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 10;i_30 += 1)
                    {
                        {
                            var_47 += (arr_15 [i_26] [i_27] [i_28]);
                            var_48 = (arr_45 [i_27] [i_28] [i_27]);
                        }
                    }
                }
            }
        }
        for (int i_31 = 0; i_31 < 10;i_31 += 1)
        {
            var_49 = (arr_97 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]);

            for (int i_32 = 0; i_32 < 10;i_32 += 1)
            {
                arr_104 [i_26] [i_31] [i_32] [i_32] = -935487813;
                var_50 = -6297;
                arr_105 [i_26] [i_26] [i_26] [i_26] = (((arr_15 [i_26] [i_31] [i_32]) >> (((((arr_14 [i_26] [i_31] [i_26] [i_31]) * (arr_44 [i_32] [i_31] [i_26]))) - 2978284572))));
                arr_106 [i_31] [i_31] [i_31] [i_32] = (((arr_1 [i_32]) ^ (arr_1 [i_26])));
            }
        }
        arr_107 [i_26] = (arr_51 [i_26] [i_26] [i_26]);
        var_51 = (arr_73 [i_26] [i_26]);
    }
    #pragma endscop
}
