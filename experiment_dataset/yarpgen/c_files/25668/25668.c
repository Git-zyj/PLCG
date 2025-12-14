/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_10 = 56;
        arr_2 [i_0] [i_0 - 2] |= (~1881276419100067357);
    }
    var_11 = ((!(((~(-52 < 238))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_12 = (max(var_12, var_8));
                arr_7 [i_1] [i_1] = var_5;
                arr_8 [i_2] = (var_8 ? ((-(var_1 + 31))) : ((min(var_3, 56))));
            }
        }
    }
    #pragma endscop
}
