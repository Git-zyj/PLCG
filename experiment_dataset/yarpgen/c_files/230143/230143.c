/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~1887932773);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((-(arr_7 [i_1] [i_1 + 1] [i_1]))));
                                arr_13 [i_0] [15] [i_0] [i_1] [i_0] [i_0] [i_0] = (4240081958 ? 351078451829247625 : -1887932774);
                                arr_14 [i_1 - 1] [i_1] [i_3] [i_4] = (((!(arr_1 [i_0] [i_0]))));
                            }
                        }
                    }
                    arr_15 [i_0] [16] [i_1] = 2147483647;
                }
            }
        }
    }
    #pragma endscop
}
