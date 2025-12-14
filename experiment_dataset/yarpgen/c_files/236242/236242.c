/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = -var_7;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [19] [i_1] [i_2] [i_0] = (((-2147483647 - 1) ? (arr_5 [i_1] [i_0] [i_3 - 1]) : ((((-2147483647 - 1) ? (arr_6 [i_0] [i_3 + 1] [i_2]) : (arr_6 [i_3] [i_3 + 1] [i_2]))))));
                        var_21 -= 0;
                        var_22 = (max(var_22, ((((var_15 & (arr_1 [i_1 - 2])))))));

                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((-32763 < (arr_13 [i_0] [i_0] [18] [i_4])));
                            var_23 -= (2 ? var_0 : ((0 ? 9 : (-127 - 1))));
                            var_24 = (((-127 - 1) ? 0 : (-2147483647 - 1)));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_25 |= (((max((arr_7 [i_5] [i_5]), (arr_7 [i_2] [i_2]))) * 0));
                            arr_18 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((((((arr_1 [i_3 - 1]) ? (arr_1 [i_3 + 1]) : (-32767 - 1)))) ^ (((arr_1 [i_3 - 1]) + (arr_12 [i_0] [i_3 - 1] [i_3 + 1])))));
                            arr_19 [i_0] [i_0] = max((-127 - 1), 0);
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = (max(var_26, (((4294967281 ? (((arr_0 [6] [i_6]) & var_4)) : (arr_4 [20] [i_6] [i_6]))))));
        var_27 -= (((arr_4 [12] [i_6] [12]) ? 32763 : (max((max(0, 0)), var_18))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] [i_7] |= 32764;
        arr_27 [i_7] = (-127 - 1);
        var_28 = (max(var_28, (arr_25 [i_7] [i_7])));
        var_29 *= 4;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = ((((5 ? 0 : 122))) ? (0 % 4294967284) : (arr_29 [i_8]));

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_34 [i_8] [i_8] = (arr_2 [i_9]);
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_30 = (((arr_2 [i_9]) ? ((((arr_25 [i_9] [i_9]) ? (arr_1 [i_11]) : (arr_32 [i_10])))) : (65510 & var_6)));
                            var_31 |= 106;
                        }
                    }
                }
            }
            arr_43 [i_8] [i_8] [i_9] = (((-2147483647 - 1) % (((arr_37 [i_8]) + var_4))));
        }
    }
    var_32 = (~var_8);
    #pragma endscop
}
