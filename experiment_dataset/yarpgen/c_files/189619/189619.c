/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [i_0] [14] [7] [19] = (arr_10 [i_0] [i_0] [i_2] [i_3] [i_3]);

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_17 = var_9;
                            var_18 = 422957357;
                            arr_17 [i_0] [17] [i_2] [i_2] [i_2] = (3872009939 % 75);
                            var_19 = (((((arr_12 [i_1] [i_1] [i_0] [i_1]) * 262841819))) ? (((var_5 + 2147483647) >> (arr_12 [i_0] [i_0] [i_0] [18]))) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_20 [i_3] [i_0] [10] [i_2] [i_3] [i_3] |= (arr_12 [i_0] [i_1 + 2] [i_5] [i_3]);
                            var_20 = (min(var_20, (((((max((arr_16 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2]), var_12))) ? (arr_16 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2]) : ((((arr_16 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) / (arr_16 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 1] [20] [i_1 - 2])))))))));
                            arr_21 [i_0] [i_0] [i_0] [7] [7] [i_3] [i_0] = max((262841812 > var_12), ((-var_10 - (((arr_6 [i_0] [i_1] [i_0]) / 293963125)))));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = var_12;
                            var_21 = var_5;
                        }
                        arr_27 [i_0] [i_1] = ((arr_2 [9] [i_1 - 1]) * 7202);
                        var_22 ^= (max(262841830, (min((arr_24 [i_1 - 2]), 262841822))));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_23 = (max(65524, (arr_9 [i_2] [i_2] [i_2] [i_2])));
                        arr_30 [i_0] [1] [i_2] [i_0] = 1810704201;
                    }
                    var_24 = (min(var_24, (((-(arr_19 [16] [16] [i_1] [16] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_25 = (((((-(var_11 % 12)))) | (((arr_12 [i_1] [i_1 + 2] [i_0] [i_1]) ? 8 : (arr_12 [i_1] [i_1] [i_0] [i_1])))));
                                var_26 = ((!(arr_3 [i_1 + 1])));
                                var_27 |= arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1];
                                arr_37 [i_9] [i_0] [i_0] [i_0] = (-((-(arr_34 [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (((((var_1 > (max(39902, 293963140))))) >= -1689));
    var_29 = var_2;
    #pragma endscop
}
