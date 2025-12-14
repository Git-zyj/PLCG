/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = 15551;
        var_14 = max((((arr_0 [i_0]) >> ((((max(var_9, 58651))) - 65401)))), ((((58651 ? var_7 : (arr_0 [i_0]))) + (min((arr_0 [i_0]), 1)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_15 = (-(arr_3 [i_1]));
        var_16 = (max((arr_2 [16] [10]), (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))));
        var_17 = ((-(~-1)));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = (((arr_5 [i_2] [i_2]) ? (((arr_3 [1]) << (var_4 + 5577326062215019270))) : 1));
        arr_8 [20] = (~var_9);
    }

    for (int i_3 = 3; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_18 = (max((58662 - var_1), ((((arr_4 [i_3]) >= var_2)))));
        var_19 = ((((var_1 / (((var_8 ? var_2 : var_10))))) | (var_5 << 1)));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_3] [i_4] [i_3] = (((var_11 % (arr_9 [i_3] [i_4]))));
            var_20 = (((arr_9 [i_3] [i_3 - 3]) <= (arr_6 [i_3 - 3])));
            arr_16 [i_3] = 18300;
            var_21 -= (~1);
            arr_17 [i_4] [3] [i_3] = (((arr_12 [21] [21]) ? 217 : (arr_2 [i_3 - 1] [15])));
        }
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_22 = (((arr_18 [i_5 - 2] [i_5]) ? ((((arr_18 [i_5 - 1] [i_5]) ? (arr_18 [i_5 + 1] [i_5]) : (arr_18 [i_5 - 3] [i_5])))) : var_2));
        arr_21 [i_5] [i_5] = ((!((min(-1945034060, (~var_0))))));
        var_23 = ((((-var_2 ? var_3 : (39 - var_2))) & (~1)));

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_24 -= (min(((((var_9 + 2147483647) << (((arr_19 [i_6] [i_6]) - 39318))))), ((0 ? ((var_3 ? (arr_23 [i_6]) : var_10)) : ((((arr_11 [5]) ^ (arr_22 [i_6]))))))));
            var_25 -= ((arr_18 [i_5] [i_6]) <= (max((((arr_20 [i_5 - 3]) >> (var_7 + 147))), (min(var_1, var_6)))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_26 = (~var_10);
            var_27 = ((!(((1 ? 12515991516706421967 : var_10)))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            var_28 = var_11;
            var_29 -= (((min(61608, (var_6 != 1)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_30 -= ((var_2 ? (((arr_3 [i_9]) ? var_4 : (arr_3 [i_9]))) : (!6)));
            arr_32 [i_5] [0] = (((arr_22 [i_5]) - (arr_22 [i_5])));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_38 [i_5] [i_5] [i_5] [i_10] [i_11] = (((((var_3 <= (arr_13 [i_5 - 2] [i_5] [i_10 - 1])))) | var_9));
                        var_31 = (arr_37 [1] [4] [i_10]);
                        var_32 = var_2;
                        arr_39 [i_11] [12] [i_5] [i_11] [3] = ((arr_36 [i_5] [i_10 + 1] [i_10 + 1]) > (arr_14 [i_9] [i_9] [2]));
                    }
                }
            }
            arr_40 [i_5] = -var_2;
        }

        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_33 = ((-(((!(((arr_11 [i_5]) || (arr_42 [i_5]))))))));
            arr_43 [i_5] = var_8;
            arr_44 [i_5] [4] = (((((~var_2) ? (arr_14 [7] [i_12] [7]) : -1945034086)) & (arr_27 [23] [i_5] [23])));
            var_34 = (((((~(~var_2)))) % (min(((6 ? var_1 : 17592186044415)), 107))));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_35 = ((0 - (min((max(1792897102899920960, 65514)), (((107 << (3424866549 - 3424866546))))))));
            var_36 = (max(var_36, -5986466091172905986));
            arr_47 [i_5] [5] [i_5] = var_0;
            var_37 = (((arr_26 [20] [i_13]) ? (((arr_26 [i_5 - 1] [1]) | (arr_26 [i_5 - 2] [11]))) : (((arr_6 [i_5 - 3]) ? (arr_35 [i_5] [i_5] [i_5] [1]) : ((max(7, (arr_6 [i_5]))))))));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            arr_50 [i_14] [i_5] [i_14] = (min((((arr_2 [i_5] [i_14]) * (max((arr_46 [i_5]), var_3)))), (!1355799101)));
            var_38 -= 235;
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 20;i_15 += 1)
        {
            arr_53 [i_5 + 1] [i_5] = (arr_36 [i_5] [20] [i_15]);
            arr_54 [i_5] = (1 & (arr_37 [i_5 - 2] [i_15 - 2] [4]));

            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_39 = (!var_4);
                arr_58 [i_5] [i_5] = (((-107 && var_10) - var_0));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_40 = ((~((34194 ? 2053041682 : var_2))));
                            arr_67 [i_5] [i_5] [i_5] [i_17] [i_5] [i_18] = (arr_14 [i_5 - 2] [i_15 - 3] [i_16]);
                            arr_68 [9] [17] [i_16] [17] [i_5] [i_16] [17] = (((4696748134489332185 ? var_1 : -53)));
                            var_41 = -1115886321;
                        }
                    }
                }
            }
            var_42 -= ((0 ? (arr_23 [0]) : (arr_46 [12])));
        }
    }
    for (int i_19 = 3; i_19 < 23;i_19 += 1) /* same iter space */
    {
        var_43 = ((var_11 || (((+(((arr_14 [i_19] [3] [i_19]) % (arr_25 [i_19]))))))));
        arr_71 [i_19] = (-((var_9 ? 13548125964274417994 : (arr_23 [i_19]))));
    }
    var_44 = (((5930752557003129648 & var_2) >> ((((var_5 ? (max(var_4, var_3)) : var_6)) + 252344944608816940))));
    var_45 = (max(var_3, (max(((min(1, -16383))), var_11))));
    #pragma endscop
}
