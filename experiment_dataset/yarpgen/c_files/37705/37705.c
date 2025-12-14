/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])))) / (arr_0 [i_0 + 1])));
        var_14 = (arr_0 [i_0 + 3]);
        var_15 = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = (!var_11);
        var_17 = ((arr_4 [i_1] [i_1]) ? (arr_4 [7] [i_1]) : (arr_4 [i_1] [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_18 = (max(var_18, (((var_5 ? (arr_7 [i_3]) : 28)))));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_19 = (var_0 <= var_11);
                var_20 = 703024308;
            }
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                var_21 -= (arr_14 [i_5] [8] [i_5 - 2]);
                var_22 = 2147418112;
                var_23 = (max(var_23, ((((arr_1 [i_5 - 1]) ? (arr_1 [i_5 + 1]) : (arr_3 [i_5 + 1]))))));
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                var_24 *= ((437600189 ? 3857367079 : 437600227));
                var_25 = (((arr_18 [i_2] [i_2]) ? (arr_17 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2]) : (arr_10 [i_6 + 1] [i_6 + 1] [i_6])));
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_26 = (~191);
            var_27 = (!var_6);
            var_28 = (arr_2 [i_2]);
            var_29 = var_0;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_30 = var_2;
            var_31 = 36;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_32 = (min(var_32, (((39 + (arr_4 [i_2] [i_2]))))));
            var_33 = ((var_1 ? 921832070 : var_0));
            var_34 = (((((arr_24 [i_9] [i_9] [i_9]) ^ 16)) & var_5));
            var_35 = (((arr_17 [i_2] [i_2] [i_2] [i_2]) ? (arr_12 [i_2] [i_9] [i_2]) : 32640));
            var_36 = (i_2 % 2 == 0) ? (((((((-9526 + 2147483647) >> (((arr_13 [i_2] [i_9] [i_9]) + 24))))) ^ 4503599627370495))) : (((((((-9526 + 2147483647) >> (((((arr_13 [i_2] [i_9] [i_9]) + 24)) - 84))))) ^ 4503599627370495)));
        }

        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            var_37 = (max(var_37, (((var_1 ? var_6 : var_9)))));
            var_38 = (23031 % 13955838198851297561);
            var_39 = ((3857367123 != (arr_4 [i_10 + 1] [i_10 + 3])));
            var_40 = var_7;
        }
        var_41 = (arr_19 [i_2] [2]);
    }
    var_42 = var_1;
    #pragma endscop
}
