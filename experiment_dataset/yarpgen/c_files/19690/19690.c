/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_1 - 2]);

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, ((max(9029778359909032185, -1)))));
                                arr_13 [1] [i_1] [i_2 - 2] [i_0] [i_4] = (((887360175 & -1) & (arr_2 [i_1 - 4])));
                                arr_14 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = 0;
                                var_13 -= ((!((((((~1) + 2147483647)) << (1 - 1))))));
                            }
                        }
                    }
                    var_14 = (arr_7 [i_1 + 2]);
                    var_15 = ((((((max((arr_2 [i_0 - 2]), (arr_8 [i_0] [i_1] [i_0])))) - (arr_11 [i_0] [i_2] [i_2 - 1] [i_2])))) ? (((max(1, 0)) - 213)) : (max((((8159280333259109151 ? 0 : (arr_1 [i_0 + 1] [1])))), ((1 + (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 2]))))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [4] [i_0] [i_0] = (((arr_0 [i_1 - 2]) && 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_16 *= (max(4064, (((-59 & -4079) & (max(0, (arr_9 [i_0] [i_1] [i_5] [i_7])))))));
                                var_17 = ((1 ? (((max(0, 255)) * (!1))) : -295321843169513188));
                            }
                        }
                    }
                    var_18 = (((((1 << (arr_0 [i_0 + 1])))) ? (((((((arr_18 [i_1] [i_5]) / 1))) && ((((arr_1 [i_0] [i_5]) ? (arr_4 [i_1] [i_0]) : -1642995)))))) : (1 ^ 1)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((-1248668314 ? (arr_6 [0] [0]) : ((18446744073709551609 ? 1 : 1))))));
                                var_20 = ((51 ? 0 : 227));
                            }
                        }
                    }
                    arr_35 [6] [6] |= 21;
                    var_21 += (((arr_30 [i_1 - 2] [i_0 - 2] [i_0 - 2]) | (arr_30 [i_1 - 2] [i_0 - 2] [i_0 - 2])));
                    var_22 = (arr_12 [3] [i_8] [i_1] [i_1] [i_0] [i_0 - 3]);
                }
            }
        }
    }
    var_23 = ((((var_5 + var_4) && var_4)));
    var_24 = var_8;
    #pragma endscop
}
