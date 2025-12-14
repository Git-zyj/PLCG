/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_9 ? var_3 : var_1))) ? var_5 : ((var_6 ? 40 : var_6))))) ? var_4 : (((~var_9) ? ((4 ? var_6 : var_1)) : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (arr_1 [i_0 - 1] [i_1]);
                    arr_6 [17] [i_1] [17] = ((((((arr_3 [i_0 + 1] [i_2 - 1]) - (arr_3 [i_0 + 1] [i_2 - 1])))) ? (arr_3 [i_0 - 1] [i_2 + 3]) : ((var_3 ? (arr_3 [i_0 - 1] [i_2 - 1]) : var_6))));
                }
            }
        }
    }
    var_12 -= ((((((var_5 ? var_8 : var_8)))) ? (((var_4 ? var_5 : (var_2 & 230)))) : (max((~52), var_3))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_13 = (((arr_8 [i_3]) ? var_3 : (16 && var_5)));
        var_14 *= 12403;
    }
    var_15 = -12404;
    #pragma endscop
}
