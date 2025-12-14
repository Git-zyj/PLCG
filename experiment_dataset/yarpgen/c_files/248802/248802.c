/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (!var_5);
    var_21 = ((((-2 != (-5 % -25)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = ((((((max(var_6, var_7)) >= (var_11 + var_1)))) << ((((((var_0 << (var_19 - 4170976762))) + (var_3 != var_3))) - 4611686018427387889))));
                arr_7 [i_0] [i_0] [1] = (((-54 + 2147483647) << (((((-568921018 + 2147483647) << (((((arr_5 [i_1] [i_0 + 1] [i_0 - 2]) + 5037416652189652306)) - 5)))) - 1578562629))));
                var_23 = (((((((!(-9223372036854775807 - 1)))) != (~var_6))) && ((!(((~(arr_3 [i_0]))))))));
                arr_8 [i_0] [i_1] = (((arr_1 [i_1]) < var_17));
            }
        }
    }
    var_24 = (max(((var_15 % (var_11 - var_0))), ((((!var_16) && (var_5 ^ var_0))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_4] [18] [i_2] = (max(((((var_9 >= var_14) != (max(var_5, var_14))))), (max((((var_12 << (var_10 - 910860511)))), (arr_17 [i_2] [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_26 [i_2] [i_5] [i_3] [i_4] [i_3] [i_2] = ((((-(arr_15 [i_3] [i_3]))) >> (((var_19 <= ((var_8 << (arr_10 [i_2]))))))));
                                arr_27 [10] [i_3] [10] [20] [i_6] |= (!(arr_17 [i_5] [i_5] [i_5 - 1] [i_5]));
                                var_25 += ((+(((arr_23 [i_5 - 1]) << (((arr_23 [i_5 - 3]) - 603994513))))));
                                arr_28 [i_2] [i_5] [i_4] [i_2] [i_2] = (((arr_17 [i_2] [i_4] [i_5 - 2] [i_6]) ^ ((min(-2, (-2147483647 - 1))))));
                            }
                        }
                    }
                    arr_29 [i_2] [i_2] [i_2] [21] = (arr_13 [i_2] [i_4]);
                    arr_30 [i_2] [1] = var_12;
                }
            }
        }
        var_26 = (~var_17);
        var_27 = (((((!(!-25)))) ^ var_6));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
            {
                arr_41 [i_7] [i_7] [i_7] = (max((max(var_15, (min(var_0, (arr_11 [i_7] [i_8]))))), (((var_9 <= (arr_5 [i_7] [i_9 + 2] [i_7]))))));
                arr_42 [i_7] [i_7] [i_9] = (var_9 | -var_17);
                var_28 += var_13;
                arr_43 [i_7] = (((~var_12) & (557376182 <= 9098100905208396342)));
            }
            for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
            {
                arr_46 [i_7] [i_7] [i_8] = ((((((!((!(arr_20 [i_7] [12] [i_8] [i_10 + 2]))))))) * ((var_12 * (var_4 * var_8)))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 7;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_29 = var_17;
                            arr_51 [i_12] [i_7] [i_12] [i_11 - 1] [i_10] [i_7] [i_7] = ((!(arr_12 [i_7] [i_8])));
                            arr_52 [i_7] [i_8] [i_7] [i_11] [i_12] [i_7] [4] = var_9;
                        }
                    }
                }
            }
            var_30 = (i_7 % 2 == zero) ? ((((((~(arr_49 [i_8] [6]))) + 2147483647)) << (((arr_0 [i_7]) - 1119696836866002343)))) : ((((((~(arr_49 [i_8] [6]))) + 2147483647)) << (((((((arr_0 [i_7]) + 1119696836866002343)) + 7308343944859024091)) - 2))));
            arr_53 [i_7] [i_7] = (((arr_32 [i_7] [i_8]) >= -var_18));
        }
        var_31 = (max(var_31, var_7));
    }
    #pragma endscop
}
