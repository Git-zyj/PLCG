/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((29 ? (!var_3) : var_6));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((65535 ? 0 : 65512));
        var_12 = ((((((max(29, 37))) ? ((var_9 ? 1 : -15386)) : (arr_1 [i_0]))) ^ ((((!(arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = max(-1835, -28124);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = var_10;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                var_13 &= ((!(arr_5 [i_3 + 2])));
                arr_14 [1] [i_3] = (arr_10 [i_3] [i_3 - 2] [i_3 + 1]);
                arr_15 [0] [i_3] [i_1] = 61617;
                var_14 = (max(var_14, -15968));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_20 [i_4] = var_0;

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_15 = (max(var_15, (((8084 ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_5)))));
                        var_16 -= (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_24 [i_4] = var_0;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_17 = (arr_19 [i_1]);
                        var_18 += 18446744073709551615;
                        var_19 = (arr_13 [i_5] [i_5] [i_4] [i_4]);
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((0 ? 10210 : 7));
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_20 = ((!(arr_6 [i_1])));
                            var_21 = (arr_11 [i_1] [i_1] [i_1]);
                            arr_33 [i_1] [i_2] [i_4] [i_4] [i_9] = (arr_29 [i_8]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_22 = (((arr_29 [i_2]) ? (arr_29 [i_4]) : -16697));
                        arr_38 [1] [i_2] [1] [1] [i_2] = -var_10;
                    }
                    arr_39 [i_2] [i_10] = (arr_26 [i_10] [i_10] [i_4] [i_2] [i_1]);
                }
                arr_40 [i_1] [3] [i_1] = (~var_1);
            }
            var_23 = (arr_35 [i_1] [i_2] [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_44 [1] = ((var_1 << ((var_9 / (arr_7 [i_12])))));
            arr_45 [i_1] [i_1] = ((~(1 << var_7)));
        }
        for (int i_13 = 3; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_48 [i_1] [i_13] [i_1] = (((((-32765 ? var_1 : -1))) ? ((max((min((arr_11 [i_1] [i_1] [i_1]), -28099)), (arr_11 [i_13 - 2] [i_13 - 2] [i_13])))) : 1));
            var_24 = ((-(arr_17 [i_13] [i_13] [i_13 - 2])));
        }
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            arr_52 [i_1] [i_14] [10] = ((max((16041 * 8), var_0)));
            arr_53 [i_1] [i_1] [i_14 - 1] = (min((~0), ((~((max((arr_5 [4]), 12823)))))));
            arr_54 [i_14 + 2] = (max(((((min(0, 65535)) < 61617))), (min(((min(var_4, var_10))), 255))));
            arr_55 [i_14 + 2] = (((((-((min(var_1, 61633)))))) ? (arr_34 [i_14 - 1] [i_14 + 2] [i_1] [i_1]) : (((arr_42 [4] [i_1]) + ((-(arr_19 [i_1])))))));
        }
    }
    #pragma endscop
}
