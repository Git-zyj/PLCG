/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((max(8, ((max(var_14, var_12))))));
    var_17 = -var_14;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(16225015022948523931, -8161112687950456317));
        arr_3 [i_0] = ((max(((~(arr_0 [i_0]))), (-1520929811 & 0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_0] = var_4;

                        for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_18 = min((((min((arr_4 [i_3]), 1)) ? (((-(arr_5 [i_2] [13])))) : var_13)), var_10);
                            var_19 = (max(var_19, ((min((min(0, (~-2200))), var_4)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_20 -= var_15;
                            var_21 = var_9;
                            var_22 = (arr_13 [i_1] [i_1] [i_2] [i_3] [i_5 + 3] [i_1] [i_5]);
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = var_3;
                            arr_20 [i_0] [i_0] [i_0] = var_13;
                        }
                        arr_21 [i_3] [i_0] [i_0] [i_0 + 1] = (((!(!var_3))));
                    }
                }
            }
        }
        var_23 = var_11;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_24 = (max(var_24, var_8));
        var_25 = (max(var_25, ((-(arr_14 [5] [i_7] [7] [i_7] [i_7] [5])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_26 &= 18446744073709551615;

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_27 = var_8;
                        var_28 = ((-(!var_10)));
                    }
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        arr_39 [i_7] [i_8] [i_7] [i_7] = var_13;
                        var_29 = (max(-var_8, (arr_25 [11] [i_8])));
                    }
                    var_30 = (min(((((((var_7 ? var_7 : (arr_32 [i_7] [i_7] [i_7] [i_7])))) ? ((-(arr_0 [i_8]))) : var_7))), (((18446744073709551615 >= 11052158578165401436) ? 2139095040 : 18446744073709551609))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {

        /* vectorizable */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_46 [i_12] [i_12] = 2155872240;
            var_31 = var_3;
            var_32 = 558120349983830133;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_33 = -var_9;
                            var_34 = (max(var_34, var_9));
                        }
                    }
                }
            }
            var_35 = 1;
        }
        arr_56 [i_12] = (max((((arr_52 [13] [i_12] [i_12]) << 1)), (arr_52 [i_12] [i_12] [i_12])));
    }
    var_36 *= (min(1, 2762483628));
    #pragma endscop
}
