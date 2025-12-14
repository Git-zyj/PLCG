/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(((max(var_5, var_14))), (max(var_19, var_6)))) <= (((var_6 ? var_10 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = (arr_1 [i_1]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_22 = ((var_10 - (((arr_4 [i_1] [1]) ? var_9 : (arr_6 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3])))));
                        var_23 = (max(var_23, ((((arr_4 [i_2] [i_1]) & var_17)))));
                        var_24 = var_6;
                    }
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_25 = (((arr_0 [i_4 - 2] [i_4 - 2]) & (arr_10 [i_4 - 2] [i_1] [i_2])));
                        arr_11 [i_2] [i_1] = var_14;
                    }
                    var_26 -= (!var_17);
                }
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    var_27 = (var_8 + var_9);
                    arr_14 [i_0] [i_1] [i_1] = var_3;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_17 [i_1] [i_1] = (((arr_4 [i_1] [i_0]) == (arr_4 [i_0] [i_6])));
                    var_28 = (arr_15 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_29 += ((~(((arr_1 [i_0]) ? var_1 : (arr_18 [i_0] [i_1] [15] [i_7] [i_8])))));
                                arr_22 [i_1] = (arr_9 [i_0]);
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_30 = (max(var_30, (arr_10 [12] [i_0] [i_9])));
                        var_31 = (((((~(arr_2 [i_1] [i_6] [i_9])))) ? ((var_1 ? var_16 : var_12)) : ((((arr_9 [i_9]) ? (arr_4 [i_0] [i_1]) : var_15)))));
                        var_32 -= var_7;
                        var_33 -= var_17;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_34 = ((~(arr_2 [i_0] [i_0] [i_0])));
                        var_35 = (1670616148 || -662663838);
                        var_36 = 1670616148;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_37 = (((arr_27 [i_1]) & var_11));
                        var_38 = (arr_16 [i_11] [i_1] [i_1] [i_0]);
                    }
                    var_39 = ((((var_19 ? var_1 : (arr_16 [11] [i_1] [i_1] [i_6]))) * (((((arr_25 [15] [i_1] [i_1] [1]) == (arr_16 [i_0] [i_1] [i_1] [i_1])))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_40 = (((arr_33 [i_0] [i_1] [i_12] [i_1]) ? (arr_33 [i_0] [i_1] [i_1] [i_12]) : (arr_33 [i_0] [i_1] [i_12] [i_12])));
                    var_41 -= var_6;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_42 = (max(var_42, ((max((max(((var_12 ? (arr_21 [i_0] [i_1] [i_13]) : var_19)), ((max(var_8, var_5))))), ((((arr_18 [i_0] [i_1] [i_13] [i_14 - 1] [i_1]) > (min(var_16, var_2))))))))));
                            var_43 = (var_15 + var_18);
                        }
                    }
                }
                var_44 = ((-9191152883228275963 ? -32 : (13446071589904187486 || 50925)));
            }
        }
    }
    #pragma endscop
}
