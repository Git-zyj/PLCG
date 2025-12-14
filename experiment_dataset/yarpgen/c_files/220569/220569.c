/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min(var_14, (arr_2 [i_0] [i_0])));
        var_20 &= var_16;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 *= (max((arr_1 [i_0]), (((min(0, 4547))))));
            var_22 *= 4531;
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_23 = arr_11 [i_2] [i_2] [0];

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= (7 ? (((arr_9 [i_2] [i_2] [i_2]) % -5)) : ((((min(4546, (arr_0 [20] [4])))))));
                        var_24 = 4546;
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, var_17));
                        var_26 ^= 65535;
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_23 [i_5] [i_5] [i_5] [11] [i_5] = (((!5) ? 7 : (((!(arr_2 [i_4] [i_4]))))));
                        var_27 ^= min((((var_16 >> (var_2 - 388230644)))), ((~(min((arr_16 [i_2] [i_3] [i_2] [i_4] [i_5] [i_8]), (arr_4 [i_2] [i_3] [12]))))));
                        arr_24 [i_5] [i_8] |= var_16;
                    }
                    var_28 ^= (4546 ? 65505 : 65526);
                    var_29 = (min(var_29, (var_9 & var_0)));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_30 = var_10;
                        arr_27 [i_2] [i_2] = (((arr_7 [i_2]) ^ var_18));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_30 [i_10] [i_2] [i_2] [i_5] [5] [i_5] &= (-5813136662826764474 > var_7);
                        var_31 = var_4;
                        var_32 = (((!2147483647) ? ((-(arr_14 [i_2] [9] [i_5]))) : (arr_1 [i_4])));
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_33 = (var_17 | (arr_0 [i_2] [i_2]));
                        var_34 = (!(~-4531));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_35 = (arr_0 [3] [i_5]);
                        arr_36 [i_12] = ((((min(var_13, (12833 && 9223372036854775807)))) ? (((((arr_32 [i_2] [i_3] [i_4] [i_5] [20] [i_12]) > -5)))) : ((((((arr_7 [i_4]) ? var_17 : var_13))) ? -10 : ((max(33655, (arr_17 [9] [i_5]))))))));
                        var_36 *= ((((((((arr_29 [i_5] [18] [i_5] [i_5] [i_5]) ? (arr_15 [i_12] [i_12] [i_12] [i_5] [i_12]) : var_2)) + (arr_34 [i_2] [9] [9] [i_5] [i_12])))) ? (arr_1 [i_12]) : ((var_6 ? (arr_9 [i_2] [i_2] [i_5]) : (((3 ? var_14 : var_0)))))));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_2] [i_2] [i_2] [1] [9] [i_2] [i_2] = (((-((21 ? (arr_15 [i_2] [i_3] [i_3] [i_3] [i_13]) : var_19)))));
                        var_37 = 4294967295;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        var_38 = ((-(((arr_19 [i_2] [i_3] [i_3] [i_5] [i_14] [i_14]) ? (-127 - 1) : -508554303))));
                        arr_46 [i_2] [i_2] [i_2] [i_2] [i_14] = (arr_29 [i_5] [i_5] [i_4] [i_3] [i_2]);
                    }
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                {
                    var_39 = (((~(arr_29 [10] [i_4] [i_4] [i_3] [15]))));
                    var_40 ^= 0;
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                {
                    arr_51 [i_2] [i_2] [i_4] = ((((((arr_31 [i_3]) | (-32767 - 1)))) ? (((var_4 ? 65520 : var_16))) : (((arr_20 [i_2] [i_2] [i_2] [i_2] [5] [i_2] [i_2]) ? var_5 : -26777))));
                    var_41 |= arr_32 [i_2] [i_2] [i_2] [i_2] [19] [i_2];
                    var_42 ^= (!((((-9223372036854775807 - 1) ? var_6 : (arr_15 [i_2] [i_3] [i_2] [i_4] [i_16])))));
                    arr_52 [i_16] [i_4] [1] [1] [1] = 26775;
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    arr_57 [i_2] [i_3] [12] [i_17] = ((0 ? (((31110 || (arr_9 [3] [i_3] [i_2])))) : 104));

                    for (int i_18 = 3; i_18 < 22;i_18 += 1)
                    {
                        arr_60 [i_4] [i_18 - 2] = var_2;
                        var_43 = (max(var_43, ((((arr_20 [i_18 - 1] [i_18 - 2] [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 - 1] [i_18 - 2]) | (arr_25 [i_2] [i_2] [i_18 - 2] [i_2] [6]))))));
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_44 = ((var_17 ? (~var_19) : (arr_48 [i_2] [7] [i_17] [i_17] [i_19])));
                        var_45 = var_13;
                        var_46 = ((var_16 ^ (arr_43 [i_2] [i_3] [i_4] [i_17])));
                    }
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        var_47 = var_13;
                        var_48 = (min(var_48, var_10));
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        var_49 = (min(var_49, (~-var_13)));
                        arr_69 [15] [i_3] [i_4] [i_17] [i_17] [i_4] = (1 && var_16);
                        arr_70 [i_3] [i_4] = ((var_8 ? (!6671961078751324195) : var_2));
                    }
                }
            }
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                arr_75 [i_3] = ((!(((var_13 - (arr_54 [i_22] [i_22] [9] [i_2] [i_2]))))));
                arr_76 [i_2] [i_3] [i_22] |= -var_12;
                var_50 = (min(var_50, ((((min((arr_2 [i_2] [i_3]), (((!(arr_2 [12] [21])))))) != var_17)))));
                arr_77 [i_2] [i_3] [i_22] [i_22] = ((-(arr_48 [13] [i_3] [i_22] [0] [0])));
            }
            var_51 = (min(var_51, (((arr_72 [i_3] [12] [i_3] [14]) ? (((!(((65535 ? 139 : -4548)))))) : var_14))));
            arr_78 [i_2] = (~-9);
            arr_79 [i_2] [i_3] [i_3] |= var_0;
        }
        for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
        {
            var_52 -= ((((((max((arr_61 [i_2] [11] [17] [i_23] [i_23] [i_23] [i_23]), var_16))) ? 9223372036854775807 : var_4)) != ((((var_5 & -5) ? 93 : (~0))))));
            var_53 &= var_7;
            arr_82 [22] [i_23] = (arr_53 [i_2] [i_2] [i_2] [0]);
            var_54 += var_5;
        }
        for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
        {
            var_55 = (arr_2 [i_2] [i_24]);
            var_56 = (min((((var_9 ? var_3 : var_3))), ((max(((~(arr_4 [i_2] [i_2] [i_2]))), 12439)))));
        }
        var_57 += (arr_74 [i_2] [i_2] [i_2]);
        var_58 = (max(var_58, (arr_6 [i_2])));
        arr_85 [21] [i_2] = max(((var_10 ? ((32767 ? 4294967295 : 536870912)) : var_3)), var_1);
    }
    var_59 *= ((var_2 ? (((max(7, var_16)))) : ((((min(4294967295, 10074081125266690824))) ? (var_10 / var_3) : 65520))));
    #pragma endscop
}
