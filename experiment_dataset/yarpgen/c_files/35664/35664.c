/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_20 &= (arr_2 [i_0]);
                arr_9 [i_1] = (-2147483647 - 1);
                arr_10 [i_1] = (!(((~(max(454023910, var_6))))));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_21 = (((((((max(var_5, 240))) ? 454023910 : var_13))) ? (arr_13 [i_0] [i_1] [1]) : 16390396427402781979));
                var_22 = (max((9279 * 0), var_5));
                arr_14 [i_1] = (arr_3 [i_3]);
                var_23 = ((((max((var_0 << 0), (!454023910)))) ? (((var_13 ? (min(var_13, 135)) : 1))) : 9279));
                var_24 -= (!var_3);
            }
            var_25 = (max(var_25, (((((arr_6 [i_0] [1] [i_0]) ? 18446744073709551615 : (arr_6 [14] [5] [i_1])))))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] [i_4] = -4261;
            var_26 += -1895284390;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        var_27 = (((56 + var_4) ? 200 : 1587862665));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_28 = var_11;
                            var_29 = (max(var_29, var_5));
                        }
                    }
                }
            }
            var_30 = -1;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_31 *= 18446744073709551615;
            arr_35 [i_0] [i_9] = ((-((124 ^ ((241 ? 14 : 0))))));
            var_32 = var_7;
        }

        for (int i_10 = 3; i_10 < 14;i_10 += 1)
        {
            arr_38 [i_0] [i_0] [i_10] = (-23069 ? var_19 : 1);
            var_33 = (max(var_33, (((((!(arr_17 [i_10 - 1]))) ? var_8 : (max(var_2, (arr_22 [i_10 - 2] [i_10 - 2] [3] [i_10]))))))));
            arr_39 [i_0] [i_0] = ((((((1 == 15) ? var_9 : (arr_12 [i_0] [i_0] [i_10 - 1] [i_0])))) ? var_8 : (((!1) ? 0 : var_12))));
            var_34 = var_15;
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 14;i_11 += 1)
        {
            var_35 = (~241);
            arr_42 [1] = (1532205106306780788 & -87);
            var_36 = var_14;
        }
        var_37 &= 1532205106306780794;
        var_38 = (((arr_20 [i_0]) ? var_17 : var_14));
        arr_43 [i_0] = (((((~(min(18446744073709551585, 99))))) ? -1396861994 : (!var_16)));
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    var_39 = ((((max(var_0, ((!(arr_45 [i_14])))))) != 454023912));
                    var_40 = -1396861994;
                }
            }
        }
        var_41 = var_11;

        /* vectorizable */
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            var_42 = 1;
            var_43 = (((arr_54 [i_15] [i_15 - 1]) + (arr_54 [i_15] [i_15 - 1])));
            arr_56 [i_12] = var_8;
            var_44 = (((arr_55 [i_15 - 1] [i_15 - 1]) != (arr_55 [i_15 + 1] [i_15 + 1])));
        }
    }
    var_45 = ((~(((0 | 0) ^ var_10))));
    var_46 = var_14;
    #pragma endscop
}
