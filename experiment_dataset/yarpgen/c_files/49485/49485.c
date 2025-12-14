/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_0 [i_0]);
        var_13 -= var_5;
        arr_2 [i_0] = (min(-1, 2074888850));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((var_9 ? ((((501460783 / 24171) * (((arr_3 [i_1]) / var_7))))) : (min(2961351940, 22098))));
        var_14 += (max((arr_3 [i_1]), (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_15 |= (max(((min(86, 22071))), 1333615342));
            var_16 = (max(var_16, 2961351933));

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 -= (((arr_8 [i_4]) ? (arr_17 [i_4 + 3] [1] [1] [i_2]) : 60863));
                    var_18 = (((arr_16 [i_2 + 1] [i_3 + 1] [i_3] [i_2] [i_4 - 1]) - (arr_16 [i_2 - 1] [i_3 + 1] [i_4] [i_2] [i_4 - 1])));
                }
                var_19 -= ((var_6 << (var_5 - 20982)));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_20 = ((((((arr_6 [i_2 + 1]) / ((var_4 * (arr_15 [i_2] [i_2] [i_2] [6] [i_2] [i_2])))))) ? ((((((9310 << (var_6 - 65))) <= ((min(14336, (arr_21 [i_2] [i_2] [i_2] [i_6] [i_7])))))))) : ((2961351954 | (arr_15 [i_4] [i_4] [i_4] [i_4 + 2] [i_2] [i_4])))));
                            var_21 = 18446744073709551615;
                            var_22 = ((var_1 ? (((!-2) ? ((-22098 ? (arr_11 [i_7] [i_2] [i_2]) : (arr_12 [i_2] [i_3] [i_2]))) : (((1333615348 * (arr_8 [i_7])))))) : (~var_4)));
                            var_23 = max(9223372036854775807, ((((max((arr_21 [i_2] [i_3] [i_6] [i_6] [i_7]), var_10))) ? var_1 : (~1333615335))));
                        }
                    }
                }
                var_24 = 224;
            }
            var_25 = (min(var_25, ((((var_4 + (arr_12 [8] [i_2 - 4] [8])))))));
        }
        var_26 = (((var_2 / (arr_19 [i_2] [i_2 - 4] [i_2] [i_2] [i_2]))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_27 = ((((~(~252516654))) < (arr_14 [i_8] [0])));
        var_28 += ((var_9 >> ((max((var_11 == var_0), (arr_20 [i_8] [i_8] [i_8] [i_8]))))));
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_29 ^= (max(((min(14915, (arr_28 [i_9])))), (max((arr_26 [i_9]), (arr_28 [i_9])))));
        var_30 = -1395761825;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_31 = (((arr_27 [i_10 - 1]) + (arr_29 [i_10])));

        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_32 = (min(var_32, ((((-104 + 2147483647) >> (var_0 - 5208444461158520190))))));
            var_33 &= (var_11 >> -0);
            var_34 = var_1;
            var_35 = (min(var_35, ((((arr_26 [i_10]) ? 1 : 1333615356)))));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_36 = ((224 ? (arr_29 [i_10]) : -21104));

            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                var_37 = (((arr_32 [i_10] [i_10] [i_10]) ? (arr_32 [i_10] [i_10] [i_10]) : (arr_32 [i_10] [i_12] [i_10])));
                arr_37 [i_10] [i_10] = (((arr_35 [i_10 - 1]) ? (arr_35 [i_10 - 1]) : (arr_35 [i_10 + 1])));
                var_38 = (((-1 + 2147483647) << (((-2312606009365315946 + 2312606009365315954) - 8))));
                var_39 = (min(var_39, (11664737145345933896 + -30980)));
                var_40 -= (arr_30 [i_13 - 1]);
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                var_41 = (((arr_39 [i_10] [i_14 + 3] [i_14]) / (arr_39 [i_14] [i_14 + 3] [i_14])));
                var_42 &= (var_10 ? (arr_38 [10] [i_14 - 1] [i_10 + 1] [i_12]) : (arr_38 [i_10] [i_14 - 1] [i_10 - 1] [i_12]));
            }
            var_43 += ((-7386431532251096245 * (arr_32 [i_12] [i_12] [i_12])));
            var_44 = (var_3 >= var_9);
        }
        var_45 = ((-(arr_27 [i_10])));
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_46 *= (arr_38 [i_15] [i_15] [i_15] [1]);
        var_47 |= 76;
    }
    var_48 = (min((((-58 ? 27411 : 255))), (min(-var_2, var_9))));
    #pragma endscop
}
