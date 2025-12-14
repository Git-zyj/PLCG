/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 > ((max(var_12, var_15)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = (min(var_21, var_5));
        var_22 = var_6;
    }

    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_2 [i_1 - 2]) ? ((-677053685 ? 65535 : 62914)) : (arr_2 [i_1])));

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_23 = (max(var_23, (~26)));
            var_24 = var_8;
            var_25 = (max(var_25, (((-19619800481629652 ? (arr_3 [i_1 - 4]) : (((677053691 ? (1909726409 ^ -1909726409) : var_17))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_26 = (max(var_26, ((((arr_0 [i_1 - 3]) ? ((var_18 ? var_7 : 2147483630)) : (arr_5 [i_1 - 2]))))));
            arr_13 [i_1] [i_1] [i_3] = (((arr_2 [i_1 - 4]) > (arr_7 [i_1] [i_1 - 2] [4])));
            var_27 = (arr_2 [0]);
        }
        var_28 = (max(var_28, ((max(var_0, (((9223372036854775807 <= (arr_3 [i_1 - 2])))))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_29 = (min(var_29, ((((arr_0 [i_4 - 2]) < (arr_0 [i_4 - 1]))))));
        arr_16 [i_4 + 1] = (((54327 ? (arr_7 [15] [15] [18]) : var_5)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] = 4041598729;

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_30 = (max(var_30, var_2));
            var_31 = (min(var_31, ((((((arr_15 [i_5]) != (arr_14 [i_5]))) || ((((arr_7 [i_5] [i_5] [i_6]) ? (arr_7 [i_5] [19] [i_5]) : (arr_7 [i_5] [i_5] [i_5])))))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
            {
                arr_30 [i_5] [2] = (((arr_3 [i_5]) > var_17));
                var_32 -= (arr_5 [i_5]);
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_33 = (max(var_33, ((max(((((((!(arr_2 [7])))) / (arr_15 [i_6])))), (arr_4 [i_5]))))));
                var_34 = (min(var_34, ((max((arr_25 [i_6] [10]), (var_14 / 18446744073709551615))))));
                var_35 = (max(var_35, ((((((arr_7 [8] [i_6] [i_6]) ? (((~(arr_29 [i_6] [i_6] [9])))) : (~5199238469796653176))) >= -8909760691918467120)))));
                var_36 = -14;
                var_37 = -777731942;
            }
        }
        var_38 = ((+(((((arr_5 [i_5]) == 2622)) ? 244 : ((min(-3, var_3)))))));
    }
    #pragma endscop
}
