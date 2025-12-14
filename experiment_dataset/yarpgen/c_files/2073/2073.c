/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_12 || var_13) ? var_12 : var_0)));
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_19 = (-2147483647 - 1);
                var_20 -= ((-(((!var_6) ? (arr_4 [i_1] [i_2]) : ((var_5 ? (arr_4 [i_0] [i_1]) : (arr_7 [i_2] [i_1] [i_1] [5])))))));
            }
            var_21 = ((!((((arr_8 [i_0] [6] [10] [22]) << (((arr_4 [i_0] [i_1]) - 61025)))))));
            var_22 = (arr_3 [i_0]);
            arr_9 [i_0] [i_0] = ((arr_7 [i_0] [i_0] [i_1] [i_1]) ? -2964311540323121481 : (((min(-5271, 7)))));
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_23 = ((var_13 ? var_8 : 326087053));
                var_24 = (((((var_16 ? var_12 : (arr_7 [i_0] [i_0] [i_3] [i_4])))) + (arr_3 [i_0])));
                arr_15 [i_0] [i_3] [i_4] = (((arr_10 [i_0]) ? ((((arr_14 [i_4]) ? -6010 : (arr_10 [i_0])))) : (arr_11 [i_4] [i_3])));
                arr_16 [i_4] [i_4] = (16 ? 16070 : (arr_11 [i_0] [i_3]));
                var_25 = var_15;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_26 = -18867;

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_27 = -var_1;
                    var_28 = (arr_22 [i_0] [i_3] [i_5]);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_29 = (((arr_23 [3] [i_3] [i_0]) / 16));
                        arr_27 [i_5] = (3531813351 <= var_7);
                        var_30 &= ((+((((arr_19 [i_0] [11] [i_5] [i_8]) || (arr_3 [22]))))));
                        arr_28 [i_0] [i_3] [i_5] [2] [i_5] = (arr_25 [i_7] [i_7] [i_5] [i_7] [i_5]);
                        arr_29 [i_5] [14] = (~((-16 ? (arr_13 [i_8] [21] [i_3] [18]) : var_0)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_31 *= -var_10;
                        arr_32 [i_3] [i_3] [i_3] [14] [i_3] [i_5] = (arr_0 [i_0] [i_9]);
                        arr_33 [i_0] [i_0] [i_5] [i_0] [i_9] [i_0] &= ((((((arr_21 [i_0] [i_3] [i_5] [i_0] [i_9]) ? (arr_30 [i_9] [i_7] [i_5] [i_3] [i_0]) : var_15))) ? ((-(arr_13 [i_5] [i_3] [i_5] [6]))) : (((var_7 * (arr_4 [i_3] [i_3]))))));
                        var_32 = (!837134877);
                    }
                    var_33 = (arr_14 [i_5]);
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_34 = -var_6;
                    var_35 = ((-1 + (arr_8 [i_0] [11] [i_0] [i_0])));
                    var_36 += var_10;
                    arr_37 [i_5] = (~var_4);
                }
            }

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_45 [9] [i_11] [14] [i_0] = (arr_26 [i_3] [i_3] [i_11] [i_12] [i_11] [i_11]);
                    var_37 = ((!(((arr_43 [i_0] [i_3] [i_11]) >= var_2))));
                }
                var_38 = (4 > -8075909758152085880);
                arr_46 [3] [i_3] [i_0] &= ((~((var_3 ? var_14 : (arr_39 [i_0] [i_3] [i_0])))));
                var_39 = ((var_7 * (arr_35 [i_0] [i_0] [i_0] [i_0])));
            }
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {
            var_40 = (min(var_40, -158));

            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                var_41 = ((((min((arr_42 [4] [i_13] [21] [2] [21] [2]), 1330103170))) ? var_4 : (arr_7 [i_0] [i_13] [4] [i_13])));
                arr_51 [i_0] [i_0] [i_0] = (min((((44525 ? -16 : 53496))), (arr_38 [i_0])));
                var_42 += ((!((min((((var_1 ? var_3 : (arr_5 [i_13] [i_14])))), (((arr_48 [i_0]) ? var_3 : 1223883554)))))));
                var_43 = 1424645150;
                var_44 = ((((max(-63, ((var_10 ? var_12 : 232))))) ? (((min((arr_30 [i_0] [i_13] [i_13] [i_14] [i_14]), (arr_30 [i_0] [22] [i_0] [i_0] [i_0]))))) : ((~(((arr_25 [16] [i_13] [i_13] [i_13] [i_14]) ? (arr_11 [i_0] [20]) : var_5))))));
            }
            var_45 = ((-(((arr_38 [i_0]) ? var_7 : (arr_38 [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_46 = (min(var_46, (arr_13 [i_15] [i_15] [6] [i_15])));
        arr_55 [i_15] = var_11;
        var_47 = (min(var_47, (((var_15 ? var_6 : var_9)))));
    }
    var_48 += var_8;
    #pragma endscop
}
