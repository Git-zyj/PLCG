/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 = ((!(!-var_7)));
        var_13 = var_0;
        var_14 &= -var_7;

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_15 = (~var_8);

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_16 = var_2;
                    var_17 = -var_9;
                    arr_11 [i_1] [1] [i_2] [i_3] = (~var_8);
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_18 = (max(var_18, var_1));
                    var_19 = (max(var_19, var_4));
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    var_20 -= (!var_1);
                    arr_17 [i_0 - 3] [i_5] [i_1] = ((!(!-var_4)));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_20 [i_1] = ((~(!-var_6)));
                        var_21 = -var_10;
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_22 = -var_0;
                        arr_23 [i_1] = var_1;
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        var_23 = (~(((!(!var_0)))));
                        var_24 = var_3;
                        var_25 = (max(var_25, var_3));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_9] [i_1] [i_9] = ((!(~var_5)));
                        var_26 = (!var_9);
                        var_27 = (max(var_27, (~var_0)));
                    }
                    arr_30 [i_1] [i_1] = -var_3;
                }
                var_28 = (--var_7);
                var_29 = (!var_6);
            }
            var_30 = ((~(!var_1)));
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            var_31 = (min(var_31, var_0));
            var_32 &= ((~((~(!var_7)))));
            arr_34 [i_10 - 2] [i_0 + 1] = var_7;
            arr_35 [i_0] [i_10 + 1] = (~var_7);
            var_33 = var_3;
        }
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        arr_39 [i_11] = ((((!(~var_3)))));
        arr_40 [i_11] = var_2;

        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            arr_43 [i_12] [i_11 + 2] &= var_2;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_49 [i_11] [i_11] [i_13] [i_11] = var_9;
                        arr_50 [i_13] [i_12] [i_13] [i_14] = var_9;

                        for (int i_15 = 3; i_15 < 14;i_15 += 1)
                        {
                            var_34 = ((~(~var_1)));
                            var_35 = var_0;
                        }
                        arr_53 [i_11] [i_11] [i_13] [i_11 - 1] = -var_10;
                    }
                }
            }
            arr_54 [i_11] [i_12] [12] = (~-var_5);
            arr_55 [i_11 - 1] [i_12 - 1] = var_2;
        }
        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            arr_58 [i_11] [i_11] = var_1;
            var_36 = var_3;
            var_37 = (!var_2);
            arr_59 [i_11] = var_9;
            arr_60 [i_16] [i_16] = (~var_9);
        }
        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 14;i_19 += 1)
                {
                    {
                        arr_69 [i_19] [i_19] = -var_9;
                        var_38 = ((!(((~(!var_6))))));
                        var_39 = (!var_6);
                    }
                }
            }
            arr_70 [i_11] = var_7;
            var_40 -= var_0;
        }
    }
    #pragma endscop
}
