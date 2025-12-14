/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((218 ? 1 : 8192));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = var_15;
                            var_18 = (max(var_18, (((((var_3 > ((var_15 ? var_10 : -32219)))) ? ((((0 >= (arr_8 [i_0] [12] [i_2] [i_3] [i_3]))))) : ((((((arr_6 [i_0] [i_0] [i_0]) + var_2))) ? var_2 : var_7)))))));
                            var_19 = var_4;
                            arr_11 [i_3] [i_3 - 1] [9] [1] [7] [i_3] = (((0 || 106) <= ((((arr_10 [i_0]) && (arr_0 [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 = (((arr_6 [i_0] [i_1 - 2] [i_5]) + (arr_10 [10])));
                            var_21 = 3;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_22 = (((arr_17 [i_0]) ? ((((arr_15 [i_1 + 1] [12] [3] [9] [i_1 - 1] [i_6]) != (((var_11 == (arr_18 [8] [i_1] [i_6]))))))) : ((min((var_0 < 16933027150152558588), (arr_8 [9] [10] [9] [i_0] [i_1 - 1]))))));
                    var_23 ^= var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_24 *= (!var_11);
                                var_25 = (53790 & -269547225);
                            }
                        }
                    }
                    var_26 ^= (((arr_6 [i_1] [i_1] [i_0]) % (((-(0 <= 18446744073709551615))))));
                }
                var_27 *= 1513716923556993027;

                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    var_28 = (arr_6 [0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_29 *= var_13;
                                var_30 = (((((arr_26 [i_11]) ? var_15 : ((var_9 % (arr_20 [4] [12] [i_10] [7]))))) >= ((((arr_19 [i_1 + 3] [i_9 + 1] [i_11] [i_11 + 1]) <= (((((arr_13 [i_0]) != (arr_7 [0]))))))))));
                                var_31 += 90;
                                var_32 -= (((-248 + 2147483647) >> (-5717 + 5730)));
                                var_33 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = ((((((var_0 ? 16933027150152558584 : var_2)))) ? -1 : -9888));
    var_35 = var_2;
    var_36 += var_8;
    #pragma endscop
}
