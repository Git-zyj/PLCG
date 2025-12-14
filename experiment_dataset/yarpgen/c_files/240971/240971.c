/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (((arr_3 [i_0]) && var_9));
        arr_4 [i_0] [i_0] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_1] [i_0] [i_0]) ? (arr_7 [20] [20] [i_2] [i_2]) : (arr_2 [i_0])));
                    arr_11 [22] [i_1] [i_2] |= (((arr_7 [i_0] [i_1] [i_2] [i_2]) % var_2));
                }
            }
        }
    }
    var_12 = (((((78 < 76) > -var_2)) ? (~var_2) : (((!var_3) ? var_5 : 16256))));
    var_13 = ((var_8 | ((var_8 ? var_5 : var_1))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            {
                arr_18 [i_3] [21] = ((((((~(arr_12 [i_3 + 3]))) + 2147483647)) >> (((arr_12 [i_3 - 2]) - 20489))));
                var_14 = min(255, var_6);
            }
        }
    }
    #pragma endscop
}
