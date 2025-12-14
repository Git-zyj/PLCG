/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((min(((var_4 ? var_13 : var_15)), 119)), (((var_12 / -9054712474895197235) ? var_10 : ((717949481 ? 18446744073709551615 : 664041187)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = 0;
                    var_19 = ((585410715 ? 810258521 : 136));
                    arr_11 [i_2] = ((0 ? 16405 : ((3577017814 ? 0 : var_13))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_20 -= (max(1330508273, 1));
                                arr_25 [i_6] [i_4] [i_6] [i_4] [i_4] [i_3] = -1;
                            }
                        }
                    }
                    var_21 = (((max(0, 19))));
                    arr_26 [i_3] [i_4] [i_4] = (max(-12425, (((var_12 ? var_13 : 16)))));
                }
            }
        }
    }
    #pragma endscop
}
