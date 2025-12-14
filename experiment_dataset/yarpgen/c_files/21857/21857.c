/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (26 < 0);
    var_17 ^= 0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = -12;
                        var_20 = 2377562514;
                        var_21 = (min(var_21, (((~((((((-(arr_5 [1])))) < (max(1792952670, var_9))))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (((arr_6 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (var_12 || var_2) : (~var_1)));
        var_22 = (!var_14);
        var_23 = ((1 < (-28966 || -64)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_24 = (min((arr_16 [i_5]), (~1673501251)));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                var_25 = (min(var_25, var_1));
                arr_23 [i_5] = ((((var_13 & (~1792952680))) | (((4248009622 || (42 | 2356350344))))));
                arr_24 [i_5] [i_6] [i_5] = (max(var_15, (max((arr_16 [i_6]), (181 | var_6)))));
            }
            var_26 = ((arr_15 [i_5]) <= ((((~(arr_3 [i_5] [i_6] [i_6]))) + (arr_20 [i_5] [i_5]))));
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            arr_29 [i_5] [i_8] = (((arr_22 [i_8 - 1] [i_8 - 2] [i_8] [i_8]) != (-1792952686 || var_8)));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_27 = (min(var_27, (arr_18 [i_10] [i_10])));
                        arr_35 [i_5] [i_9] [i_9] = (((arr_15 [i_8 - 1]) * (arr_15 [i_8 - 2])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_28 = ((((((((arr_38 [i_5] [i_5] [i_5]) + 2147483647)) << (((arr_26 [i_5]) - 3800860535417723802))))) * 3675699877));
                            var_29 = (~var_9);
                        }
                    }
                }
            }
            var_30 = (arr_28 [i_5] [i_5] [i_5]);
            arr_44 [i_5] = (((var_6 > 17) != var_4));
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            var_31 = (max(var_31, (((!(3589624773 | -1792952709))))));
            /* LoopNest 3 */
            for (int i_15 = 3; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_32 = (max(var_32, (arr_42 [1] [i_15 - 3] [i_16] [i_17])));
                            var_33 = ((((((((arr_20 [11] [i_5]) || -1673501243))) * var_14)) + var_14));
                            var_34 *= (max(var_0, (((35449 ? 193 : var_12)))));
                            var_35 = (min((((arr_28 [i_14 - 1] [i_15 - 1] [i_15 - 3]) % (arr_51 [i_14 - 1] [i_15 - 3] [i_15 - 3] [i_5] [8]))), ((((arr_52 [i_5] [i_14] [i_14] [i_17 - 1]) == 74)))));
                        }
                    }
                }
            }
            var_36 ^= ((~(((62 || (((arr_40 [i_5] [i_14 - 1] [i_5] [i_5]) > 17841)))))));
            var_37 = (min((max(((var_9 ? (arr_26 [i_5]) : 32765)), var_12)), var_13));
            var_38 = -var_6;
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
    {
        var_39 = (arr_51 [i_18] [i_18] [2] [4] [i_18]);

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                var_40 = (arr_60 [i_18]);

                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_41 ^= ((((((arr_26 [i_19]) && var_14))) >= (~var_4)));
                    var_42 -= 16;
                    var_43 = (((arr_51 [i_18] [i_19] [i_20] [i_21] [i_20]) > 128));
                }
                arr_68 [i_20] [i_19] [i_18] = var_9;
            }
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {

                        for (int i_24 = 0; i_24 < 12;i_24 += 1)
                        {
                            arr_77 [i_23] [i_22] = (((arr_76 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_24] [i_22 - 1] [i_24]) > 27504));
                            var_44 = (arr_49 [i_22 + 2] [i_19] [i_22 + 1]);
                        }
                        var_45 = 61631;
                    }
                }
            }
            arr_78 [i_19] [i_18] = ((~(~4)));
        }
        for (int i_25 = 0; i_25 < 12;i_25 += 1)
        {
            arr_81 [i_18] = var_11;
            var_46 = (((arr_74 [i_18]) & (arr_74 [i_18])));
        }
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 12;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 12;i_27 += 1)
            {
                {
                    var_47 = 103;
                    var_48 = (max(var_48, var_1));
                    var_49 = ((1 / (arr_8 [i_26])));
                }
            }
        }
    }
    #pragma endscop
}
