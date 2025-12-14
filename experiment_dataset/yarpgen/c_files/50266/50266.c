/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = var_0;
        var_16 = (max(var_16, ((min((((-((-723268542 ? 723268541 : var_14))))), (max(var_11, 18446744073709551615)))))));
        var_17 = ((!(((723268541 | (9022506774990397791 >= var_9))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((var_8 ? (max(9424237298719153848, (arr_2 [i_1]))) : ((min((arr_2 [i_1]), var_14))))))));
        arr_5 [i_1] = (max(10, -3557198971794650943));
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] = ((((((arr_6 [i_2] [i_2]) ? var_1 : (~var_3)))) ? (((max(2894250228, -51)) | ((var_2 ? var_0 : 4221027432)))) : 1334032926));
        arr_9 [11] = ((~((14 ? 3390670 : -15))));
        arr_10 [i_2] [i_2] = (arr_7 [i_2] [i_2]);
        var_19 = (max(var_1, ((((3910004394675177295 ? 3168937807 : -2147483635)) / -20))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_20 = (min(1, 3557198971794650942));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_21 += 30;
                    arr_18 [i_3] [i_3] = 4294967295;
                    arr_19 [i_3] = 0;
                    arr_20 [i_3] = 3557198971794650942;
                }
            }
        }
        arr_21 [i_3] = (~11027857509568032814);
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_22 *= (max(12, 9223372036854775807));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_23 = (arr_27 [i_6] [i_7] [i_7]);

            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                arr_33 [i_8] [i_7] [i_7] [i_6] = var_2;
                var_24 = (((arr_15 [i_7] [i_8 - 4] [1]) - (arr_15 [i_7] [i_8 - 4] [0])));
            }
            arr_34 [i_6] [i_7] = -367873654;
        }
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_38 [i_9] [i_6] = ((((!((min(var_3, var_2))))) && (arr_25 [11])));
            arr_39 [i_6] [12] = (arr_12 [0] [i_9]);
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            var_25 &= max(((((arr_37 [i_10 - 1] [i_10 - 1]) ? ((0 & (arr_35 [i_6] [i_6] [i_10]))) : (arr_26 [16])))), ((((var_13 >= (arr_13 [i_10]))) ? (max(var_11, (arr_40 [i_10]))) : ((((arr_31 [14] [14] [12]) ? (arr_24 [i_6]) : var_10))))));
            var_26 = max((min(4026531840, 8191)), 2230790657);
            var_27 = (min(var_27, ((((((((max(0, (arr_41 [i_6] [i_10] [i_10])))) ? (arr_12 [8] [i_10]) : var_10))) ? (!var_11) : (((3637660773 || (arr_16 [14] [i_10] [i_6] [i_10 - 1])))))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_49 [8] [i_11] [i_10 - 1] [i_10] [i_6] [i_6] = (max(72, ((6493465156808326851 ? 2064176639 : 65535))));
                        arr_50 [i_12] [i_11 + 1] [16] [i_6] = 3637660773;
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            var_28 = (((((536870784 != (arr_29 [i_6] [i_13] [i_13 + 3])))) / 63724));
            var_29 = (((((max((arr_27 [1] [i_6] [1]), 2606128206)) | (arr_41 [i_13 + 3] [i_13] [i_13 - 1])))) ? (max(((-(arr_13 [i_13]))), (arr_26 [0]))) : var_13);
        }
    }
    var_30 = ((((min((var_4 - 0), var_8))) / ((var_6 ? (min(var_14, 11271789676154670079)) : (((var_10 ? -71 : var_10)))))));
    var_31 = ((((min(47, (657306521 - var_14)))) + (min(3463974072982151530, (2156345376 + var_4)))));
    #pragma endscop
}
