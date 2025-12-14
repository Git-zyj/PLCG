/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = 1716194881;
                            var_17 = 1;
                            var_18 = ((var_12 << (((var_4 != (arr_2 [i_0 - 1] [i_1]))))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = (((((16 + (arr_16 [i_5 - 3] [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5 - 2])))) ? (((((-391300651 + var_3) <= var_4)))) : 1449269666));
                                arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = (((arr_13 [i_6] [i_6] [i_5 - 2] [17] [i_5 - 1] [i_0 - 1]) | (arr_13 [i_6] [i_6] [i_6] [i_5] [i_1] [i_0 + 1])));
                            }
                        }
                    }
                    arr_19 [i_0 + 1] [i_0 + 1] [2] [i_4] &= (((arr_7 [i_0 + 1] [i_0] [i_0 + 1] [16] [i_4]) * -2051395237));
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_20 = (max((max((~-1), var_3)), ((2051395233 & (arr_4 [i_0 - 1] [i_0])))));
                    var_21 = (max(var_21, -10067));
                }
            }
        }
    }
    var_22 = (min(var_22, ((min((min((2051395221 & var_6), (((200 ? var_4 : var_4))))), (((((var_3 ? 391300657 : var_9)) << (var_10 != var_0)))))))));
    #pragma endscop
}
