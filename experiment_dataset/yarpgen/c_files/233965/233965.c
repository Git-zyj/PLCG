/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((!(((var_10 ? var_6 : var_2)))))));
    var_20 = (min(var_20, ((-(!98)))));
    var_21 = (((!var_4) ? var_12 : var_8));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = (min(var_22, var_2));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] &= (((((((arr_4 [i_0 - 2] [i_1]) % (arr_1 [i_1] [i_0]))))) ? (var_16 / var_1) : (arr_2 [i_0] [4] [i_1])));
            var_23 = (min(var_23, (arr_0 [i_0 - 1] [i_1])));
            arr_6 [i_0 - 1] [i_0] [i_0] = ((arr_2 [i_0] [i_0 - 2] [5]) % (((arr_1 [i_0 - 1] [i_0 + 1]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 2] [0] [i_1]))));
            arr_7 [i_0] [i_1] [i_1] = ((~(((arr_1 [i_0] [i_1]) ? (arr_0 [i_0 + 1] [i_1]) : (arr_2 [i_0] [i_0 - 2] [i_0 - 2])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_24 = (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]);
                    var_25 = -var_15;
                    arr_12 [i_0] [i_1] [i_2] [i_1] [i_2] [i_3] = (!-32);
                }
                var_26 -= (-774178176 <= 1896399660);
                var_27 = (~var_16);
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_28 = (min(var_28, var_3));
            var_29 = ((min((arr_4 [i_0] [i_4]), ((-(arr_8 [i_0 + 1] [i_0] [i_4] [i_4]))))));
        }
        arr_16 [i_0] = (((arr_8 [i_0] [i_0] [2] [i_0 - 1]) | (max(-25404, 2156204576))));
        var_30 = ((~(!3513526055)));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_31 &= ((((max((arr_14 [i_5] [i_5]), var_1))) ? (arr_14 [i_5] [i_5]) : ((~(arr_14 [i_5] [i_5])))));
        arr_19 [i_5] = ((((((!((max((arr_13 [i_5] [3] [i_5]), (arr_15 [i_5] [i_5] [i_5])))))))) == (arr_8 [i_5] [13] [i_5] [i_5])));
    }
    var_32 = (min(((104 ? -var_6 : -var_13)), ((~(~0)))));
    #pragma endscop
}
