/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_0 ? var_10 : var_3)))) ? (((var_5 / ((var_13 ? 1 : var_11))))) : (min((var_3 == var_12), var_7))));
    var_15 -= (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 += (((((((min(32752, var_7))) ? (max(var_3, var_9)) : var_11))) ? ((max(var_11, (arr_1 [i_0])))) : ((1 ? 1 : (max(-767588206, -769580256731080876))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 ^= 65535;
                    var_18 = (((((arr_5 [i_0] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1] [i_2] [i_2]) : (arr_4 [i_0] [i_0] [i_2] [i_2]))) << ((((1195682106676714380 ? 2147483647 : 1)) - 2147483630))));
                    var_19 = (arr_4 [i_2] [i_2] [i_2] [i_2]);
                }
                arr_7 [i_1] [i_0] [i_0] = ((((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))) >> (((~1) + 30))));

                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_20 ^= (arr_8 [i_3 - 1] [i_1] [0]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_21 = (((((-(min(var_11, var_5))))) ? (((((var_4 ? 1 : (arr_6 [i_0] [i_0] [i_3] [i_4 + 2])))) ? var_5 : -var_3)) : ((var_6 + (((arr_16 [i_4] [i_4] [i_3] [i_1 - 1] [i_0]) ? var_9 : var_2))))));
                                var_22 = ((((!(arr_3 [i_3 - 1] [i_1 + 1]))) && var_7));
                            }
                        }
                    }
                    var_23 = (max(((((((((arr_9 [i_0] [i_1 - 1]) + 2147483647)) << (((((arr_15 [i_0] [i_1] [i_3] [i_0]) + 22232)) - 28))))) ? (arr_12 [i_0] [1] [i_3]) : var_0)), ((min(((var_6 & (arr_13 [i_0] [i_1] [i_1] [9]))), (17 != var_2))))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_20 [11] [i_0] = var_5;
                    var_24 = ((var_8 ? (((1 < (arr_13 [i_0] [i_0] [4] [i_0])))) : (arr_18 [i_6] [i_6] [i_6 + 1] [i_1 + 1])));
                    arr_21 [i_0] [i_1 + 1] [i_6 + 1] [4] &= (((var_4 ? var_11 : var_2)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_25 = -2147483633;
                                arr_26 [i_0] = (arr_8 [i_0] [i_1] [i_0]);
                                var_26 -= (((arr_24 [i_1] [i_6 + 1] [20] [i_8 - 1]) & (arr_10 [i_1 - 1] [i_1] [i_7] [i_8])));
                                var_27 = (((arr_3 [i_6 - 1] [i_1 - 1]) ? (arr_3 [i_6 + 1] [i_1 + 1]) : var_3));
                            }
                        }
                    }
                    var_28 = ((((!(arr_13 [i_0] [i_1 + 1] [i_1] [i_0]))) ? (arr_9 [2] [2]) : (arr_6 [i_0] [i_1] [i_6 - 1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
