/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 65535));
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((var_0 << (((min(var_1, var_10)) + 135610072)))))));
                    var_14 -= (max((((2147483647 > (arr_8 [i_1] [i_1] [i_1] [i_1])))), ((var_8 ? 65535 : (arr_8 [i_0] [i_0] [i_1] [i_1])))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((2147483643 ? 2 : var_7));
                            var_15 = (max(var_15, (-2147483647 & 3)));
                            var_16 -= ((60 + (-2147483647 - 1)));
                            var_17 = (max(var_17, var_2));
                            var_18 = var_0;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, (!-2147483647)));
                            var_20 ^= (((arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? -2147483621 : 14));
                            var_21 = (min(var_21, ((((!var_7) ? ((var_1 ? var_4 : var_1)) : (var_2 != 2147483635))))));
                        }
                        var_22 -= ((-(arr_4 [i_1])));
                    }
                    var_23 = (((((1711039681 >= (((-2147483647 - 1) ? 65535 : 14))))) > 10978361896679089778));
                }
            }
        }
    }
    #pragma endscop
}
