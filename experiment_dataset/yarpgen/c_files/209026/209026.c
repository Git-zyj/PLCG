/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_11 >= var_5) == (var_16 == var_15)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_18 = (max(var_18, -5324));
        var_19 = (max(var_19, ((((-19385 + 2147483647) >> ((((65535 >> (var_9 - 44205))) - 8162)))))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_20 = var_6;
            arr_5 [i_0] = ((24318 >> (-var_11 - 27996)));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_21 = (arr_0 [i_0]);

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_22 = (min(var_22, 0));

                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_2] [i_3] [i_4] = -var_7;
                    arr_14 [i_0] [i_2] [6] [6] = (((((arr_1 [i_0]) << (((~9895024696617906368) - 8551719377091645219))))) && ((((arr_4 [i_0] [i_2]) * (arr_4 [i_0] [8])))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_2] [i_0] = var_4;
                    arr_19 [i_0] [i_2] [i_3] = (((((20951 == (arr_9 [i_0] [i_0] [i_0])))) << (9895024696617906368 - 9895024696617906360)));
                    arr_20 [i_0] [i_2] [i_3] [4] [i_3] = var_12;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [i_3] [i_6] = ((+(((arr_3 [i_0] [i_0] [i_3]) & ((~(arr_8 [i_0])))))));
                    var_23 = (min(var_23, (arr_23 [2] [i_3] [i_0])));
                }
            }
            var_24 = (arr_1 [i_0]);
            var_25 = ((!(arr_1 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        arr_28 [i_7 - 1] = ((~(arr_27 [i_7 - 2])));
        var_26 = (min(var_26, var_15));
        var_27 = (arr_25 [i_7] [1]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (arr_29 [12])));
        var_29 = (min(var_29, var_14));
        arr_32 [i_8] [i_8] = arr_26 [12];
        arr_33 [i_8] [i_8] = 18446744073709551615;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = (i_9 % 2 == zero) ? ((((var_4 % var_6) / (arr_34 [i_9])))) : ((((var_4 % var_6) * (arr_34 [i_9]))));
        var_30 = (min(var_30, (!50909)));
        arr_38 [i_9] = (i_9 % 2 == zero) ? (((var_13 % (arr_34 [i_9])))) : (((var_13 * (arr_34 [i_9]))));
        arr_39 [i_9] [i_9] = (((arr_35 [i_9] [i_9]) <= (arr_35 [i_9] [i_9])));
    }
    var_31 = (min(var_31, var_14));
    var_32 = (!-10);
    var_33 = (!var_0);
    #pragma endscop
}
