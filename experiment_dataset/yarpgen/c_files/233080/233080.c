/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (-2147483647 - 1);
        var_21 = 7;
        var_22 = (max((!var_1), -26015));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_12 [i_3] [i_2] [i_1] &= (((max(var_13, ((2147483647 ? 26023 : -31))))) ? (max(var_7, ((((arr_8 [i_1]) <= 31))))) : (((0 ? 0 : 31))));
                var_23 -= (((((var_2 >= 4412) ? (min(1, var_3)) : 44)) <= ((((arr_11 [i_3] [i_3] [1] [i_3]) ? ((min(-123, 4093))) : 31)))));
                var_24 |= (min((((~(arr_5 [i_2])))), (max(35337, 18446744073709551615))));
                var_25 -= ((((min((arr_6 [i_3]), ((((arr_8 [i_3]) >= var_7)))))) ? (max((var_12 + var_11), (arr_11 [6] [i_2] [i_1] [i_1]))) : ((((var_3 > (arr_7 [i_1] [i_1])))))));
            }
            var_26 = (-1675 - 0);

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_27 = var_16;
                var_28 += (((((!((min(-1675, 44468)))))) % ((-(var_14 && var_5)))));
                var_29 = (min(var_29, ((((((arr_7 [i_1] [i_4]) ? var_8 : 4412)) % (max((((arr_9 [i_4] [i_2] [i_2] [i_2]) ? 1 : (arr_9 [i_2] [8] [i_4] [i_2]))), (1 && 1))))))));
                var_30 = (((((arr_7 [1] [i_2]) ? 18446744073709551607 : (arr_7 [i_1] [i_4]))) - (var_4 / -18)));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_31 = (min(((~(arr_13 [i_5] [i_5] [6] [i_5]))), var_19));
                var_32 = (max(var_32, (arr_16 [i_1] [i_2] [i_5])));
                var_33 ^= (((((var_19 ? (max(var_3, var_7)) : (((1 + (arr_15 [i_5] [i_2] [i_5]))))))) ? (((min(var_3, var_18)) >> ((((var_19 ? (arr_14 [i_1] [i_2] [i_5] [7]) : -26016)) - 180)))) : (((max(1, var_13))))));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_34 -= (max(-18, ((((!var_17) > (!67108863))))));
                    arr_20 [i_1] = ((0 << (64 - 63)));
                    arr_21 [i_2] [i_2] [i_1] [i_5] = (min(0, (((arr_15 [i_2] [i_2] [i_1]) ? (arr_17 [i_1]) : (((-2147483647 - 1) ? 35339 : 0))))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_35 ^= (((arr_17 [i_2]) >= ((((arr_17 [i_2]) && var_17)))));

                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        var_36 &= ((((((max((arr_17 [i_2]), var_3)) < (((max(1, var_13))))))) == (arr_11 [i_1] [i_1] [i_1] [i_1])));
                        arr_28 [i_8] [i_1] [i_1] [i_2] = (((((min(var_17, (arr_13 [i_5] [i_5] [5] [3]))))) % (arr_27 [i_1] [i_1] [i_5] [i_2] [i_1])));
                        var_37 = ((-((min(var_14, (!var_14))))));
                        var_38 -= (1 % 8388607);
                        arr_29 [i_1] [i_1] [12] [14] [i_7] [i_8] [i_5] &= -68;
                    }

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_33 [i_1] [i_7] = (min((max((arr_32 [i_1] [i_2] [i_1] [i_1] [i_9]), (arr_16 [i_2] [i_5] [i_7]))), ((((arr_27 [i_1] [i_7] [i_5] [4] [i_1]) ^ (arr_18 [i_1] [i_2] [15] [i_7] [i_1]))))));
                        var_39 ^= (((((max((arr_14 [i_9] [i_5] [i_2] [i_1]), var_6))) ? var_17 : (arr_10 [i_1]))));
                        arr_34 [i_1] [i_5] [i_5] [i_7] = (((16383 ? 61171 : ((max(-15, 1))))) << ((((104 ? 4364 : 127)) - 4359)));
                    }
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_5] [14] [i_10] |= (min(((1 ? var_19 : (arr_10 [i_5]))), (max((arr_32 [i_10] [i_5] [i_2] [i_1] [10]), 2044))));
                    var_40 ^= max((((~(!var_0)))), (((arr_8 [i_1]) ? (var_15 > var_4) : (arr_19 [i_1] [1] [i_1] [i_1]))));
                    var_41 = (min(var_41, (((((var_18 <= (var_6 < 0)))) > ((((min(3352763908, 2044)) >= (~var_13))))))));
                    arr_38 [i_5] |= (((((((arr_9 [i_5] [i_2] [i_5] [i_10]) ? (arr_17 [i_2]) : (arr_25 [i_1] [i_1] [i_1]))) & ((2044 ? var_8 : var_2)))) < (((arr_18 [i_1] [8] [i_5] [1] [i_2]) ? ((min(32767, 0))) : (var_19 < 1)))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_42 += ((var_0 / (arr_11 [i_1] [i_2] [i_5] [i_11])));
                    arr_42 [i_1] [i_1] [i_5] [i_11] = ((((4294967296 ? var_13 : 1)) >= (arr_13 [i_1] [i_2] [i_5] [i_11])));
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_43 += (0 == var_10);
            var_44 = (max(var_44, var_7));
            arr_46 [i_1] = ((!(arr_36 [i_1] [i_1] [7] [1] [7])));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_45 = (max(var_45, (((-(min(((~(arr_8 [i_1]))), var_8)))))));

            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_46 = (((var_13 ? (arr_14 [i_15] [i_14] [i_13] [i_1]) : (var_3 >= var_5))));
                    var_47 -= (1 || 1);
                    arr_56 [i_14] [i_14] [8] [i_14] &= (((((min(151, var_10))) ? ((-102 ? var_0 : var_1)) : (!var_3))));
                }
                var_48 = (((var_7 % (arr_25 [i_14] [12] [i_1]))));
            }
            var_49 = (var_3 >= ((((var_18 && ((((arr_16 [9] [i_13] [i_1]) % (-2147483647 - 1)))))))));
        }
        for (int i_16 = 4; i_16 < 14;i_16 += 1)
        {
            var_50 = (min(var_50, (~var_9)));
            var_51 = (((min(var_12, (arr_19 [i_16 + 2] [i_16 - 1] [3] [i_1]))) > (((((arr_19 [i_16] [i_16 + 3] [i_1] [i_1]) == 0))))));
        }
        var_52 = (((((~(arr_9 [i_1] [15] [i_1] [i_1])))) || ((((arr_9 [i_1] [i_1] [i_1] [i_1]) + (arr_9 [i_1] [i_1] [i_1] [i_1]))))));
    }
    #pragma endscop
}
