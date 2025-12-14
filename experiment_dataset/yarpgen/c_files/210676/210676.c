/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_3, 1));
    var_19 = 25363;
    var_20 = ((((min(var_4, 239))) ? ((((((min(var_7, var_2))) || var_13)))) : (min(31, (1 * var_6)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((min(var_6, (~1))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, -15710));
                    var_22 *= var_8;

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 = (((arr_13 [i_0 - 1] [i_0] [i_0 - 2]) << (17159 - 17150)));
                            var_24 = ((((!(arr_5 [i_0] [i_0] [i_0]))) ? var_11 : (arr_8 [i_1 - 1] [i_1 - 1] [i_4])));
                            arr_18 [i_4] [i_2] [i_1] [i_2] [i_1] [i_1 + 1] [i_0] = var_11;
                            var_25 = 64;
                        }
                        arr_19 [i_0 - 3] = ((arr_16 [i_0] [i_1] [i_2] [i_2] [i_3 - 2] [i_3]) ? (((var_12 ? (arr_12 [i_0] [i_0] [i_1 + 1] [i_2 - 3] [i_3 - 3]) : var_11))) : ((1 ? var_8 : ((var_0 ? var_3 : 0)))));
                        var_26 *= (arr_8 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_27 = (((var_4 ? var_12 : var_7)));
                        arr_22 [i_5] [i_5] [i_5] [i_5] = ((0 ? 1 : 2851890092));
                        var_28 = ((((var_2 ? var_13 : var_15)) + (((1 ? 1 : var_9)))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_29 = (min((((arr_24 [i_0] [i_6] [i_0] [i_0 - 1]) ? var_15 : (var_4 & var_13))), ((min((((var_12 + 2147483647) >> (var_17 - 11979445043066465322))), var_7)))));

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            var_30 = (max(0, -3605));
                            arr_29 [i_6] [i_1 - 1] [i_1] [i_1] [i_1] [1] [i_1] = 1885235303995650234;
                            arr_30 [i_7] [i_6] = 1;
                            arr_31 [i_0] [i_0] [i_6] [i_0 - 3] [i_0 - 3] = 1;
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_31 = (((arr_24 [i_1] [i_6] [i_1 + 1] [i_1 - 1]) ? var_6 : -188720260135284198));
                            var_32 = (arr_3 [i_0 - 3]);
                            arr_34 [i_1 - 1] [i_6] = (((((((max(var_15, var_8))) || ((min(251, 3319503127370695570)))))) << 1));
                        }
                        for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_33 = ((var_6 ? var_11 : var_1));
                            arr_37 [i_6] = (min((((arr_7 [i_1 + 1]) - ((var_7 ? var_16 : var_15)))), (((+(((arr_16 [i_0] [i_1] [i_2] [i_6] [i_2] [i_6]) ? var_14 : (arr_20 [i_6] [11] [i_0] [i_9]))))))));
                            var_34 = (((29624 - 9223372036854775807) + var_12));
                            var_35 = 1;
                            arr_38 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_6] = ((var_15 << ((((var_11 ? 404159825 : var_1)) - 404159795))));
                        }
                        var_36 = 1;
                        arr_39 [i_6] [i_6] [i_6] [11] = var_4;
                    }
                    var_37 = var_12;
                    var_38 = (min(var_38, 1));
                }
            }
        }
        arr_40 [i_0] [i_0] &= ((!((min((arr_16 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 3]), (arr_26 [6]))))));
        arr_41 [i_0] = (max(((var_9 ? -1 : (0 + 1))), (((!(((var_7 ? 1 : var_9))))))));
    }
    for (int i_10 = 3; i_10 < 20;i_10 += 1)
    {
        arr_45 [i_10 - 3] = (!-44736660);
        var_39 = ((+(min((((arr_43 [i_10]) ? 1 : 1)), (((var_9 <= (arr_43 [i_10 + 1]))))))));
    }
    #pragma endscop
}
