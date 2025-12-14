/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (!261888);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_3));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((((+(((arr_8 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_2]) : -74)))) >> ((((1 ? 74 : (arr_3 [i_0]))) - 47))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((var_12 - (~32750)));
                                var_18 -= -16837;
                                var_19 += ((((min((min((arr_6 [i_0] [i_2] [i_4]), var_13)), ((-(arr_2 [i_0])))))) ? (arr_8 [i_1] [i_1]) : -2147483648));
                                var_20 = ((!(((2047 ? (arr_4 [i_4] [i_4]) : (arr_4 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_21 = 4018259310;
                    var_22 &= (arr_15 [i_5] [i_1]);
                }
                arr_18 [i_0] = (min(var_2, ((((min((arr_15 [i_1] [i_1]), 8746))) * (!12626935567544010823)))));
            }
        }
    }
    var_23 = (max((min(-var_1, var_7)), (((((var_5 ? var_6 : var_10))) ? (var_6 + var_3) : (max(2335810536, 87))))));
    #pragma endscop
}
