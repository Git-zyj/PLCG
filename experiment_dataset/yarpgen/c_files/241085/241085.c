/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = 65535;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (~-1624611919)));
                                var_19 = (min(((1 ? 22 : 18446744073709551615)), var_5));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-127 - 1) > 17)));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_20 -= var_3;
                                arr_23 [i_0] [i_1] [i_1] [i_1] &= (((((arr_3 [i_6]) * (arr_14 [i_0] [i_1] [i_5] [i_6] [i_7]))) & 126));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_30 [1] [i_1] [i_1] [1] = var_4;
                                arr_31 [i_0] [i_1] = ((1 ? (var_4 >= 1) : ((((arr_25 [i_0] [12]) == 18446744073709551615)))));
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    arr_35 [i_0] [i_1] [i_0] [i_0] &= ((+(((var_5 || var_10) % 1794518067))));
                    var_21 ^= (-127 - 1);
                }
                var_22 *= (1 - 65518);
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_23 -= (((((arr_11 [i_1] [i_12] [i_1] [i_12] [i_12 - 2] [i_12]) ? 81 : (arr_11 [i_11] [i_11] [i_11] [18] [i_12 + 1] [i_12])))) * (min(((min(31, 9))), 8954038149933400682)));
                                var_24 = ((((36 - (arr_13 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]))) != 15));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 68719476735;
    var_26 = (min(var_26, var_0));
    var_27 = (((max((~1), var_3)) % ((((var_2 > ((65518 ? 1 : var_16))))))));
    #pragma endscop
}
