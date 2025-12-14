/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_16, var_14))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = var_5;

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_21 = (max(var_21, var_11));
                var_22 = arr_2 [i_0];
                arr_7 [i_1] [i_1] [i_1] [i_1] = arr_5 [i_0];

                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    var_23 = var_18;

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] = (var_17 * (arr_2 [i_3 - 2]));
                        arr_14 [i_1] [i_0] [i_1] [12] [i_3] [i_4] &= ((((var_5 ? var_0 : (arr_2 [i_0]))) << ((((242 ? 5846988981866877926 : 39)) - 5846988981866877914))));
                        arr_15 [i_3] [i_0] = (((var_8 ? 0 : 217)));
                        arr_16 [i_3] [i_2] = var_16;
                        var_24 = (11946479308723752924 != 0);
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_25 = (min(var_25, ((((arr_19 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5 + 1] [1] [i_5]) == (arr_19 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5 - 1] [i_5] [i_5]))))));
                        arr_20 [i_3] [2] [i_2] [i_3] [i_0] = ((((((arr_1 [i_0]) + (arr_12 [i_0])))) ? (var_8 >= var_8) : (arr_6 [i_5 + 1] [i_3 + 1] [i_3] [i_1])));
                        var_26 = (((arr_2 [i_5]) ? 216 : 32374));
                        var_27 = (arr_4 [i_5 + 1] [i_5] [i_5 + 1] [i_3 + 1]);
                    }
                }
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_28 = var_16;
                var_29 ^= (!var_8);
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                var_30 -= ((104746182 ? var_5 : (arr_8 [1] [i_7 - 1] [i_7] [i_1])));
                var_31 = ((295802646 ? (-23226 % var_0) : (((arr_3 [3]) | var_9))));

                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_28 [i_0] [1] [2] [i_8] &= ((((((arr_9 [i_0] [i_1] [i_7] [i_8] [8] [i_0]) / var_12))) && (arr_19 [i_0] [9] [i_7] [9] [i_8] [i_0] [i_7])));
                    var_32 = var_17;
                }
            }

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_31 [i_0] [i_1] [i_9] &= 214;
                var_33 = (((min((arr_3 [i_1]), (arr_3 [i_0]))) ^ 236));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, var_15));
                    var_35 ^= (max((833198422 <= -12322), (var_16 == var_11)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    var_36 = (11460008495969959308 ? 0 : -1564437875);
                    var_37 = (arr_11 [i_0] [i_0] [i_10]);
                    var_38 = (min(var_38, 0));
                    var_39 = ((((((arr_23 [10] [i_1] [16]) ? (arr_21 [10]) : var_4))) ? var_11 : (!var_10)));
                    var_40 = (((arr_2 [i_12]) * var_12));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_41 = var_8;
                        var_42 ^= (max((239 == 4019251074), (min(var_17, 1))));
                        arr_45 [i_0] [i_10] = (var_5 > (((max((arr_9 [i_10] [i_14 - 1] [i_10] [i_14] [i_10] [i_10]), (arr_9 [i_10] [i_14 - 1] [10] [11] [i_0] [13]))))));
                        var_43 = ((2031131622 || ((((~var_6) ^ (arr_9 [i_10] [i_0] [11] [i_13] [i_14 - 1] [i_14]))))));
                    }
                    arr_46 [i_1] [i_10] [i_13] = (min((max((arr_36 [i_13] [i_10] [i_10] [i_0]), var_11)), var_12));
                }
                var_44 = (((~var_8) * (((0 << (((arr_6 [i_0] [i_0] [i_10] [i_10]) - 19434)))))));
            }
            var_45 = ((var_4 == (var_2 >= var_11)));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
        {
            var_46 &= (max((arr_47 [12] [i_15]), 1));
            arr_51 [i_0] = var_10;
        }
        arr_52 [i_0] = ((((-5457897548557076176 ? var_9 : 18446744073709551615)) == (arr_1 [i_0])));
        arr_53 [i_0] = (arr_11 [i_0] [i_0] [i_0]);
    }
    var_47 = (max(var_16, var_8));
    var_48 = var_6;
    #pragma endscop
}
