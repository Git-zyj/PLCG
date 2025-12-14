/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-15658);
    var_15 |= 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = -1;
                            arr_19 [i_0] [i_0] [i_0] [2] [i_0] [i_0] [i_0] = ((!(26706 != 250)));
                            arr_20 [i_0] [i_0] [i_0] [10] [i_0] [i_3] [i_0] = (((!(!65535))));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_0] [i_0] = ((~((((4095 | 1) >= (var_4 == var_3))))));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_25 [i_5] [i_0] [i_0] [i_0] [i_1] [i_0] = ((1 == (((1 < (~1))))));
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = ((~(1 + 1)));
                            arr_27 [i_0] [i_0] = (var_7 >> var_8);
                        }
                        arr_28 [i_0] = -13202;
                        arr_29 [i_0] [i_3] [i_3] [i_3] = (~0);
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [10] [i_2] = 1;
                        arr_33 [i_0] [0] [i_2] [i_6] = (205 < 1);

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_36 [i_0] [i_0] = (0 % 1);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                            arr_38 [i_0] [i_0] [i_0] = (((!17369050920395412575) > 1));
                        }
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_42 [i_8] [i_0] [i_0] [i_0] = (!1);
                        arr_43 [8] [i_1] [i_8] [8] [i_2] [i_2] = (-2147483647 - 1);
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        arr_47 [11] [i_0] [i_0] [i_0] = 36;
                        arr_48 [i_0] [i_2] [i_2] [i_9] [i_9] [0] |= var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_53 [i_11] [i_10] [i_0] [1] [i_0] [i_0] [i_0] = 1;
                                arr_54 [i_2] [i_11] [i_11] &= (!170);
                                arr_55 [i_0] [i_1] [1] [i_0] [i_0] [1] = var_10;
                                arr_56 [1] [3] [i_2] [i_10] [i_0] = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_62 [i_2] = (!1);
                                arr_63 [i_0] = (!-17039);
                                arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = (1 + 3315);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
