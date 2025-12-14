/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_11 = (var_4 && var_10);
        arr_2 [i_0] = (!7740722136871355146);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (max((((max(var_2, var_0)) / ((((arr_3 [i_1]) ? (arr_1 [i_0 + 2] [i_1]) : (arr_4 [i_0] [i_0])))))), (arr_4 [i_0] [i_0 + 1])));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_13 = 27059;
                arr_7 [i_2] [i_1] [i_2] = ((((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 2])))) ? ((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2])))) : (arr_3 [i_0 - 1])));
                arr_8 [i_0 + 1] [i_1] [9] [9] = ((arr_5 [i_0 + 2] [i_0]) || ((((((var_1 / (arr_5 [i_0 - 1] [i_1])))) ? (arr_5 [i_0 + 1] [i_0 + 1]) : (max(var_4, var_0))))));
            }
            arr_9 [i_0] [i_1] [i_1] = ((~(~7740722136871355120)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_14 = (39733 || 4862528887024137452);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_15 = (((arr_4 [i_0] [i_0 + 1]) ? (arr_13 [i_0] [i_0 - 1] [i_4] [i_4]) : (arr_4 [i_0] [i_0 - 1])));
                arr_14 [i_0] [i_3] [i_4] [i_4] = min(var_0, (((arr_4 [i_0 - 2] [i_0 + 1]) ? (arr_4 [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0 + 2]))));
                arr_15 [3] [i_3] [i_0] [i_0] = ((((max(var_0, var_1))) ? var_8 : (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                var_16 = ((!(-60630507 / var_4)));
            }
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                arr_18 [i_0] = ((!((max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 2] [i_0 - 2]))))));
                var_17 = (((arr_0 [i_5 + 1] [1]) || var_6));
                var_18 = (max(((~(arr_0 [i_0 - 1] [i_0 - 1]))), 5687380312409545021));
            }
            var_19 = (~-60630509);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_20 = (((((-(arr_0 [i_0 - 1] [i_0 + 2])))) ? (arr_0 [i_0] [i_6]) : (((((((arr_5 [i_0 - 1] [i_6]) ? -99 : -60630496))) ? ((~(arr_6 [i_0] [i_0] [i_6]))) : var_9)))));
            var_21 = ((-(arr_5 [i_0 - 1] [i_6])));
            arr_22 [i_0 + 2] = (-(var_5 / var_5));
            arr_23 [4] = (max(-1504645216, 10706021936838196469));
            var_22 = (~11633);
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_23 = (min(var_23, var_10));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_24 -= (max(11651, ((max(var_10, (arr_25 [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [2] [i_10] = (min(((((arr_25 [1]) / var_9))), (max(-var_5, -var_6))));
                                arr_40 [i_7] [i_10] = (((min((!var_5), (arr_24 [i_7]))) >> (((max(var_0, (arr_24 [i_7]))) - 14771775196779359236))));
                            }
                        }
                    }
                    var_25 += (((max(var_8, (arr_31 [i_7] [i_9]))) >> (var_2 - 17098172601401513979)));
                    arr_41 [i_7] [i_7] [i_7] [i_7] = ((!(!var_10)));
                }
            }
        }
    }
    var_26 = var_2;
    var_27 = var_3;
    #pragma endscop
}
