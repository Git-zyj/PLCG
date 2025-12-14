/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_1;
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += (33554304 / -18446744073675997311);
                var_21 = 33554304;
                var_22 = (arr_3 [i_0 - 1] [i_0 - 1] [i_1]);
                var_23 = ((((arr_2 [i_0 - 1] [i_0]) & (min(var_11, var_6)))) >> (~18446744073709551603));

                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_24 = (((33554304 <= 18014398475927552) == (arr_5 [i_0] [i_2 - 2] [i_2 - 1])));
                    var_25 = (max((arr_1 [i_0]), 8465964100485759465));
                    var_26 = var_13;
                    var_27 = ((((((var_5 > (arr_7 [i_1] [i_1] [i_0] [i_0])))))) >= (((((arr_3 [1] [1] [i_2]) <= 9980779973223792131)) ? (8465964100485759484 == 18014398475927557) : (arr_2 [i_0 - 1] [i_1]))));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_28 = 1;
                                var_29 = (((17982728257179659291 != 1) >> 1));
                                var_30 &= arr_4 [i_3] [i_3];
                                var_31 = (max(var_31, (min((max((arr_7 [i_0] [i_1] [13] [i_5]), (1 || 18446744073675997308))), ((var_7 ? (max(18446744073709551615, 8465964100485759495)) : (18446744073709551615 <= 9980779973223792127)))))));
                            }
                        }
                    }
                    var_32 = ((~((28 ? (arr_14 [i_0] [i_0] [i_0] [i_1]) : 33554299))));
                }
            }
        }
    }
    #pragma endscop
}
