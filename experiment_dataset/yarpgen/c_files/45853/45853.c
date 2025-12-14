/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [3] [2] [1] [i_2] [i_0] = 246194623;
                                arr_16 [i_0] [i_0] = (((((91 ? 1849296911914561032 : 1260892512))) ? -var_13 : (((var_13 + 2147483647) << (((arr_3 [i_0] [i_1]) - 8096230403694422258))))));
                            }
                        }
                    }
                    var_15 += ((!(((-(var_9 % var_7))))));
                    var_16 += ((arr_6 [i_2] [i_1]) ? ((187 ? 2486993528 : 3034074804)) : (((182 - (arr_6 [i_2] [i_0])))));
                    arr_17 [i_0] [i_1] = (min(((163 ? 100 : -5114721026516426365)), (min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_21 [i_1] &= -1849296911914561032;
                    var_17 = 1;
                    var_18 -= (((arr_19 [i_5 - 1] [i_5] [1] [i_5]) - var_10));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [1] = (((min((arr_22 [i_0] [i_1] [i_6 + 1]), (arr_22 [i_0] [i_1] [i_6 + 4]))) >> (((~var_8) + 21893))));
                    arr_25 [i_0] [8] [i_6] = (min(((((arr_13 [i_0] [2] [i_6] [10] [i_6 + 3] [i_6 + 1] [i_6]) ? (arr_13 [22] [i_1] [3] [i_1] [i_0] [i_6 + 4] [22]) : (arr_13 [i_0] [i_1] [i_6] [7] [7] [i_6 - 1] [i_6])))), (min((arr_10 [i_0] [i_6 + 4] [i_6 + 3]), (arr_13 [1] [i_1] [i_6 - 1] [i_6] [22] [i_6 - 1] [i_1])))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    var_19 |= (((arr_9 [0] [i_7 - 2] [19] [i_0]) && (arr_9 [i_0] [i_7 - 2] [13] [i_7])));
                    var_20 = ((((((arr_7 [16] [i_1] [i_7] [i_1]) % var_4))) ? (arr_6 [i_7 - 1] [i_7 - 2]) : (arr_26 [i_7 + 1] [i_7 + 1] [i_7 - 1] [19])));
                }
            }
        }
    }
    var_21 = (min(var_21, ((var_4 ? ((~(-5114721026516426355 != var_12))) : (max(var_4, ((var_11 ? var_1 : var_6))))))));
    var_22 = (min(var_22, (((~(((var_12 && var_4) ? (min(var_12, var_7)) : (((var_9 ? var_8 : var_2))))))))));
    #pragma endscop
}
