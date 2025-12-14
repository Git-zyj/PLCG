/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = (((~465539693222882047) ? 465539693222882047 : (!70360154243072)));
                                var_17 ^= (((arr_5 [0] [13]) == (((arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]) & 17981204380486669568))));
                                var_18 = ((((((~(arr_11 [i_0] [i_2 + 1] [i_2] [i_0]))) + 2147483647)) << ((((((~(arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_1]))) + 41163)) - 19))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = (max((!40232), ((!((min((arr_7 [i_2]), (arr_7 [i_2 + 1]))))))));
                            }
                        }
                    }
                }
                arr_17 [i_1] = arr_14 [i_0] [i_0] [i_1] [i_1] [i_1];
                var_19 -= ((-1255136117 ^ (arr_10 [i_0] [i_0])));

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_20 [i_1] [i_1] = (arr_12 [i_0] [i_1] [i_1] [i_5]);
                    var_20 = ((((-385254472 ? (arr_11 [i_5] [i_5] [i_5 + 1] [i_5 + 1]) : -36)) * ((((arr_11 [i_5] [i_5] [i_5 + 1] [i_5 - 2]) < (arr_11 [2] [2] [i_5] [i_5 - 2]))))));

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_21 = (arr_6 [i_0] [i_1] [10]);
                        var_22 &= ((-(((arr_18 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_5 + 1]) ? 1328 : ((((arr_21 [i_1]) == 1255136117)))))));
                        arr_25 [i_0] [i_1] [i_0] [i_6] = ((!((((((min((arr_8 [i_1] [i_1]), (arr_2 [i_0]))) + 9223372036854775807)) >> (((arr_10 [i_6 - 1] [i_6 + 1]) - 186)))))));
                        var_23 = (!124);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, -3935890504899508134));
                                arr_33 [i_0] [i_1] [i_5] [i_1] [i_8] = ((!((min(15, ((10643664806485836066 ? 105 : 18446744073709551615)))))));
                                var_25 = (-(arr_7 [i_7]));
                            }
                        }
                    }
                    arr_34 [8] [i_1] = ((-(((!(arr_21 [i_5 - 2]))))));
                }
                var_26 = (arr_11 [i_0] [i_1] [i_1] [i_0]);
            }
        }
    }

    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_27 += ((-(max((((arr_6 [i_9] [8] [i_9]) ? -5 : (arr_8 [18] [16]))), 1))));
        var_28 = arr_0 [i_9];
    }
    #pragma endscop
}
