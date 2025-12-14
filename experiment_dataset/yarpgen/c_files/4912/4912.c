/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((4688629165493769318 | (((((min(1120496225, (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min((arr_0 [i_0]), 4380866641920)))))));
        var_15 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_7))) ? ((((arr_1 [i_0]) ? 1 : -var_6))) : ((-(arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = -244480575;
            var_16 = (max(var_16, ((((arr_4 [i_1]) ? 1 : (arr_4 [i_0]))))));
            arr_6 [i_0] [i_1] = -var_7;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_0] [i_0] &= (((arr_3 [i_2]) / 4688629165493769339));
            arr_10 [i_0] = (((((arr_7 [i_0] [i_0] [i_0]) ? var_10 : var_11))) % var_12);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_4] = (arr_4 [i_2]);
                        arr_16 [i_0] [i_0] [i_0] [i_4] = var_6;
                        arr_17 [i_4] [i_3] [i_4] = (arr_0 [i_3]);
                    }
                }
            }
            arr_18 [i_0] [i_0] |= ((((((arr_3 [i_2]) + (arr_14 [i_2] [i_2] [i_0] [i_0])))) ? (arr_0 [i_2]) : (arr_8 [i_2] [i_0] [i_0])));
            var_17 = ((((-(arr_12 [i_0] [i_0] [i_0])))) >= (arr_1 [i_0]));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            var_18 += -var_6;

            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                var_19 = (var_11 != 0);
                arr_24 [i_6] [i_0] [i_0] &= ((1099511103488 ? (arr_20 [i_5] [i_0] [i_5 - 1]) : (arr_20 [i_6] [i_0] [i_5 - 1])));
                arr_25 [i_5] [i_5] [i_6] = ((((var_3 ? 1 : 13758114908215782323)) != var_12));
                var_20 *= -var_1;
            }
            arr_26 [i_5] = 6630;
            arr_27 [i_5] [i_0] [i_0] = ((-(var_1 * var_0)));
        }
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_21 -= (((max(((min(var_2, (arr_3 [22])))), (28126 % var_0))) >= (((-(var_1 != var_8))))));
        var_22 = (max(-2090054899, ((-var_7 + ((182 ? 7046546205253519150 : (arr_8 [i_7] [i_7] [i_7])))))));
        var_23 *= ((((-42471 ? var_11 : (((arr_4 [i_7]) ? var_7 : (arr_7 [i_7] [i_7] [i_7])))))) ? (arr_8 [i_7] [i_7] [i_7]) : -2859658662);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_24 = (((arr_4 [i_8]) ? (arr_21 [i_8] [i_8] [1]) : (arr_28 [i_8 + 3] [i_8])));
        arr_33 [i_8] = (((((var_9 ? (arr_22 [i_8] [i_8] [16]) : (arr_21 [i_8] [i_8] [12])))) ? (arr_19 [i_8 - 1]) : (arr_4 [i_8 + 1])));
    }
    var_25 = 0;
    #pragma endscop
}
