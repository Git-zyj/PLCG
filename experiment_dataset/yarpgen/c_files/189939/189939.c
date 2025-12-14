/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_0 & -8133) ^ var_0));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = (max((min((arr_0 [i_0 + 3]), var_2)), (((min(8153, var_5))))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_13 = ((var_1 ? var_0 : ((((arr_3 [i_0 + 3]) + (arr_3 [i_1 + 1]))))));
            var_14 = (max((((~(~var_6)))), (((((var_4 ? (arr_2 [i_0]) : -8133))) * (min((arr_0 [i_0]), var_2))))));
            var_15 = (min(var_15, (!-8133)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] = (var_1 / var_10);
            var_16 = (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 1]);
            var_17 = 8133;
            var_18 = ((((arr_1 [i_2] [i_2]) ? (0 >= 8132) : (arr_3 [i_0]))));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = (((!-8133) ? (((arr_11 [i_0 + 1]) >> (((arr_11 [i_0]) - 89)))) : (max(var_9, (arr_6 [i_0] [i_0 + 1] [i_3])))));
            var_19 = (2717011510043238611 + var_5);
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_20 = (!0);

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_21 = (((((-(arr_11 [i_5])))) ? ((~(arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2]))) : (~var_7)));
                var_22 = (max(255, ((var_7 ? (max(var_2, 12783619607555208307)) : var_5))));
                var_23 = (max(var_2, ((-(arr_16 [i_0] [i_4 + 1] [i_0])))));
                arr_18 [i_5] [i_5] [i_5] [i_5] = ((!((max((arr_6 [i_0 + 3] [i_0] [i_0]), (arr_6 [i_0 + 3] [i_0] [i_0 + 3]))))));
            }
            /* vectorizable */
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                var_24 = (min(var_24, (arr_7 [i_6 + 1] [i_0 + 1] [i_4 - 1])));

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_25 = ((-(arr_17 [i_4 + 4] [i_6 + 2])));
                    arr_23 [i_0 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_7] = var_7;
                }
                var_26 = ((((var_8 ? var_2 : var_8))) && (arr_22 [i_4 + 1] [i_4]));
                var_27 *= ((+(((arr_9 [i_6] [i_4] [i_0]) ^ (arr_20 [i_0])))));
                var_28 = (!1);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_29 = (arr_15 [i_0]);
                var_30 = ((((~(arr_20 [i_4 + 3]))) - (~89)));
            }
            var_31 = 13237;
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_32 = var_2;
        var_33 = (((arr_1 [i_9 + 1] [i_9 - 1]) * var_8));
        var_34 = (~5233);
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 23;i_10 += 1)
    {
        arr_32 [i_10] = (arr_30 [i_10 - 1]);
        var_35 = ((var_5 ? 0 : (~2535)));
        var_36 = (var_3 * 0);
    }
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        var_37 = ((-(~var_1)));
        arr_36 [i_11] [i_11] |= ((var_1 != ((~(arr_4 [7] [i_11 - 1])))));
        arr_37 [i_11] = var_6;
        arr_38 [i_11] = var_10;
    }
    #pragma endscop
}
