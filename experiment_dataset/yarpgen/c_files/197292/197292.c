/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_12 = arr_2 [i_0];
        var_13 = (~-2143821725);
        arr_3 [i_0] [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [3] = (((((~(arr_5 [i_1 - 1])))) ? ((var_2 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]))) : 6886876196907533594));
        var_14 = min(236, (((((236 ? var_6 : var_3))) ? ((-1920239744 ? (arr_1 [i_1] [i_1]) : var_5)) : (arr_1 [i_1 - 1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_15 ^= 2143821711;
                    var_16 = (max((((arr_6 [i_1 - 1]) ? var_1 : var_1)), var_8));
                }
            }
        }
    }
    #pragma endscop
}
