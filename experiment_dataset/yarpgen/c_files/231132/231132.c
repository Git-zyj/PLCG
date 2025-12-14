/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 / (((-var_10 ? var_3 : var_11)))));
    var_16 ^= (var_11 ? var_9 : var_7);
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = var_9;
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((var_13 ? var_8 : var_13));
                        }
                        var_18 ^= (-(((var_8 + var_10) ? ((var_9 ? var_7 : var_5)) : (((var_14 ? var_9 : var_9))))));
                        arr_15 [i_3] [i_3] [i_3] [i_0] = var_2;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_19 = ((!((((((var_5 ? var_3 : var_9))) ? (var_1 % var_11) : var_8)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_5] = ((!(!var_1)));
                            var_20 = ((var_4 + var_9) + -var_4);
                            var_21 = (max(var_21, (var_7 % var_2)));
                            var_22 ^= (var_0 || var_11);
                            var_23 = ((~((var_2 >> (var_8 - 33476)))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = (((((var_11 - var_0) ? var_4 : -var_7))) ? (((var_3 ? var_6 : (~var_4)))) : ((var_1 ? var_10 : ((var_3 ? var_4 : var_1)))));
                            arr_26 [i_0] [i_1] [i_0] &= ((var_12 % (var_11 + var_5)));
                            arr_27 [i_7] [i_1] [i_0] [i_0] [i_1] [i_0] &= (((var_0 - var_1) * ((((var_6 | var_13) ? (var_12 & var_9) : (((var_6 ? var_4 : var_4))))))));
                            var_24 = (max(var_24, (((!(((var_0 ? var_13 : var_14))))))));
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_1] = var_4;
                    }
                    arr_29 [i_0] = ((-var_5 + (((var_4 ? var_9 : var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
