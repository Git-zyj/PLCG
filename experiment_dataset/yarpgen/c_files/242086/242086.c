/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (((arr_3 [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : (((arr_5 [i_0] [i_0] [i_1]) ? var_10 : var_0))));
                var_13 &= (~((min(16, 238))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (-404115628 >= var_5);
                    arr_12 [i_0] [i_1] [i_2] [i_2] = var_10;
                }
            }
        }
    }
    var_14 = 1968691379;
    #pragma endscop
}
