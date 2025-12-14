/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((-(((var_16 <= (arr_0 [0] [i_1 - 1]))))));
                arr_4 [i_0] = (((((2147483647 ? 7530496174298669890 : 4088073885316778315))) ? var_12 : var_1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_19 = ((!((((max(38310, var_4)) << (var_13 - 29719))))));
                var_20 -= ((!((max(var_8, -1)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_21 -= 9223372036854775807;
                            var_22 &= (33501 <= 33501);
                            var_23 = (max(var_23, (!10916247899410881735)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_24 = (((min(3, var_6)) >= (1 * -3352)));
                                arr_28 [i_6] [i_6] [i_6] [5] [i_10] = ((-(arr_8 [i_8])));
                                var_25 -= (~0);
                            }
                        }
                    }
                }
                var_26 = (max((var_10 ^ var_14), 33492));
                var_27 = var_16;
                var_28 *= (1883193098 / -1800814268);
            }
        }
    }
    #pragma endscop
}
