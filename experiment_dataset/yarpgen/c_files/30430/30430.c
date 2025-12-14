/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((-((~(arr_2 [13] [6] [0])))));
                                var_21 = (max(0, 1732895623));
                                var_22 ^= (max(0, 75));
                                var_23 -= ((~(arr_5 [1] [1])));
                            }
                        }
                    }
                }
                var_24 = ((+(((arr_1 [5]) * (max(0, var_17))))));

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_25 = (((!-0) < var_14));
                    var_26 = (1 + 75);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_20 [i_6] [i_6] = -0;
                        arr_21 [7] [i_6] = (-127 - 1);
                        arr_22 [3] [10] [12] [1] [i_6] [6] = -76;
                        arr_23 [1] [1] [4] [i_6] [1] = 0;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_27 = (min(var_27, (arr_15 [0] [3] [2])));
                        var_28 = (min(var_28, ((((149 + var_11) * (0 | var_18))))));
                        var_29 = var_15;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_29 [13] [3] [i_6] = (((arr_26 [4] [14] [10] [7] [14]) * -var_18));
                        var_30 += ((~(-2147483647 - 1)));
                        var_31 = var_10;
                        var_32 ^= ((~(187 / 69)));
                    }
                    var_33 = (((((arr_16 [1] [i_6] [i_6] [3]) + 2147483647)) << (!var_4)));
                    arr_30 [i_6] = (2147483647 - 255);
                    var_34 = ((0 != (((arr_14 [14] [1] [1]) & (arr_5 [1] [9])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_38 [i_6] [1] = (((var_2 & var_17) / (var_0 != 0)));
                                arr_39 [i_6] [8] [6] [4] [1] [1] [i_6] = (arr_2 [2] [3] [1]);
                            }
                        }
                    }
                }
                var_35 ^= ((~(max(var_5, (!18446744073709551615)))));
            }
        }
    }
    var_36 = (max(((((~var_6) != (-76 & var_6)))), ((~(-1409532366 | var_17)))));
    var_37 = 65535;
    #pragma endscop
}
