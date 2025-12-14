/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 54127;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 282452354;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_1] [i_1] = ((~((((arr_0 [i_0] [i_0]) < 50331648)))));
                arr_9 [i_0] [i_1] [i_0] = ((var_5 ? (~6588345304378465150) : ((var_2 ? 3423855297 : (arr_6 [i_0] [i_0])))));
                arr_10 [i_0] [i_0] [10] [i_2] = ((134902265 & (arr_6 [i_0] [i_0])));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_21 = var_11;
                var_22 = var_9;
            }
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                var_23 = var_18;

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_24 = ((200 ? (!32011) : var_12));
                    var_25 = (arr_7 [1] [i_0]);
                    arr_19 [i_0] = ((!(-17901 / 18446744073709551615)));
                    var_26 = (arr_16 [i_0]);
                }
            }
            arr_20 [i_0] [10] [i_0] = -4160065022;
        }
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            arr_24 [i_0] = (((((var_9 * (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (arr_5 [i_0] [i_0] [i_0])));
            arr_25 [i_0] [i_0] = (!50331648);
            var_27 = ((~((6442075533540949330 << (var_11 - 1673518928)))));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_28 = var_7;
            var_29 = (((((arr_6 [i_0] [i_7]) ? -50331631 : var_11)) << ((((var_14 ? var_13 : var_6)) - 34))));
            arr_28 [i_0] [i_7 + 2] [8] = ((var_4 - var_8) + ((var_14 + (arr_12 [1] [i_0] [i_0]))));
            arr_29 [i_0] [i_7 + 2] [i_0] = 19;
        }
        arr_30 [i_0] [i_0] = ((1 ? 6442075533540949330 : 4160065030));
        var_30 = var_4;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_31 = (((arr_31 [i_8]) || (arr_31 [i_8])));
        var_32 = (((!14190125701547617072) ? ((min((var_9 + var_3), ((~(arr_31 [i_8])))))) : ((min(1, var_1)))));
        arr_33 [17] = var_3;
    }
    #pragma endscop
}
