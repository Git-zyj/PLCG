/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((var_8 ? ((var_12 ? var_18 : var_19)) : var_5)), var_14);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = ((((((min(var_13, var_3)) % var_4))) ? ((var_8 << (var_3 - 675067530))) : ((((max(var_11, var_17))) ? ((var_14 ? var_14 : var_0)) : var_3))));
                            arr_13 [i_0] [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = (((-57 ? 9010 : ((min(0, 1))))) * (!2007558400));
                            arr_14 [8] [i_1 - 1] [1] [i_3] [i_4] [i_4] [1] = ((((max(-16, 2))) / ((min(-34, 1)))));
                            var_22 = (((((-((var_7 ? var_18 : var_19))))) ? (var_13 - var_7) : var_3));
                        }
                        var_23 += ((-(min(-1921896380, -5))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_24 -= (((((var_15 ? var_3 : var_9))) ? (min(((var_7 ? var_16 : var_17)), ((min(var_18, var_9))))) : (1921896362 / 7504698478797110549)));
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_2] = min(((var_14 ? var_16 : var_10)), var_0);
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_6] = ((var_18 ? var_6 : var_15));
                        var_25 = (((1 ? -3 : -33)) * (var_1 && var_9));
                    }

                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_0 - 1] [i_7] [i_0 - 1] [i_0] = (17789917339578307220 != -2235923292100357507);
                        arr_26 [i_0] [i_0] [i_0 + 1] [i_0] = ((((min(var_9, var_9))) ? (~var_14) : ((var_14 ? var_3 : var_14))));
                        arr_27 [i_2] = ((var_19 ? (var_11 ^ var_7) : -var_8));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_26 = (min(32, 2147483647));
                        var_27 = max(((min(var_4, var_17))), ((var_5 ? var_13 : var_13)));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_28 = (!4265748522);
                        arr_32 [i_0] [i_2] [17] [12] [i_0] = ((var_7 & ((((((var_6 ? var_0 : var_18))) ? var_13 : (max(var_14, var_3)))))));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_29 = var_13;

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_30 = (((!var_14) && (((var_4 ? var_18 : var_15)))));
                            arr_39 [i_0] [i_0] = (min(-557216707, 5087225628961612392));
                        }

                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_1] [i_2] [i_10] [i_12] [i_1] |= (~((var_1 ? var_5 : var_16)));
                            var_31 = (((!98) != 1));
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            var_32 = var_9;
                            arr_46 [i_10] [i_1 - 1] [i_2] [i_13] [i_13] [i_13] = var_2;
                        }
                        var_33 += ((((((((var_7 ? var_7 : var_8))) ? var_1 : (min(var_1, var_15))))) ? var_8 : ((var_19 ? var_13 : var_7))));
                    }
                }
            }
        }
    }
    var_34 = var_17;
    #pragma endscop
}
