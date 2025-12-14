/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max((--65535), (min(((-(arr_8 [1]))), ((((arr_9 [i_0] [i_1] [i_1] [i_2] [11] [i_4] [i_4]) <= (arr_0 [i_0] [17]))))))));
                                var_12 = (max(-10053, (arr_6 [i_3] [i_1] [i_1] [i_0])));
                                var_13 -= (max((((((max(var_5, (arr_4 [13] [i_4] [i_4])))) ? var_4 : ((max((arr_1 [i_1 + 2]), 65535)))))), (((arr_8 [i_1 - 2]) ? ((((var_3 >= (arr_6 [i_0] [i_1] [i_3] [1]))))) : (arr_8 [6])))));
                            }
                        }
                    }
                    var_14 = ((((min((min((arr_6 [i_2] [i_1] [i_1] [i_0]), -128832353267203408)), ((max((arr_4 [i_0] [i_1] [9]), 0)))))) ? (((min(-4667, 1)))) : (((arr_3 [i_1] [i_1 + 2]) ? (arr_8 [i_1 + 2]) : (arr_7 [i_1 + 3] [16] [i_2 - 1] [i_2] [i_2 + 1])))));
                    var_15 = -65535;
                }
            }
        }
    }
    var_16 = (min(var_16, (((-(((((-4667 ? var_9 : var_3))) ? var_3 : -4667)))))));
    var_17 |= (max(((((max(6028398621830004882, -4667))) ? var_3 : ((0 ? var_2 : var_5)))), (max(2147483616, 8))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_18 = (max(var_18, (((-28298 ? (-433744585 & -5389) : 4294967295)))));

                    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_19 &= (arr_15 [i_5] [20] [i_6] [i_5]);
                        var_20 = (min((((41484 && (-4675 || -714104160)))), ((min((arr_10 [i_5]), (arr_15 [i_5] [20] [i_7] [i_6]))))));
                        var_21 = (arr_15 [i_5] [0] [i_7] [i_6]);
                        var_22 = ((arr_13 [18] [i_6] [i_7]) ? ((((min((arr_12 [i_5] [i_6] [i_8]), (arr_10 [i_6])))) ? (arr_18 [i_5] [i_6] [i_5] [i_5] [i_5]) : ((max(-5389, (arr_17 [i_5] [1] [i_7])))))) : 1);
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        arr_22 [i_5] [0] [i_6] [i_5] |= (max((arr_21 [4] [4] [i_5] [i_7] [i_9]), ((((min((arr_18 [i_7] [i_7] [i_7] [3] [i_7]), -85))) ? 4294967295 : (((arr_11 [i_5] [i_5]) ? 28298 : var_1))))));
                        var_23 = -69;
                        var_24 -= -var_1;
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        arr_25 [i_6] = (arr_14 [i_6] [i_10 + 1] [i_10 - 2] [i_10 + 3]);
                        var_25 = (max(var_25, ((((((-(arr_13 [i_5] [i_10 - 3] [18])))) ? (((arr_20 [5] [i_7] [i_10 - 1]) & -1)) : (arr_12 [i_5] [1] [i_5]))))));
                    }
                    var_26 = (min(var_26, (arr_17 [i_5] [i_6] [14])));
                    var_27 -= (max((arr_23 [i_5] [i_6] [i_7] [22]), (((arr_21 [i_5] [i_6] [i_5] [i_7] [i_7]) ? (arr_24 [i_5] [i_5] [i_6] [i_7] [i_5]) : (arr_21 [i_5] [i_5] [i_5] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_28 = ((-(-127 - 1)));
                                arr_32 [i_5] [1] [i_6] = (arr_28 [i_6] [i_12] [i_7] [12] [24]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 += var_7;
    #pragma endscop
}
