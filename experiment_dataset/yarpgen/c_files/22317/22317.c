/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(((var_4 ? -479574776 : var_8), ((var_3 ? 479574775 : var_0))))));
    var_11 = (max(var_7, ((min(1, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (max((-2147483647 - 1), ((~(arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 2])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] = -479574776;
                    arr_9 [i_1] = ((1 ? 437635451 : var_4));
                    var_12 -= 2147483647;
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 1] = (~-479574776);
                    arr_11 [i_0] [i_1] [13] = (((arr_7 [i_1]) & var_4));
                }
            }
        }
    }
    #pragma endscop
}
