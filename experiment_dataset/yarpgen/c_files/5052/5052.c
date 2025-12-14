/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = ((((8153418176674143080 ? var_1 : 8183940724493455970)) | (max(56, -2097779263))));
        var_11 = (min(var_11, (var_3 + 1)));
        var_12 = (max(((var_3 ? 1 : 7732893925703662416)), (((((min(1, 1))) >> (21 % var_6))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 -= (1 != var_5);
        var_14 = (max((max((arr_4 [i_1]), -2147483635)), (min(511, (arr_4 [i_1])))));
        var_15 ^= (((arr_0 [i_1]) ? ((((max(-2147483639, 32767)) >> (-2147483624 + 2147483630)))) : ((var_2 ? var_3 : (arr_0 [i_1])))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = (arr_6 [i_1] [i_1]);
            arr_9 [i_1] [i_1] = ((!((((((33746 >> (var_2 - 4207724377054234821)))) ? var_9 : ((max(1, var_4))))))));
            var_17 = (max(var_17, ((max(((12930329833656779984 & (arr_2 [i_2]))), (min(18446744073709551601, (arr_2 [i_2]))))))));
            arr_10 [i_1] = var_0;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_18 ^= (((((1 ? 65514 : 26441))) && var_7));
            arr_14 [i_1] [i_3] [i_3] = ((-(~1)));
            arr_15 [i_1] [i_1] [i_1] = -564226411;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_19 = (63 ? (arr_5 [i_1] [i_1] [i_1]) : ((((min((arr_13 [i_1] [i_1]), -26444))) ? ((4154133248 ? 8388607 : 1388724446279744484)) : (((2147483647 >> (-310584947 + 310584951)))))));
            arr_19 [i_1] [i_1] [i_1] = 18446744073709551615;
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_20 = (--1);
        var_21 = (min(var_21, (((+((var_0 ? (arr_18 [i_5] [i_5 - 1]) : var_7)))))));
        arr_22 [i_5] = (var_2 / 2147483645);
    }
    var_22 = (min(var_22, (((18446744073701163024 ? var_5 : var_6)))));

    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_23 = (max((max((arr_1 [i_6] [i_6 + 1]), var_2)), var_6));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_24 = 2147483645;
            arr_30 [i_6] [i_7] = (max(0, 1));
            arr_31 [i_6] [9] [i_7] = ((163737480695249674 ? 17721 : -17721));
        }
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            var_25 = (((((0 ? 18446744073701163017 : 16414068984181630997))) ? (!1) : 229));
            var_26 ^= var_2;
            var_27 = (1 > 57069);
            var_28 = (min(var_28, var_8));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_37 [i_6] [i_6] = -6433853524706936559;

            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                var_29 = ((8054946692743634165 ? ((var_2 ? var_7 : 15062527636707521258)) : (((0 ? (arr_24 [i_10] [i_6]) : -1487001929)))));

                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    var_30 = ((!(((var_7 ? (arr_26 [16]) : 33766)))));
                    var_31 = var_4;
                }
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                arr_47 [i_6] [i_6] [i_6] = (((var_6 ? var_2 : 18446744073709551615)));
                arr_48 [i_6] = (arr_27 [i_9 - 1]);
            }
            var_32 = 3301217132034052619;

            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_51 [i_6] [i_6] [i_13] = 2147483627;
                var_33 = ((~((((arr_35 [i_13] [i_9] [i_13]) == var_3)))));
                var_34 = (var_0 - 22);
            }
        }
        for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_35 ^= ((-var_5 * ((min((arr_0 [i_6 + 3]), ((1 ? 1 : (arr_33 [16]))))))));
            var_36 = ((~((var_1 ? var_8 : (((max(14, 65521))))))));

            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                var_37 = ((-(max(1, (max(295202894, (arr_42 [14] [i_14] [i_14])))))));
                var_38 = ((max(237, 1)));
                var_39 = ((!(((var_5 ? (min(var_9, 20)) : var_9)))));
                var_40 = (min(var_40, ((((-1 + 2147483647) << (1923693697 - 1923693697))))));
            }
            var_41 = (max(var_41, (var_7 % 18446744073701163017)));
        }
        var_42 = var_4;
    }
    var_43 = (min(var_8, (((((-2147483647 - 1) == var_9)) ? 1 : ((var_1 ? var_3 : 13))))));
    var_44 ^= 31816;
    #pragma endscop
}
