/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = -var_18;
                                arr_12 [i_2] [i_3] [i_1] = (-9223372036854775807 - 1);
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = (((var_8 ? var_6 : (max(var_16, var_5)))));
                            }
                        }
                    }
                    var_20 -= ((!((!((max(var_13, var_18)))))));
                }
            }
        }
        arr_14 [i_0] [i_0] = (~var_16);

        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_21 = ((!(-23 == 18)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            var_22 = (((var_0 ? var_18 : var_16)));
                            var_23 = (((1 ? var_2 : 0)));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_24 = (max(var_24, ((((35115652612096 ? -7702255764713781479 : 383127829))))));
                            arr_27 [1] [9] [i_6] [i_7] [i_9] = (((60 ^ 15583412904521116547) ? var_17 : var_5));
                            var_25 -= (((!var_6) < var_17));
                            arr_28 [i_6] [i_6] = (((var_1 == var_7) ? (!var_5) : var_12));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_31 [i_0] [i_5 + 1] [i_5 + 1] [i_6] = var_10;
                            arr_32 [i_10 - 2] [i_7] [i_6] [i_6] [i_0] [i_0] = var_14;
                            var_26 = var_3;
                        }
                        var_27 = (~var_14);
                    }
                }
            }
        }
        var_28 -= var_13;
        arr_33 [17] = 0;
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_36 [i_11] = var_10;

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_39 [i_11] [i_12] = (((((-((var_9 ? var_18 : var_9))))) ? (var_3 / var_3) : -0));
            var_29 -= (-2147483647 - 1);
            arr_40 [i_12] [i_11] [i_11] = var_11;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_50 [i_11] [i_11] [i_11] [i_11] = var_10;
                        arr_51 [i_11] [i_13] [i_11] [i_15] = (((var_15 ? var_16 : var_0)));
                        var_30 = (!var_15);
                    }
                }
            }
            arr_52 [i_11] [i_11] [7] = ((-44 ? 1 : 17169753653519324077));

            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                arr_56 [i_11] [i_13] [i_13] = var_1;
                var_31 = ((var_14 / var_9) ? var_14 : ((var_6 ? var_14 : var_1)));
                var_32 -= var_6;
            }
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                var_33 = (~1);
                arr_60 [i_11] [i_11] [i_11] = (-var_11 ? var_18 : ((var_14 ? var_5 : var_6)));
                var_34 -= (((((var_18 ? var_7 : var_18))) ? var_6 : var_3));
            }
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 21;i_18 += 1)
        {
            var_35 = var_4;
            arr_64 [i_18] = var_5;
            var_36 = (((~var_0) == (~var_16)));
        }
    }
    var_37 = ((((!(5299 | 1))) || ((0 >= (-9223372036854775807 - 1)))));
    #pragma endscop
}
