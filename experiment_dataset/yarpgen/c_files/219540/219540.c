/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 -= var_0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((((arr_7 [i_0 + 1]) % (arr_7 [i_0 - 1])))) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 + 1])))));
                                var_13 ^= ((-((+((65535 ? (arr_9 [i_0 + 2] [i_1] [i_2] [i_1] [i_4] [21]) : (arr_1 [i_0 + 2] [i_2])))))));
                                arr_12 [15] [i_1] [i_1] [i_1] [16] [i_4] [11] = (((((arr_7 [i_0 - 2]) ? (arr_7 [i_0 + 1]) : (arr_7 [i_0 - 1]))) * (((arr_7 [i_0 + 1]) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 + 2])))));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, 2551703874));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((min(((1743263430 ? -1 : 1998024889)), (1 || 8191))) % (var_0 ^ 41378)))));
                                var_16 ^= 1743263421;
                            }
                        }
                    }
                }
                var_17 = ((1743263421 ? (arr_20 [i_5] [i_6]) : var_7));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_35 [i_10] [i_11] [i_12] |= (((0 * (arr_30 [i_10] [1] [1]))));
                    arr_36 [i_10] &= (((((((var_4 ? (arr_5 [4] [i_11 + 1] [i_11] [1]) : (arr_27 [i_10]))) - 2))) ? var_2 : (((((((arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) || (arr_8 [i_10] [3] [6] [i_11] [i_12] [i_12])))) >= ((min(-23517, 1))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_18 -= (arr_39 [i_11] [i_13]);
                                var_19 ^= ((~(arr_1 [i_11 + 3] [i_11 + 3])));
                                var_20 = var_1;
                                arr_42 [i_10] [i_11] [i_12] [19] [i_13] [i_11] = (2551703883 || 24817);
                                var_21 += (max((arr_8 [i_11 + 1] [i_11 + 2] [i_11] [i_11] [i_11] [5]), (((arr_8 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 2]) % (arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2] [i_11] [i_11])))));
                            }
                        }
                    }
                    var_22 -= (((min((var_2 > 16), (((arr_2 [i_10]) ? 4095 : (arr_41 [i_10] [i_10] [i_10] [1] [i_12] [i_10] [i_10])))))) ? (!18446744073709551600) : ((((arr_34 [i_10] [i_11 - 1]) || (arr_34 [i_10] [i_11 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
