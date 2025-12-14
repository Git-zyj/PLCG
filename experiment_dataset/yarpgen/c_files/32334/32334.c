/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min(var_7, ((39943 >> (var_2 - 2793095275)))))));
    var_14 = (min(var_14, -var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 += (((arr_1 [i_0] [i_0]) ? var_10 : var_0));
        var_16 ^= (!var_3);
        var_17 = ((~((var_9 << (((arr_0 [8] [i_0]) - 2713039476))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = (1937894716 << (((arr_11 [i_1] [i_1 - 2] [i_3] [i_3]) - 24537)));
                        var_19 -= ((arr_1 [i_1 + 1] [i_1]) + var_2);
                        var_20 = var_2;
                        var_21 = (((~(arr_0 [i_0] [i_1 - 2]))));
                        var_22 = (arr_10 [i_0] [13] [i_2] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_23 += var_0;
        var_24 = ((~(~122)));
    }
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
