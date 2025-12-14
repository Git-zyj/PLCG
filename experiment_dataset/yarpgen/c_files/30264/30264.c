/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = (!0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (max(18446744073709551600, 19));
                                var_14 = (max(((((max((arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]), 18446744073709551615))) ? ((var_3 ? var_4 : 18446744073709551614)) : var_0)), ((((((18446744073709551611 | (arr_2 [i_0])))) ? (arr_0 [i_1 + 3]) : (((max(var_9, var_11)))))))));
                            }
                        }
                    }
                    var_15 = var_4;
                }
            }
        }
    }
    var_16 ^= (var_8 != (min(18446744073709551610, var_3)));
    #pragma endscop
}
