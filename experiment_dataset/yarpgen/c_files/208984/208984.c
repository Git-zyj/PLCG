/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (~152);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_0 [6])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    var_17 = (((arr_6 [i_1] [i_1] [10] [i_2]) ? (arr_9 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1]) : (arr_9 [i_3 - 2] [i_3 + 1] [12] [i_3] [i_3 - 1])));
                    var_18 = ((var_6 ? (arr_1 [i_0] [i_0]) : (arr_9 [i_0] [i_1] [8] [i_1] [i_3])));
                    var_19 = 72;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_0] = (arr_8 [i_4] [i_2] [i_1] [i_0]);
                    var_20 = (min(var_20, (((9 ? (((var_10 || (arr_9 [i_1] [14] [i_1] [i_0] [i_1])))) : (((arr_7 [i_0] [i_0]) ? var_10 : (arr_3 [i_1]))))))));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_21 -= -21001;
                        var_22 = (arr_10 [i_5 + 1] [i_5] [i_5] [10]);
                        var_23 -= (arr_6 [i_5] [i_4] [i_2] [i_0]);
                    }
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        var_24 = (((arr_13 [i_1] [i_0]) || var_8));
                        var_25 = (arr_10 [i_6] [i_6 - 2] [i_6 + 1] [i_6 + 1]);
                        var_26 *= ((!(((11630789454825895399 ? var_4 : var_3)))));
                    }
                    var_27 = ((28575 % (arr_2 [i_0] [i_0])));
                }
                var_28 = var_6;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_21 [i_0] = (-958255011 + 3330864633746283254);
                    arr_22 [15] [i_0] [15] [i_7] = (~0);
                }
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    arr_25 [i_0] [i_1] [i_2] = (arr_0 [i_0]);
                    arr_26 [i_0] [i_0] [i_8 + 1] [i_8] [i_1] [i_8] = ((((32763 ? (arr_6 [i_0] [i_1] [i_2] [i_1]) : (arr_19 [i_0] [i_1] [i_0] [i_2]))) == var_7));
                    arr_27 [i_0] [i_0] = (9223372036854775807 <= 111);
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_29 = ((((((arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) - 20188))) ? (arr_14 [i_9] [i_0] [i_2] [i_1] [0] [i_0] [i_0]) : var_4));
                    arr_30 [i_0] [i_1] [i_0] [7] = ((!(arr_23 [i_0] [i_1] [i_0])));
                }
                var_30 = (((arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0]) % 51542));
            }
            var_31 = (max(var_31, (arr_8 [i_0] [15] [i_0] [i_0])));
            arr_31 [i_0] = (((arr_0 [i_0]) ? (arr_20 [i_1] [i_0] [i_0] [i_0]) : 0));
        }
    }
    #pragma endscop
}
