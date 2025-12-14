/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_1, ((((var_8 + 156658162) ? ((var_2 ? var_7 : var_9)) : var_9)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [11] = var_5;
        arr_4 [i_0] = (4138309131 - 2267252626);
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_11 = (min((~var_3), (arr_8 [10] [10] [i_1 + 1])));
                var_12 |= var_8;
                arr_9 [i_2] = (max(((~((2267252608 << (var_9 - 27798))))), ((max(var_5, var_8)))));
                var_13 = (min(var_13, -6302));
            }
        }
    }
    var_14 = (min(1952313731413585561, 2027714670));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_15 += (arr_5 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    arr_18 [1] [i_3] [i_5 + 3] [i_5] = var_1;
                    arr_19 [i_3] [i_4] [i_3] = 2267252626;
                    var_16 = (min(var_16, (((((!(arr_8 [i_3] [i_4] [10]))) && var_3)))));
                    arr_20 [i_3] [i_3] [i_3] [i_3] = ((6299 >> (((((arr_16 [i_4] [i_3]) ? var_1 : 2267252626)) - 17572116605467020294))));
                }
            }
        }
    }
    #pragma endscop
}
