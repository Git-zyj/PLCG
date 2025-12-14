/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((min((arr_2 [i_0]), var_7))) - (((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
                var_12 &= ((var_3 ? (((((var_0 ? (arr_0 [i_1] [i_1]) : (arr_1 [5])))) ? (arr_7 [15] [i_1]) : var_7)) : (min(((((arr_4 [i_0] [i_1]) ? var_1 : var_0))), (arr_7 [i_1] [12])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 *= ((!((((~var_7) ? var_9 : -var_0)))));
                            var_14 = min(var_9, (min((max((arr_7 [i_2] [i_3]), var_7)), (arr_5 [i_0]))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = var_8;
            }
        }
    }
    var_15 = var_2;

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_18 [4] &= (min((((arr_9 [i_4] [i_4] [i_4] [i_4]) ? (arr_9 [9] [0] [i_4] [i_4]) : var_1)), ((((var_2 % (arr_5 [15])))))));

        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_4] [i_4] = var_4;
            arr_22 [11] [i_4] = ((-(((min(2157058249, var_3))))));
            var_16 = (((-var_4 ? (var_6 - var_5) : (arr_11 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 2]))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_7] [1] = ((+(((!var_6) ? -var_6 : 107))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_33 [i_4] = (((((-(((arr_17 [i_4] [i_5]) ? -562661811107900981 : (arr_11 [i_8] [i_7] [i_6] [i_5])))))) ? var_3 : (arr_4 [i_7 - 1] [17])));
                            arr_34 [i_4] [1] [i_4] [i_4] = ((((((-(arr_2 [i_4]))))) ? ((~(562661811107900980 ^ var_9))) : (arr_20 [i_4] [i_5] [5])));
                        }
                    }
                }
            }
            var_17 = (max(var_17, ((((arr_26 [i_4] [i_5 + 2]) ? var_9 : ((((max(var_10, (arr_30 [i_5] [i_4] [i_4] [i_4])))) ? var_0 : (!var_9))))))));
        }
        var_18 &= ((var_3 * ((((arr_6 [i_4]) >> (((arr_9 [i_4] [i_4] [i_4] [i_4]) - 23120)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_19 = arr_37 [i_4] [i_10];
                    var_20 = (min(var_20, (arr_25 [i_10] [i_10] [i_4] [12] [i_4])));
                    var_21 = (((arr_24 [i_4] [i_4] [i_10] [i_4]) <= ((((min(var_7, 232))) ? ((max(var_4, (arr_38 [i_4] [11])))) : (arr_16 [i_4] [i_9])))));
                }
            }
        }
    }
    var_22 &= ((((~((var_10 ? var_7 : 3405238929)))) & (var_1 & -var_7)));
    #pragma endscop
}
