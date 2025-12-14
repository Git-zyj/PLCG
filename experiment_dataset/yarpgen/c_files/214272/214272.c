/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 ? var_5 : ((var_7 ? var_9 : (var_1 > 32767)))));
    var_12 = ((((((max(var_10, var_8))))) > ((((min(var_7, var_1))) ? ((32767 ? var_0 : var_9)) : (!194888668)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = arr_0 [i_0];
        var_14 ^= (((((var_10 ? (arr_1 [i_0]) : var_2))) < (((arr_1 [i_0]) ? 32744 : var_3))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 6;i_3 += 1)
                {
                    {
                        var_15 = (!-32747);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_10 [i_0] [i_3 - 2] [i_3] [i_1] [i_0] = (((arr_7 [i_2] [i_2 + 1] [i_2 + 3] [i_2 + 2]) ? (arr_7 [i_2] [i_2 + 1] [i_2 + 3] [i_2]) : 255));
                            var_16 = var_0;
                            var_17 = (((arr_2 [i_0 - 1]) ? -32753 : (arr_2 [i_0 - 1])));
                            arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_3] [i_0] = (arr_9 [i_0 - 1] [i_1 + 3] [i_2 + 3]);
                            var_18 = (min(var_18, ((2147483647 ? 305751034 : (var_1 / 4)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_19 = (!24711);
                            var_20 = (arr_14 [i_0] [i_1 + 2] [i_2] [i_3] [i_5]);
                            var_21 = (arr_1 [i_0]);
                            var_22 ^= (1 > -8872);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((((!(arr_5 [i_2]))) ? 254 : ((-32738 ? (arr_5 [i_2]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))));
                            var_24 = (max(var_24, (((!(((18446744073709551606 ? 255 : 255))))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] = ((!((((arr_19 [i_3] [i_3]) ? 4294967295 : 2)))));
                            var_25 = 32740;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 6;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 7;i_11 += 1)
                        {
                            {
                                var_26 = ((((var_6 ? (arr_17 [i_9] [i_9] [i_11]) : (arr_23 [i_0] [i_0 - 1] [i_0]))) < (((254 ? 9 : var_1)))));
                                arr_34 [i_8] [i_11] = ((-((var_1 ? var_3 : 37))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_38 [i_0] [i_12] [i_0 - 1] = ((var_10 / ((-32750 ? 19095 : var_9))));
                        var_27 = (arr_21 [i_8 - 1] [i_0 - 1]);
                        var_28 = (((arr_17 [i_12] [i_8 - 2] [i_12]) ? var_0 : (arr_17 [i_12] [i_8 + 3] [i_12])));
                        var_29 = (min(var_29, (((arr_12 [i_0] [i_8] [i_0 - 1] [i_0] [1] [i_8] [i_0 - 1]) ? var_8 : 25))));
                        var_30 = -var_9;
                    }
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        var_31 = var_3;
                        var_32 = (((arr_0 [i_0 - 1]) ? (((arr_17 [i_0] [i_8 + 2] [i_9]) % var_8)) : ((((130812658 <= (arr_22 [i_9] [i_9])))))));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_33 = (((((0 ? (arr_16 [i_9] [i_9] [i_9] [i_9]) : (arr_4 [i_8 + 4])))) ? 3973658273279170195 : (((var_10 ? var_4 : (arr_40 [i_9] [i_9] [i_9] [7]))))));

                        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            var_34 = -24712;
                            arr_46 [i_15] [i_15] [i_9] [i_8 + 3] [i_15] = var_7;
                            var_35 |= var_2;
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            arr_49 [i_0] [i_8 + 3] [i_9] [3] [3] = ((var_8 ? (!var_0) : (var_10 || var_7)));
                            var_36 = ((((3987626049552788249 ? 1 : 35))) || -var_10);
                            var_37 = (((arr_9 [i_8 - 2] [i_0] [i_0 - 1]) ? 0 : (arr_9 [i_8 + 4] [i_8] [i_0 - 1])));
                        }
                        var_38 = 0;
                        var_39 = var_5;
                    }
                    arr_50 [i_0] [i_8] = var_0;
                }
            }
        }
    }
    for (int i_17 = 2; i_17 < 21;i_17 += 1)
    {
        arr_54 [i_17] [i_17] = ((1 ? (((arr_51 [i_17 + 2]) / var_3)) : (((((var_3 * 37) < ((min((arr_52 [i_17] [i_17]), (arr_53 [i_17]))))))))));
        arr_55 [i_17] = ((~(var_10 > 9)));
        var_40 = (arr_53 [i_17]);
    }
    #pragma endscop
}
