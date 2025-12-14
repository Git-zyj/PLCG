/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_9, var_15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_17 = (max(var_17, -var_11));
            var_18 = (min(var_18, var_5));
            var_19 = (max(var_19, var_2));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_20 = (max(var_20, ((max((((0 ? (~var_14) : ((-1 ? -9175319251344093419 : var_2))))), (max(511, 14685832585316254911)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 -= (min((max(((min(11475, (arr_6 [i_0] [6] [i_0])))), ((var_11 ? 1 : 0)))), (arr_11 [9] [i_0] [i_0] [i_0])));
                        var_22 = (min(var_22, 1));
                    }
                }
            }
            var_23 ^= (-4982555604215102780 > 1);
            var_24 = (((arr_7 [i_0]) ? var_5 : (max(-4982555604215102780, 756))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = ((9964199481780245690 != (-32767 - 1)));
            var_25 = (max(var_25, 4982555604215102767));
            var_26 += 33780;
            var_27 = ((80 ? var_13 : 1));
        }
        var_28 = (((-2021637377 + 2147483647) >> ((((min(-86, 176))) ? 1 : ((max((arr_0 [i_0]), (arr_7 [i_0]))))))));
        var_29 *= 732419799;
        var_30 ^= (((max(-6911513056678057202, (arr_3 [i_0] [i_0]))) < var_12));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 4; i_7 < 7;i_7 += 1)
        {
            arr_26 [i_6] [i_6] [i_6] = (((((var_12 ? (arr_15 [i_6] [i_6]) : 15832777731641907011))) ? (arr_19 [i_6] [i_7 - 2]) : (!var_14)));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_31 = (max(var_31, (((-2147483643 ? 31697 : 1)))));
                arr_29 [i_7] [i_8] = ((var_13 - 0) ? 65520 : (-84 / -32758));
                var_32 += (arr_19 [i_7 + 2] [i_7 - 3]);
                var_33 = (min(var_33, var_0));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_34 = (max(var_34, var_9));
                var_35 *= 67108863;
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_36 = ((1 ? (arr_30 [i_7 + 2] [i_10 - 1] [i_7 + 2]) : var_11));
                var_37 = ((137 ? (arr_7 [i_10 - 1]) : (arr_30 [i_7] [9] [9])));
                var_38 = ((0 ? -1759618577 : 4982555604215102798));

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_39 ^= -893218169;
                    var_40 = (((2147483642 && 0) > (arr_12 [i_11 - 1] [i_10 - 1] [i_7] [i_6])));
                    var_41 = (max(var_41, (((((756 >> (48318 - 48295)))) ? 1 : (arr_4 [i_6])))));
                    var_42 = (((((1 ? 32044 : 4982555604215102779))) ? 0 : (var_2 == 16769375806595317589)));
                }
            }

            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                var_43 = (min(var_43, ((-(arr_0 [i_7 + 3])))));
                arr_41 [i_12] = (arr_25 [i_6]);
            }
            arr_42 [i_6] [i_6] [i_7] = 17293822569102704640;
        }
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            arr_45 [i_13 - 1] [9] [i_6] = var_14;
            var_44 = (min(var_44, (1 || 0)));
            var_45 = (-2147483647 - 1);
            arr_46 [i_6] [0] [i_13] = 180929608;
        }
        for (int i_14 = 3; i_14 < 10;i_14 += 1)
        {
            var_46 |= ((var_2 ^ (((-2147483647 - 1) ? 1 : var_0))));
            var_47 = 64;
        }
        var_48 = (!22131);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = (!48308);
        var_49 = (max(var_49, -32414));
        var_50 *= var_4;
        var_51 = var_13;
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_52 |= ((min(1, (~var_1))) != (arr_4 [i_16]));
        var_53 ^= var_4;
    }
    var_54 = (var_14 < 0);
    var_55 = (min(var_55, var_10));
    #pragma endscop
}
