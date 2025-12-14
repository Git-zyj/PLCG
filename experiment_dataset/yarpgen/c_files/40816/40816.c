/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, (((((max(-7101689628752899202, var_10))) ? var_10 : var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 &= (((var_9 + var_2) ? (((57422363 >> (18446744073709551594 - 18446744073709551593)))) : (((arr_0 [i_2 + 3]) ? (arr_0 [i_2 - 2]) : var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = (arr_8 [i_0] [i_1] [i_1] [i_3] [3]);
                                var_13 = var_2;
                                var_14 -= var_3;
                            }
                        }
                    }
                    var_15 = (((25009 ? 1926082885 : -1839435935)));
                }
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
