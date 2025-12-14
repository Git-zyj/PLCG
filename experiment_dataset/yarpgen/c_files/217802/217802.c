/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min((((1 ? var_2 : var_5))), var_19)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 += (((((-18327 ? 18446744073709551615 : 18446744073709551615))) ? ((var_17 ? 0 : (((max(1, var_9)))))) : ((((!((min(var_1, 18446744073709551614)))))))));
                            var_22 = var_1;
                        }
                    }
                }
                var_23 += (((2128 ? 1 : 1)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_24 = ((((max(18446744073709551608, var_16))) ? 1 : (min(var_18, var_12))));
                                arr_16 [i_0] [i_4] [1] [0] [i_0] &= (max(18446744073709551614, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
