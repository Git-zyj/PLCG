/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 = (-1 == var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = var_4;
                                var_13 = (arr_6 [i_0] [i_2] [i_3]);
                                var_14 |= (1820223987 / 26416);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_15 [2] [10] [i_1] = ((((var_3 ? 291285871 : 37402)) < (0 <= 6144)));
                    arr_16 [i_0] [i_1] [i_1] = var_2;
                    arr_17 [i_1] = ((var_4 ? (arr_2 [i_1] [i_5] [i_5]) : var_9));
                    var_15 = var_7;
                    var_16 = (min(var_16, (arr_7 [i_0] [i_1] [i_5] [i_5])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 = (((arr_14 [i_1]) ? -1 : 0));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [2] [i_1] [2] [5] = (-(arr_9 [2] [16] [9] [i_0] [i_7 + 1] [i_7 + 2]));
                                var_18 += ((var_6 ? var_9 : (arr_6 [0] [i_0] [i_7 - 1])));
                            }
                        }
                    }

                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_19 = (min(var_19, ((((arr_19 [i_0] [i_1] [4] [i_9 + 1]) < 648052886)))));
                        var_20 = (arr_5 [i_9 + 3] [i_1] [i_9 + 3]);
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_29 [i_10] [i_1] [7] = (-291285851 || 218);
                        var_21 |= (((arr_1 [i_0] [i_0]) && var_1));
                        var_22 *= (-32767 - 1);
                        var_23 = (min(var_23, (((14059875233071307523 ? (arr_19 [i_0] [i_1] [i_6] [i_10]) : var_3)))));
                    }
                }
                arr_30 [i_1] [i_1] = (arr_1 [14] [0]);
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_24 -= (((((-(arr_37 [i_0] [i_1] [10] [i_12 - 1] [i_12])))) ? var_8 : (0 && 291285863)));
                                var_25 += 11047;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 55637573;
    var_27 = (min(var_27, ((((-1 + 9223372036854775807) >> (-11 + 27))))));
    #pragma endscop
}
