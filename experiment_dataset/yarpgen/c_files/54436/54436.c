/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max((var_10 % var_9), var_5)))));
    var_19 = (~83);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [10] = (min(63, -63));
                        arr_13 [i_0] [i_0] [i_3] = var_2;
                    }
                }
            }
            var_20 &= ((-(7784 != 7784)));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_21 = ((min(((65535 ? 3187561612484399699 : 65526)), ((max(var_8, var_8))))));
            var_22 = (min(var_22, (((((min(1, 92))) ? var_4 : (var_10 | var_0))))));
            var_23 |= max(0, (max(((max(-58, 1))), 1)));
            arr_16 [i_0] [i_4] [i_4] = ((-((var_9 ? 65531 : -2134844807))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_21 [i_0] [i_0] [i_5] = (var_5 * var_0);
            var_24 = (min(var_24, ((max((min(57755, 6430326712991216764)), -var_3)))));
        }
        var_25 = (((65522 ? 0 : (-11132 >= 63))));
        arr_22 [i_0] [i_0] = (((48036 == 1) | var_12));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_26 = (min((max((!10356), 65531)), ((var_12 << ((((max(var_5, 57756))) - 65479))))));
                arr_32 [i_7] [2] &= var_6;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_38 [i_6] [i_7] [11] [i_6] [i_9] = (min(1, 18157));
                    arr_39 [i_10] [i_10] [i_10] [i_10] [i_6] = (((((var_3 ? ((var_15 ? 9 : var_16)) : ((max(var_9, var_4)))))) && ((max((max(var_13, var_3)), var_5)))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_44 [i_6] [i_7] [i_6] [11] [i_7] [1] = (-32 & var_11);
                    arr_45 [i_6] [i_11] [i_11] [i_6] = 18446744073709551609;
                }
                for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_27 = ((~((((max(1, 2134844799)) <= ((var_1 ? var_12 : var_16)))))));
                    arr_50 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] = (max(((115 ? var_3 : 58163)), (var_17 - 58163)));
                }
                var_28 = (max(11132, (!42485)));

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_29 = (~-var_1);
                    var_30 = var_15;
                    arr_53 [i_6] [i_6] [i_6] [i_6] = (min(-var_9, ((var_10 ? (var_16 || var_5) : var_14))));

                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_31 = (((min((min(var_5, -2134844814)), var_1))) ? var_13 : (((!var_16) ? ((max(var_17, var_6))) : var_2)));
                        arr_56 [i_13] [i_13] [i_13] [i_14] [i_6 - 1] &= 1;
                    }
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        var_32 = (min((((var_7 <= var_9) ? (max(1, -2134844793)) : 12)), (((!(var_9 == var_0))))));
                        arr_60 [i_6] = 32;
                        arr_61 [i_6] [i_7] [i_9] [i_6] [i_15] = max(((max(var_13, var_9))), (((-8060938237758418568 && var_8) ? (!var_17) : var_16)));
                    }
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_65 [i_6 + 1] [i_6] [5] [5] = (!(!var_10));
                    var_33 = var_9;
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    var_34 = (((18446744073709551615 ? var_7 : -1)));
                    arr_68 [2] [i_9] [i_7] [2] |= var_12;
                }
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    arr_72 [i_6] [i_6] [0] [i_18] [i_6 - 1] = (1 <= var_3);
                    arr_73 [i_6] [0] [i_9] [i_18] [11] [i_6] = (var_17 < 7383);
                }
                arr_74 [i_6] [i_6] [i_6] = max(var_3, var_2);
            }
            var_35 = ((((max(var_2, var_4))) ? ((min(var_5, 136))) : 1));
            arr_75 [i_6] [1] = 29;
            var_36 = ((((min((min(0, 65535)), (max(var_3, var_15))))) & (23051 || 42477)));
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
        {
            var_37 = (max((max(65527, (var_5 & 1))), (((max(var_11, var_4))))));
            var_38 = ((!((max(68557276, 7389329412985169112)))));
            var_39 = (((max(var_12, 31)) >= ((var_2 ? -var_15 : -7373))));
        }
        arr_78 [i_6] [i_6] = (((min(var_14, var_14))));
        var_40 = (min(var_40, var_16));
    }
    #pragma endscop
}
