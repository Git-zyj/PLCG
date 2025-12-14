/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 -= ((!((((((-1088763534 ? (arr_2 [i_0]) : var_9))) ? (var_8 * var_4) : var_7)))));
                                arr_14 [i_1] [i_1] = (min(1824414341, ((~(var_7 + 1824414341)))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = (34 % ((~(~var_8))));
                            }
                        }
                    }
                }
                arr_16 [i_1] = ((+(((arr_9 [i_1] [i_1] [i_0] [i_0]) ? (arr_12 [i_1] [i_1]) : -46))));
                var_12 = (((((~(var_8 >= var_10)))) ? ((min(1375850462, (arr_12 [i_1] [i_1])))) : (arr_13 [i_0] [i_1] [i_1] [i_1] [i_0])));
                arr_17 [i_0] [i_1] [i_1] = (arr_6 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_13 = ((var_4 ? var_8 : (((min(1824414322, var_4)) % -1824414341))));
    var_14 = (max((~var_2), var_0));
    var_15 = var_10;
    var_16 = (((!-var_0) | var_2));
    #pragma endscop
}
