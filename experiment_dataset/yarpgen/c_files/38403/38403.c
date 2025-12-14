/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(9223372036854775800, (arr_2 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_3] [i_1 - 1] [i_2 + 1] [i_3] [i_4] = 9223372036854775807;
                        var_13 *= (((((-(arr_8 [i_2 + 1] [i_1 - 1] [i_0])))) ? (arr_12 [i_4] [i_2] [i_0] [i_1 + 1] [i_1]) : (arr_12 [i_4] [i_1 - 1] [i_0] [i_1 - 1] [i_1])));
                    }
                    arr_14 [i_3] [i_1] [i_1] = ((~((~(max((arr_2 [i_3] [i_2]), 127))))));
                    arr_15 [i_3] [i_1] [i_2] [i_3] = (arr_12 [i_0] [i_3] [i_3] [i_3] [i_1]);
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_14 = (max(var_14, ((max((((((arr_17 [i_1] [i_1]) + 9223372036854775807)) << (((max((arr_2 [i_0] [i_0]), (arr_3 [i_0]))) - 18446744073709547077)))), (arr_1 [i_0]))))));
                    var_15 = (max(var_15, (576460752303423487 + 7719018143779832313)));
                    arr_18 [i_5] [i_2] [i_1] [i_0] = 1888792383;
                    var_16 = ((-var_3 - ((-6988 ? (arr_12 [i_2] [i_2 - 1] [i_2] [i_2] [i_5 + 1]) : (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                }
                var_17 = ((((max((arr_9 [i_2 - 2] [i_1 - 4]), ((max(var_7, (arr_3 [i_1]))))))) ? (((21933 ? 19 : (((arr_0 [i_0]) ? 1 : 56960))))) : 1));
                var_18 = 21940;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_19 *= ((!(arr_10 [i_2] [i_1 - 2] [i_1] [i_1 - 3] [i_0])));
                    var_20 = (max(var_20, -1));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] = 224;
                    var_21 = -9223372036854775800;
                }
                var_22 = (min(var_22, ((max(((2334 << ((((1 ? 2406174933 : var_6)) - 2406174919)))), (((!(arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_2 - 1])))))))));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_1] = ((~((-(arr_26 [i_0] [i_0] [i_0] [i_0])))));

                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    var_23 = (var_11 * 0);

                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (((-(((min((arr_22 [i_10] [i_9] [i_0] [i_1] [i_0] [i_0]), (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ ((((-1207579105 == (arr_3 [i_1]))))))))))));
                        var_25 = (max(((min(var_4, (~var_1)))), ((1 ? (arr_21 [i_1 + 1] [i_9 - 2] [i_8] [i_9] [i_8 - 2]) : (arr_21 [i_1 - 1] [i_9 - 1] [i_8] [i_9] [i_8 - 1])))));
                        var_26 = ((min(18446744073709551615, (arr_27 [i_8 + 1] [i_8 - 2]))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_27 += (~-58);
                        var_28 = (max(var_28, (arr_9 [i_11] [i_1])));
                    }
                    var_29 = (arr_20 [i_0] [i_0] [i_1] [i_0] [i_9] [i_9]);
                }
            }
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                arr_39 [i_0] [i_1] [i_12] [i_12] = (~-var_5);
                arr_40 [i_12] [i_12] [i_12] [i_12] = ((!((((arr_22 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]) ? (arr_22 [i_1] [i_1] [i_1 - 3] [i_1] [i_1] [i_1]) : var_4)))));
            }
            var_30 = -6626875745973405197;
        }
    }
    var_31 = var_6;
    #pragma endscop
}
