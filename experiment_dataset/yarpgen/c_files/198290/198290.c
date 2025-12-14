/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 133;
        var_12 = ((-29 + (~var_6)));
        var_13 = (((~-406137950944578028) || 156));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            {
                var_14 = (((min(-31224, (arr_0 [i_1] [i_2])))));
                arr_8 [i_2] = (~-4951615564399236417);
            }
        }
    }
    #pragma endscop
}
