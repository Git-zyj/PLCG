/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max((arr_0 [i_0] [i_0]), ((((max(2387747930, var_18))) ? (((max(16384, -1)))) : var_4))));
                var_21 = (-1 <= var_14);
                var_22 = (min((arr_2 [11]), (max(26, 1907219366))));
                var_23 = (!1346929926);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = (arr_1 [i_2]);
        arr_9 [i_2] = ((~((16369 ? var_6 : -1))));
    }
    #pragma endscop
}
