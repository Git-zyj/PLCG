/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_8;
                    arr_9 [i_0] [i_0] = (var_3 & -1758807103);
                    var_18 = (~-82);
                    var_19 -= (((-124 + 2147483647) << (((-15599 + 15629) - 30))));
                }
            }
        }
        var_20 = (-993638309 ? (~var_6) : (arr_3 [i_0] [i_0] [i_0]));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_21 = (arr_10 [i_3]);
        arr_12 [i_3] = ((!(((((((arr_10 [i_3]) & (arr_11 [i_3])))) ? (min((arr_10 [17]), var_3)) : 7975)))));
    }
    var_22 = ((((min(-28123, var_0))) ? ((min(28128, var_8))) : -28128));
    var_23 *= var_4;
    #pragma endscop
}
