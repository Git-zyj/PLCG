/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 ^= (max((min((((var_16 ? var_0 : (arr_4 [i_0] [i_0])))), ((2487238600689222469 << (((((((-9223372036854775807 - 1) - -9223372036854775781)) + 48)) - 21)))))), (((~((~(arr_0 [i_1]))))))));
                        var_20 += 18446744073709551615;

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] [i_4] [i_2] = 85;
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = -250;
                        }
                        var_21 = (max(96, (min((max(var_0, var_17)), (((var_2 ? (arr_6 [i_0] [i_1] [i_3]) : -4702454151930324002)))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_22 = ((var_2 - ((var_2 ? 112 : 1023))));
            var_23 = ((~(arr_2 [i_0 + 1])));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_24 = ((((max((~143), (!-85)))) <= (max((arr_5 [i_0 - 2]), var_10))));
            var_25 = (arr_0 [i_6]);
            var_26 = (!0);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_29 [i_6] [i_6] [i_7] [i_6] [i_6] = -10388;
                            var_27 = (!var_10);
                            var_28 = (max(((((max(var_3, var_9))) ? var_11 : (max(3716624258, 95)))), (arr_19 [i_8] [i_8] [i_6])));
                            var_29 = ((!(!0)));
                        }
                    }
                }
                arr_30 [i_6] [i_6] [i_6] = 8738;
                var_30 |= (((((40386 ? 63 : 157))) ? var_17 : (((var_17 ? (((arr_26 [i_0] [i_0] [i_6] [i_6] [i_6] [i_7]) ? 85 : var_2)) : (min(var_18, 99)))))));
                arr_31 [i_6] = (((min((max((arr_18 [i_0] [i_6]), var_18)), 11978))) ? var_7 : (((-(((var_11 > (arr_1 [i_0]))))))));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_31 = (-(((arr_35 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0]) ? var_15 : var_14)));
                            var_32 = ((-17 ? ((2199023255536 / (arr_35 [i_12] [i_12 + 3] [i_12 - 2] [5] [i_12] [i_12]))) : (min(var_12, (arr_35 [i_12] [i_12 + 2] [i_12 + 1] [i_12] [i_12 + 2] [i_12])))));
                        }
                    }
                }
                arr_41 [i_6] [i_6] [i_10] [i_10] = 16;
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_33 = var_1;
                var_34 = (min((arr_38 [i_6] [i_6] [i_6] [4] [i_6]), (((arr_6 [i_0] [i_6] [i_13]) ? (max(36, 2296835809958952960)) : (((arr_5 [i_0]) ? (arr_9 [i_0] [i_0] [i_0 - 1] [10]) : -6202275662583701707))))));
            }
        }
        arr_44 [2] = (~64);
    }
    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        var_35 = (min(var_35, var_0));
        var_36 = 1;
    }
    var_37 = (max(var_37, -7265664202808793164));
    var_38 = (var_8 ? (!-var_11) : ((~(max(576460752303423488, var_0)))));
    #pragma endscop
}
