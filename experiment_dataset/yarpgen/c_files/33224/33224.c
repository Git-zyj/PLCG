/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 5599578997050765267));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = -68;
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = (max(((((-127 < var_11) == var_9))), var_1));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_13 = arr_17 [i_2];
                            var_14 = -70;
                            var_15 += (arr_6 [10] [i_3] [i_2] [10]);
                            var_16 = var_0;
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_17 = (arr_19 [4]);
                            arr_21 [i_2] [i_2] [i_2] [i_1] [i_2] = max(-120, 76);
                            var_18 = (max(var_18, var_5));
                            var_19 = (9 % 1);
                        }
                        var_20 *= var_1;
                    }
                }
            }
        }
        var_21 += var_9;
        var_22 = ((97 | ((((97 ? 17 : 933730765578840318)) ^ (((var_4 ? 30 : -29534)))))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_24 [i_6] = (arr_23 [i_6]);

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_23 = ((-(arr_25 [i_6] [i_6])));
            arr_27 [i_6] [i_6] = (min(var_6, ((-231 % ((~(arr_22 [i_7] [i_6])))))));
            arr_28 [i_6] [i_7] [i_7] = (((var_11 && 136) ? ((((((max(25, 115))) || var_9)))) : ((max(var_11, var_3)))));
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_24 ^= (((((-(157 <= var_9)))) ? ((~((min((arr_5 [i_8] [i_9] [i_9]), 26))))) : ((~(min(-1898923113, 173))))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            {
                                arr_41 [i_11] [8] [8] [i_8] |= min(((~(arr_0 [i_11 - 2]))), 185);
                                var_25 ^= (min((((min(var_7, var_1)) & var_9)), (((~(~3948))))));
                                arr_42 [i_10] [i_10] [i_10] [i_11 + 1] [i_10] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
