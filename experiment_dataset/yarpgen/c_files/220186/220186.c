/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        var_13 = (!35760);
        var_14 = (min(var_14, (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (((arr_7 [i_0] [i_2] [i_2] [i_2]) ? var_5 : (arr_7 [i_1] [i_1] [i_1] [i_1])));
                    arr_8 [3] [i_1] [0] [3] = ((((arr_5 [i_0] [i_1] [i_2]) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_5 [i_0] [i_1] [i_2]))));
                    var_16 = (min(var_16, var_3));
                    var_17 = (69 && var_11);
                }
            }
        }
        arr_9 [3] [i_0] = ((~((~(arr_1 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((!var_6) != ((var_9 ? var_9 : var_4)))) ? var_0 : (((min(61, 1639)))))))));
                    arr_19 [11] [i_4] = (arr_11 [i_4 + 1]);
                }
            }
        }
        var_19 = (min(var_19, (((var_2 ? ((min(var_5, var_7))) : (arr_18 [i_3] [i_3] [i_3]))))));
        var_20 ^= 9408;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 *= 2839751967;
        var_22 = (~var_7);
        var_23 = (arr_6 [i_6] [i_6] [i_6] [11]);
    }

    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_24 *= ((((min(4063232, (((var_8 ? var_3 : -82)))))) && (((7128 - ((min(46731, 1622))))))));
            arr_28 [i_7] = (arr_27 [i_7 - 1] [i_7 - 1] [i_8 + 1]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_25 = (((((min((var_7 | -69), ((96 ? -9432 : var_12)))) + 2147483647)) << (((((arr_4 [2] [i_9]) ? var_2 : 0)) - 3434274053))));
            arr_31 [i_7] [4] = (((-(arr_4 [i_7 + 1] [i_9]))));

            for (int i_10 = 1; i_10 < 6;i_10 += 1)
            {
                var_26 = (min(var_26, var_9));
                var_27 += 35184372088831;

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_28 += (((((var_4 ? (((arr_21 [i_10] [1]) ? (-32767 - 1) : 18446744073709551593)) : var_10))) ? (!-9409) : ((((arr_27 [i_10 - 1] [i_7 + 1] [i_7 + 1]) && 642682002)))));
                    var_29 |= ((((min(17, -9435))) * (18446744073709551584 <= 15153427502606780974)));
                }
                var_30 = (((!-30661) == ((22202 >> (4007490692 - 4007490668)))));
            }
            var_31 = (1 || 22170);
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    {
                        var_32 = (min(var_32, 1));
                        var_33 = (((min(2147483647, 748861119))) ? (((3584 ? var_2 : ((min(65274, var_7)))))) : (min((min(3652285288, var_10)), (var_6 - var_9))));
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            arr_45 [i_14] = (~1);
            var_34 = (!-4);
            var_35 = min(22, 33226);
        }
        var_36 = (max(var_36, (((~((1 ? -10527 : 1)))))));
    }
    for (int i_15 = 3; i_15 < 14;i_15 += 1)
    {
        arr_48 [i_15] [2] = (arr_47 [i_15 - 1]);

        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            var_37 = var_6;

            for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
            {
                arr_53 [i_15] [i_16] [i_16] [i_17] = (((min((!var_11), (min(var_6, 1))))) ? -var_6 : (min(2023800873, (arr_46 [11]))));
                var_38 = (max(var_38, ((((((min(var_1, 25824)))) ? (min(3166124933, (arr_51 [i_15 - 2] [i_16]))) : ((((!(arr_49 [i_15] [i_15 - 3]))))))))));
                var_39 = (arr_52 [i_15 - 1] [i_16] [i_16] [i_16]);
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
            {
                var_40 = (min(1, ((1 ? 1 : -1196639936))));
                var_41 = (min(var_41, (!18446744073709551567)));
                arr_58 [i_18] [2] [i_16] [4] = 9245137530707830326;
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 11;i_20 += 1)
                {
                    {
                        var_42 = (min(var_42, (((~(min(var_10, ((min(var_3, var_11))))))))));
                        var_43 -= min(((min((arr_60 [i_15 - 3] [i_20 - 1]), (arr_59 [i_20 + 1] [8] [i_20 - 2] [i_20 + 1])))), ((var_8 ? var_1 : var_7)));
                    }
                }
            }
        }
        for (int i_21 = 1; i_21 < 12;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                arr_71 [i_15] [i_15] [i_21] [i_22] = (arr_68 [i_21 + 2] [i_21 + 1]);
                var_44 = (min(var_44, var_8));

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {

                    for (int i_24 = 1; i_24 < 11;i_24 += 1)
                    {
                        arr_78 [i_15] [i_15] [i_15] [6] [i_15] = var_2;
                        var_45 = ((((65535 ? (arr_63 [14] [i_22]) : var_5))));
                    }
                    arr_79 [i_23] [0] [i_22] [1] [1] [i_15 + 1] = (~3652285277);
                }
            }
            arr_80 [i_15 - 1] = (min((arr_64 [i_15 - 2]), ((min(32767, var_6)))));
            var_46 = (min(var_46, (((((((min(29945, -1))) ? (arr_65 [i_21]) : 39696)) ^ var_3)))));
            arr_81 [6] = (((!var_0) && var_5));
            var_47 = arr_77 [i_21] [i_21] [i_21] [i_21] [i_21] [11];
        }
        for (int i_25 = 1; i_25 < 14;i_25 += 1)
        {
            arr_84 [i_15] = (min((((min((arr_82 [i_25] [i_15]), var_3)))), ((var_10 ? (((arr_75 [i_25 + 1] [i_15] [i_15] [i_15] [i_15]) ? -18462 : var_3)) : (((arr_64 [1]) ? -9409 : (arr_67 [1] [i_15 - 2] [i_25 + 1])))))));

            for (int i_26 = 3; i_26 < 12;i_26 += 1)
            {
                arr_87 [i_26] [i_15] = (((var_11 ? var_9 : var_8)));
                var_48 = (min(var_48, (((min((arr_74 [i_26 - 2] [i_26 - 2] [i_25] [i_15 + 1]), (arr_74 [i_25 - 1] [i_25 + 1] [i_25 + 1] [i_25])))))));
                arr_88 [i_15] [i_15] = -var_8;
                var_49 = (101 % var_6);
            }
            var_50 = var_4;
            arr_89 [i_25 - 1] [i_25] = ((((!((min(var_7, var_9)))))));
        }
        arr_90 [6] = (~var_2);
    }
    var_51 = ((var_0 ? (((min(var_7, var_5)))) : var_1));
    #pragma endscop
}
