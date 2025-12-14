/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max(((~(arr_2 [i_2]))), ((max((arr_6 [i_2]), (var_0 && var_7))))));
                    var_20 = (min(var_20, (((18446744073709551615 ? (arr_1 [i_0]) : ((max((arr_1 [i_2 + 1]), (((-15208 || (arr_8 [i_0] [i_0]))))))))))));
                    var_21 += ((var_11 || (((((4686835394054230679 ? var_0 : (arr_6 [i_0])))) || (-27409 | var_10)))));
                }
            }
        }
    }
    var_22 ^= ((var_12 / (var_16 != var_0)));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_23 = (((((arr_10 [i_4] [i_3]) ? var_6 : (arr_14 [i_3] [i_4]))) / ((~(arr_11 [i_4])))));
            var_24 = (arr_12 [i_3] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_25 = (arr_19 [i_4] [i_4] [11]);
                        var_26 = (min(var_26, (((-(arr_14 [i_4] [21]))))));
                    }
                }
            }

            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                var_27 |= ((((var_3 << (-5962 + 5966))) >> (var_0 + 29031)));
                var_28 -= (arr_17 [i_3]);
                var_29 = (min(var_29, (arr_25 [i_3] [i_3])));
            }
            var_30 = ((1162897745 ^ (arr_16 [i_4])));
        }
        var_31 = (4290211711377398983 / 48285);
        var_32 ^= (((arr_15 [i_3] [i_3] [i_3]) ? (arr_18 [i_3] [i_3]) : var_7));

        for (int i_8 = 4; i_8 < 24;i_8 += 1)
        {
            var_33 -= (1642484979 | var_0);
            var_34 = 0;
            var_35 = (min(var_35, (((!(arr_24 [i_3]))))));
        }

        for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_36 -= (arr_16 [i_3]);
            arr_32 [i_9] [0] [i_3] |= (arr_12 [i_3] [i_3]);
            var_37 = (max(var_37, (arr_18 [i_9 - 1] [i_9 - 3])));
            var_38 = ((arr_23 [i_9 - 3] [i_9 + 2] [i_3] [i_3]) - (arr_23 [i_9 + 1] [i_9 + 1] [i_3] [18]));
        }
        for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_39 = (min(var_39, 18446744073709551606));
            var_40 ^= (arr_10 [i_10] [i_3]);
        }
        for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                var_41 |= ((16 & (13106 | var_4)));
                var_42 &= arr_20 [i_3] [i_11] [i_11] [i_3];
            }
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                var_43 = (((((-(arr_33 [i_3] [i_11])))) - var_18));
                var_44 -= (arr_41 [10] [10] [i_3]);
            }
            for (int i_14 = 1; i_14 < 23;i_14 += 1)
            {
                var_45 = (max(var_45, ((((arr_18 [i_14 - 1] [4]) ? -var_12 : (arr_27 [i_11 + 1] [i_14 - 1] [i_14 - 1]))))));
                var_46 |= (arr_25 [i_11 + 1] [i_11 - 2]);
                var_47 = ((~(arr_26 [i_3] [i_14] [i_14 + 1])));
            }
            var_48 ^= ((341438217 >> (((arr_35 [i_3]) - 10824436190011333941))));
            var_49 &= (arr_39 [i_3]);
            var_50 ^= (arr_25 [i_11 - 2] [i_11 - 2]);
        }
        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_51 = var_14;
                var_52 = (arr_16 [i_15]);
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    {
                        var_53 = 27971;

                        for (int i_19 = 4; i_19 < 23;i_19 += 1) /* same iter space */
                        {
                            var_54 = (max(var_54, (((!(arr_31 [i_15 - 1]))))));
                            var_55 = (~var_18);
                            var_56 = ((arr_16 [i_15]) | (((arr_23 [i_3] [16] [i_15] [i_19 + 1]) ? var_9 : 18446744073709551606)));
                        }
                        for (int i_20 = 4; i_20 < 23;i_20 += 1) /* same iter space */
                        {
                            var_57 = ((((286807112 ? var_5 : var_15)) * 10536042402672940358));
                            arr_64 [i_3] [i_15 - 1] |= (arr_58 [i_15] [15] [i_18] [i_20]);
                        }
                        for (int i_21 = 4; i_21 < 23;i_21 += 1) /* same iter space */
                        {
                            var_58 = (max(var_58, 0));
                            var_59 = arr_11 [i_17];
                        }
                        var_60 ^= arr_37 [i_3] [i_17] [i_3];
                        arr_67 [i_15] [i_17] [i_3] |= (var_5 ^ 1642484979);
                        var_61 = ((4 - var_18) ? (arr_18 [i_15 + 1] [4]) : (arr_15 [i_15 + 1] [i_15 + 1] [i_15 + 1]));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 15;i_22 += 1)
    {
        var_62 |= (((arr_54 [i_22] [i_22 + 1] [i_22 + 1] [i_22 + 1]) << (18446744073709551608 - 18446744073709551607)));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 16;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    {

                        for (int i_26 = 0; i_26 < 16;i_26 += 1)
                        {
                            var_63 = (18446744073709551608 ? (arr_3 [8]) : (arr_52 [i_22 + 1] [i_22 + 1] [i_22 + 1]));
                            var_64 = var_0;
                        }
                        for (int i_27 = 1; i_27 < 14;i_27 += 1)
                        {
                            var_65 &= (arr_12 [21] [21]);
                            var_66 *= var_1;
                        }
                        for (int i_28 = 1; i_28 < 14;i_28 += 1)
                        {
                            var_67 = (((arr_63 [i_22] [i_23] [i_22] [i_28 + 1] [i_28 + 1]) ? (arr_0 [i_23]) : (arr_28 [i_22] [i_22] [i_22])));
                            var_68 = (((arr_60 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22]) && (arr_76 [i_22] [i_23] [i_23] [i_23] [i_28 - 1] [i_28])));
                            var_69 += (((arr_75 [i_22 + 1] [i_23] [i_23]) ? (arr_75 [i_22] [i_22] [i_25]) : (arr_75 [i_22] [i_22] [i_24])));
                            var_70 = (22649 << (((arr_1 [i_28 + 1]) + 21276)));
                            var_71 = (max(var_71, ((((((var_6 ? (arr_74 [i_23] [i_23] [i_23]) : -1642484954))) && ((((arr_22 [i_22] [i_25]) >> (18446744073709551614 - 18446744073709551602)))))))));
                        }
                        var_72 = -7571;
                    }
                }
            }
        }
        arr_84 [4] |= (arr_14 [i_22] [5]);
    }
    #pragma endscop
}
