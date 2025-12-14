/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (var_5 < var_2)));
    var_11 &= (!(((var_0 ? (~var_0) : (var_3 + var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = (max(var_12, (((~(arr_5 [i_0] [i_0] [i_1]))))));
            arr_6 [2] = (arr_4 [i_0] [1]);
            var_13 = (max(var_13, ((((arr_0 [i_1]) ? (arr_3 [0]) : (arr_1 [10]))))));
        }
        var_14 = (((arr_4 [i_0] [i_0]) * (var_6 || var_6)));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((((var_1 - (arr_0 [i_0])))) * (arr_3 [i_0]));
            arr_10 [i_0] [i_0] [i_0] = (!var_6);
            var_15 = (arr_1 [i_0]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_16 = (max(var_16, (arr_2 [i_3])));

            for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_17 |= ((arr_11 [i_4 + 2] [i_4] [i_4 - 3]) / (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3]));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_18 = ((((((arr_0 [19]) != (arr_8 [i_4] [i_4])))) != (49943 & 19713)));
                            arr_22 [0] [12] [i_4 + 1] [i_5] [i_4] = (((arr_1 [i_4 - 1]) ? (arr_14 [i_4] [18] [i_4] [i_4 + 2]) : (arr_15 [i_4])));
                            arr_23 [i_6] [i_5] [i_4] [i_3] [i_0] = ((((arr_5 [i_0] [i_0] [i_0]) ? var_4 : (arr_2 [i_0]))) >= (arr_20 [i_0] [6] [6] [i_5] [i_6]));
                            var_19 = (~(arr_11 [i_4 + 1] [i_4] [i_3]));
                        }
                    }
                }
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    arr_29 [i_7] = ((var_8 ? (arr_3 [i_8 + 3]) : (var_1 != var_7)));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_20 = ((!var_8) ? (((arr_24 [i_0]) | (arr_8 [i_0] [6]))) : (arr_25 [i_8 + 1] [i_3] [i_7] [i_7]));
                        var_21 = (arr_28 [i_7 - 3] [i_8 - 1] [i_7]);
                        var_22 += ((var_5 & (arr_18 [i_7] [i_7 + 2] [i_8 - 1])));
                        var_23 = (max(var_23, (((arr_31 [i_0] [i_3] [i_7 + 1] [i_8] [i_7 + 1]) ? (arr_31 [i_9] [i_8 + 2] [i_7 + 1] [i_3] [i_0]) : (arr_31 [i_9] [i_8 - 1] [i_7] [i_3] [i_0])))));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_35 [i_7] [i_7 - 2] [i_10] = var_0;
                        var_24 = (arr_16 [i_0] [i_3] [i_7] [i_7 + 1] [i_7] [i_10]);
                        var_25 += var_0;
                        var_26 = (((((arr_19 [i_0] [i_0] [i_7 - 3] [i_7 - 3]) / (arr_24 [i_8]))) << ((((var_4 << (var_3 - 7433883174555774741))) - 3623878627))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 += (arr_18 [15] [20] [i_8 + 3]);
                        arr_38 [i_0] [i_3] [i_7 - 2] [i_8] [i_11] |= ((-8312193888455221922 ? 1 : 116));
                        var_28 = (min(var_28, (((arr_25 [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_8 + 2]) - (arr_25 [i_7 + 2] [i_8] [i_7 + 2] [i_8 + 2])))));
                        var_29 |= (arr_16 [i_3] [i_3] [i_8 + 2] [i_7] [i_3] [14]);
                    }
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_43 [i_7] = (((arr_32 [i_7 + 1]) || (arr_32 [i_13])));
                        var_30 = (arr_25 [i_3] [i_3] [i_7 - 3] [i_13]);
                        var_31 = (max(var_31, 16960));
                    }
                    var_32 -= (((arr_15 [i_3]) / (arr_0 [1])));
                    arr_44 [i_0] [i_3] [8] [i_3] |= (arr_17 [1]);
                }
                arr_45 [1] [i_0] [i_7] [5] = (((arr_16 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]) + var_3));
                var_33 = (arr_41 [i_7] [i_7 - 1] [i_7] [i_0] [i_0] [i_0]);
                var_34 = (max(var_34, (arr_19 [20] [i_7] [i_7] [i_7])));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_48 [i_0] [i_3] [i_7 - 1] [i_7] [i_14] = (((((var_0 || (arr_15 [i_7])))) + (((arr_4 [i_0] [i_3]) ? (arr_12 [10]) : (arr_47 [i_7] [i_7] [i_7] [i_14])))));
                    var_35 += (~3662071748);
                }
            }
            var_36 = (((arr_28 [i_0] [i_3] [i_3]) != (arr_28 [i_0] [i_3] [i_3])));
            var_37 = (((arr_42 [i_0] [10] [i_0] [i_3] [i_3]) % (arr_7 [i_0] [i_0] [14])));
            var_38 += (-16961 % -153692418);
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            var_39 = (max(var_39, (((var_0 ? (arr_8 [i_0] [i_0]) : (var_2 / var_2))))));
            var_40 = ((+(((arr_41 [i_15] [2] [1] [i_15] [i_15] [i_15]) ^ (arr_47 [i_15] [22] [i_0] [i_0])))));
            var_41 ^= (!(arr_0 [i_0]));
            var_42 = (min(var_42, ((((arr_18 [i_0] [i_15] [i_15]) | var_7)))));
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_43 |= (((arr_11 [i_0] [i_16] [i_0]) && (~var_5)));
                arr_55 [i_16] [i_0] [i_16] [i_16] = (((((arr_50 [i_0] [i_16]) - var_0)) + var_2));
            }
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                arr_59 [i_18] [i_18] |= (((arr_17 [i_0]) <= (arr_26 [i_18] [i_16] [i_18])));

                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    var_44 &= (((arr_21 [i_0] [i_16] [i_18] [i_19]) ? (((arr_4 [i_16] [i_16]) / var_7)) : var_4));
                    var_45 = (arr_5 [i_0] [19] [i_18]);
                    var_46 = (max(var_46, (((var_3 - (arr_40 [i_0] [i_18] [i_18]))))));
                    arr_62 [i_0] [1] [i_16] [i_16] [i_0] [i_19] = (((arr_31 [i_0] [i_0] [1] [i_18] [9]) | var_1));
                }
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    var_47 = (min(var_47, (arr_25 [i_16] [i_16] [i_20] [i_20])));
                    var_48 += (((arr_56 [19] [19] [i_20]) ? (arr_56 [i_20] [i_18] [i_16]) : (arr_56 [i_0] [i_16] [i_20])));
                }
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    var_49 &= ((var_8 && (!var_8)));
                    var_50 = (max(var_50, var_5));
                    var_51 &= (106 & -117);
                }
                var_52 = (var_7 / (arr_33 [i_18]));
                var_53 |= (arr_34 [i_18] [i_18] [i_18] [i_18] [i_18]);
            }
            var_54 = (min(var_54, (((((var_3 + (arr_51 [i_0]))) & (((19713 ? 67 : 121))))))));
        }
    }
    for (int i_22 = 4; i_22 < 10;i_22 += 1)
    {
        var_55 = (((((-111 % -1) ^ ((var_4 ? -16958 : 18)))) % 1279213070));
        var_56 &= ((var_1 ? ((((((arr_12 [i_22]) ? var_6 : var_2)) | (var_6 >> var_6)))) : (((arr_54 [i_22 - 1] [i_22 - 1] [i_22]) ? (min(var_8, (arr_53 [i_22] [i_22] [i_22] [i_22]))) : var_3))));
        var_57 = (min((arr_24 [i_22 - 3]), (arr_7 [11] [i_22] [i_22 + 1])));
        arr_70 [1] = (~((min((((arr_68 [i_22 - 3]) > var_8)), (arr_52 [3] [i_22] [18])))));
    }
    #pragma endscop
}
